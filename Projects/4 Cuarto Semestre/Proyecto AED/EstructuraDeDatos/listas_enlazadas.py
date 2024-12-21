"""
Módulo para mostrar opciones para manipular listas enlazadas en la ventana principal.
"""

import tkinter as tk
from tkinter import messagebox, simpledialog

from value.data import AED, ListaEnlazada


def window_listas_enlazadas(frame: tk.Frame, aed: AED) -> None:
    """
    Muestra opciones para manipular listas enlazadas en la misma ventana.
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
        command=lambda: mostrar_ventana_insertar(aed, canvas),
    )
    btn_actualizar = tk.Button(
        frame_botones,
        text="Actualizar",
        command=lambda: mostrar_ventana_actualizar(aed, canvas),
    )
    btn_borrar = tk.Button(
        frame_botones,
        text="Borrar",
        command=lambda: mostrar_ventana_borrar(aed, canvas),
    )

    # Empaquetar los botones horizontalmente en el frame_botones
    btn_insertar.pack(padx=10, side="left")
    btn_actualizar.pack(padx=10, side="left")
    btn_borrar.pack(padx=10, side="left")

    # Crear un canvas para dibujar la lista enlazada
    canvas = tk.Canvas(frame, width=800, height=200, bg="white")
    canvas.pack(pady=20)

    # Dibujar la lista enlazada inicial
    dibujar_lista_enlazada(canvas, aed.lista_enlazada)


def dibujar_lista_enlazada(canvas: tk.Canvas, lista: ListaEnlazada) -> None:
    """
    Dibuja la lista enlazada en el canvas.
    """
    canvas.delete("all")  # Limpiar el canvas

    actual = lista.cabeza
    x, y = 50, 50  # Coordenadas iniciales

    while actual:
        # Dibujar el nodo
        canvas.create_rectangle(x, y, x + 100, y + 50, fill="white")
        canvas.create_text(x + 50, y + 25, text=str(actual.dato))

        # Dibujar la flecha al siguiente nodo
        if actual.siguiente:
            canvas.create_line(
                x + 100, y + 25, x + 150, y + 25, arrow=tk.LAST, fill="red"
            )

        # Mover las coordenadas para el siguiente nodo
        x += 150
        actual = actual.siguiente


def mostrar_ventana_insertar(aed: AED, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese un valor a insertar en la lista.
    """
    valor = simpledialog.askstring("Insertar", "Ingrese el valor a insertar:")

    if valor is not None:
        aed.modificar_lista_enlazada(aed.lista_enlazada, action="insertar", value=valor)
        dibujar_lista_enlazada(canvas, aed.lista_enlazada)


def mostrar_ventana_actualizar(aed: AED, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese el índice
    y el nuevo valor a actualizar en la lista.
    """
    indice = simpledialog.askinteger(
        "Actualizar", "Ingrese el índice del Nodo a actualizar:"
    )

    if indice is not None:
        if 0 <= indice < aed.lista_enlazada.longitud():
            nuevo_valor = simpledialog.askstring(
                "Actualizar", "Ingrese el nuevo valor:"
            )

            if nuevo_valor is not None:
                aed.modificar_lista_enlazada(
                    aed.lista_enlazada,
                    action="actualizar",
                    value=nuevo_valor,
                    indice=indice,
                )
                dibujar_lista_enlazada(canvas, aed.lista_enlazada)
        else:
            messagebox.showerror("Error", "Índice fuera de rango.")


def mostrar_ventana_borrar(aed: AED, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese el índice del Nodo a borrar en la lista.
    """
    indice = simpledialog.askinteger("Borrar", "Ingrese el índice del Nodo a borrar:")

    if indice is not None:
        if 0 <= indice < aed.lista_enlazada.longitud():
            aed.modificar_lista_enlazada(
                aed.lista_enlazada, action="borrar", indice=indice
            )
            dibujar_lista_enlazada(canvas, aed.lista_enlazada)
        else:
            messagebox.showerror("Error", "Índice fuera de rango.")
