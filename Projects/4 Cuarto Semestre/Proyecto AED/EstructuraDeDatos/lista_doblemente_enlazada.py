"""
Módulo para mostrar una interfaz gráfica para manipular listas doblemente enlazadas.
"""

import tkinter as tk
from tkinter import messagebox, simpledialog

from value.data import ListaDobleEnlazada


def dibujar_lista_doble_enlazada(canvas: tk.Canvas, lista: ListaDobleEnlazada) -> None:
    """
    Dibuja la lista doblemente enlazada en el canvas.
    """
    canvas.delete("all")  # Limpiar el canvas

    actual = lista.cabeza
    x, y = 10, 50  # Coordenadas iniciales ajustadas para estar más a la izquierda

    while actual:
        # Dibujar el nodo
        canvas.create_rectangle(x, y, x + 100, y + 50, fill="white")
        canvas.create_text(x + 50, y + 25, text=str(actual.dato))

        # Dibujar la flecha al siguiente nodo
        if actual.siguiente:
            canvas.create_line(
                x + 100, y + 25, x + 150, y + 25, arrow=tk.LAST, fill="red"
            )

        # Dibujar la flecha al nodo anterior
        if actual.anterior:
            canvas.create_line(x, y + 25, x - 50, y + 25, arrow=tk.LAST, fill="red")

        # Mover las coordenadas para el siguiente nodo
        x += 150
        actual = actual.siguiente


def mostrar_ventana_insertar(lista: ListaDobleEnlazada, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese un valor a insertar en la lista.
    """
    valor = simpledialog.askstring("Insertar", "Ingrese el valor a insertar:")

    if valor is not None:
        lista.insertar(valor)
        dibujar_lista_doble_enlazada(canvas, lista)


def mostrar_ventana_actualizar(lista: ListaDobleEnlazada, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese el índice y el nuevo valor a actualizar en la lista.
    """
    indice = simpledialog.askinteger(
        "Actualizar",
        "Ingrese el índice del Nodo de la lista doblemente enlazada a actualizar:",
    )

    if indice is not None:
        nuevo_valor = simpledialog.askstring("Actualizar", "Ingrese el nuevo valor:")

        if nuevo_valor is not None:
            lista.actualizar(indice, nuevo_valor)
            dibujar_lista_doble_enlazada(canvas, lista)


def mostrar_ventana_borrar(lista: ListaDobleEnlazada, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese el índice del Nodo de la lista doblemente enlazada a borrar en la lista.
    """
    indice = simpledialog.askinteger(
        "Borrar", "Ingrese el índice del Nodo de la lista doblemente enlazada a borrar:"
    )

    if indice is not None:
        if 0 <= indice < lista.longitud():
            lista.borrar(indice)
            dibujar_lista_doble_enlazada(canvas, lista)
        else:
            messagebox.showerror("Error", "Índice fuera de rango")


def window_lista_doblemente_enlazada(
    frame: tk.Frame, lista: ListaDobleEnlazada
) -> None:
    """
    Muestra opciones para manipular listas doblemente enlazadas en la misma ventana.
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
        command=lambda: mostrar_ventana_insertar(lista, canvas),
    )
    btn_actualizar = tk.Button(
        frame_botones,
        text="Actualizar",
        command=lambda: mostrar_ventana_actualizar(lista, canvas),
    )

    btn_borrar = tk.Button(
        frame_botones,
        text="Borrar",
        command=lambda: mostrar_ventana_borrar(lista, canvas),
    )

    # Empaquetar los botones horizontalmente en el frame_botones
    btn_insertar.pack(padx=10, side="left")
    btn_actualizar.pack(padx=10, side="left")
    btn_borrar.pack(padx=10, side="left")

    # Crear un canvas para dibujar la lista doblemente enlazada
    canvas = tk.Canvas(frame, width=800, height=200, bg="white")
    canvas.pack(pady=20)

    # Dibujar la lista doblemente enlazada inicial
    dibujar_lista_doble_enlazada(canvas, lista)