"""
Este módulo contiene la implementación de una ventana para manipular un árbol binario.
"""

import tkinter as tk
from tkinter import messagebox, simpledialog

from value.data import ArbolBinario, NodoArbol


def dibujar_arbol(canvas: tk.Canvas, arbol: ArbolBinario) -> None:
    """
    Dibuja el árbol binario en el canvas.
    """
    canvas.delete("all")  # Limpiar el canvas

    if arbol.raiz is not None:
        _dibujar_nodo(
            canvas, arbol.raiz, canvas.winfo_width() // 2, 20, canvas.winfo_width() // 4
        )


def _dibujar_nodo(
    canvas: tk.Canvas, nodo: NodoArbol, x: int, y: int, offset: int
) -> None:
    """
    Dibuja un nodo y sus hijos en el canvas.
    """
    if nodo.izquierdo:
        canvas.create_line(x, y, x - offset, y + 60, fill="red")
        _dibujar_nodo(canvas, nodo.izquierdo, x - offset, y + 60, offset // 2)
    if nodo.derecho:
        canvas.create_line(x, y, x + offset, y + 60, fill="red")
        _dibujar_nodo(canvas, nodo.derecho, x + offset, y + 60, offset // 2)

    canvas.create_oval(x - 20, y - 20, x + 20, y + 20, fill="white")
    canvas.create_text(x, y, text=str(nodo.dato))


def mostrar_ventana_insertar(arbol: ArbolBinario, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese un valor a insertar en el árbol.
    """
    valor = simpledialog.askstring("Insertar", "Ingrese el valor a insertar:")

    if valor is not None:
        arbol.insertar(valor)
        dibujar_arbol(canvas, arbol)


def mostrar_ventana_borrar(arbol: ArbolBinario, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese un valor a borrar del árbol.
    """
    valor = simpledialog.askstring("Borrar", "Ingrese el valor a borrar:")

    if valor is not None:
        if arbol.buscar(valor):
            arbol.eliminar(valor)
            dibujar_arbol(canvas, arbol)
        else:
            messagebox.showerror("Error", "El valor no existe en el árbol.")


def mostrar_ventana_actualizar(arbol: ArbolBinario, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese un valor a actualizar en el árbol.
    """
    valor_antiguo = simpledialog.askstring(
        "Actualizar", "Ingrese el valor a actualizar:"
    )
    if valor_antiguo is not None:
        if arbol.buscar(valor_antiguo):
            valor_nuevo = simpledialog.askstring(
                "Actualizar", "Ingrese el nuevo valor:"
            )
            if valor_nuevo is not None:
                arbol.eliminar(valor_antiguo)
                arbol.insertar(valor_nuevo)
                dibujar_arbol(canvas, arbol)
        else:
            messagebox.showerror("Error", "El valor no existe en el árbol.")


def window_arbol(frame: tk.Frame, arbol: ArbolBinario) -> None:
    """
    Muestra opciones para manipular un árbol binario en la misma ventana.
    """
    # Limpiar el frame existente
    for widget in frame.winfo_children():
        widget.destroy()

    # Crear un frame para contener los botones
    frame_botones = tk.Frame(frame)
    frame_botones.pack(pady=10)

    # Crear botones para las operaciones
    btn_insertar = tk.Button(
        frame_botones,
        text="Insertar",
        command=lambda: mostrar_ventana_insertar(arbol, canvas),
    )
    btn_borrar = tk.Button(
        frame_botones,
        text="Borrar",
        command=lambda: mostrar_ventana_borrar(arbol, canvas),
    )
    btn_actualizar = tk.Button(
        frame_botones,
        text="Actualizar",
        command=lambda: mostrar_ventana_actualizar(arbol, canvas),
    )

    # Empaquetar los botones horizontalmente en el frame_botones
    btn_insertar.pack(padx=10, side="left")
    btn_borrar.pack(padx=10, side="left")
    btn_actualizar.pack(padx=10, side="left")

    # Crear un canvas para dibujar el árbol
    canvas = tk.Canvas(frame, width=800, height=600, bg="white")
    canvas.pack(pady=30)

    # Dibujar el árbol inicial
    dibujar_arbol(canvas, arbol)
