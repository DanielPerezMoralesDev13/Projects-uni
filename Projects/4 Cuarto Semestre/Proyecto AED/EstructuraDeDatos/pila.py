"""
Este modulo contiene la implementacion de una pila
"""

import tkinter as tk
from tkinter import messagebox, simpledialog

from value.data import Pila


def dibujar_pila(canvas: tk.Canvas, pila: Pila) -> None:
    """
    Dibuja la pila en el canvas.
    """
    canvas.delete("all")  # Limpiar el canvas

    x, y = 50, 50  # Coordenadas iniciales
    for item in reversed(pila.mostrar()):
        # Dibujar el nodo
        canvas.create_rectangle(x, y, x + 100, y + 50, fill="white")
        canvas.create_text(x + 50, y + 25, text=str(item))

        # Mover las coordenadas para el siguiente nodo
        y += 60


def mostrar_ventana_push(pila: Pila, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese un valor a insertar en la pila.
    """
    valor = simpledialog.askstring("Push", "Ingrese el valor a insertar:")

    if valor is not None:
        pila.push(valor)
        dibujar_pila(canvas, pila)


def mostrar_ventana_pop(pila: Pila, canvas: tk.Canvas) -> None:
    """
    Elimina el valor en la cima de la pila y actualiza el canvas.
    """
    if pila.is_empty():
        messagebox.showerror("Error", "La pila está vacía.")
    else:
        pila.pop()
        dibujar_pila(canvas, pila)


def window_pila(frame: tk.Frame, pila: Pila) -> None:
    """
    Muestra opciones para manipular una pila en la misma ventana.
    """
    # Limpiar el frame existente
    for widget in frame.winfo_children():
        widget.destroy()

    # Crear un frame para contener los botones
    frame_botones = tk.Frame(frame)
    frame_botones.pack(pady=10)

    # Crear botones para las operaciones
    btn_push = tk.Button(
        frame_botones, text="Push", command=lambda: mostrar_ventana_push(pila, canvas)
    )
    btn_pop = tk.Button(
        frame_botones, text="Pop", command=lambda: mostrar_ventana_pop(pila, canvas)
    )
    btn_peek = tk.Button(
        frame_botones,
        text="Peek",
        command=lambda: messagebox.showinfo("Peek", f"Cima: {pila.peek()}"),
    )

    # Empaquetar los botones horizontalmente en el frame_botones
    btn_push.pack(padx=10, side="left")
    btn_pop.pack(padx=10, side="left")
    btn_peek.pack(padx=10, side="left")

    # Crear un canvas para dibujar la pila
    canvas = tk.Canvas(frame, width=200, height=400, bg="white")
    canvas.pack(pady=20)

    # Dibujar la pila inicial
    dibujar_pila(canvas, pila)
