"""
Ventana de cola de impresión
"""

import tkinter as tk
from tkinter import messagebox, simpledialog

from value.data import Cola


def dibujar_cola(canvas: tk.Canvas, cola: Cola) -> None:
    """
    Dibuja la cola en el canvas.
    """
    canvas.delete("all")  # Limpiar el canvas

    x, y = 50, 50  # Coordenadas iniciales
    for item in cola.mostrar():
        # Dibujar el nodo
        canvas.create_rectangle(x, y, x + 100, y + 50, fill="white")
        canvas.create_text(x + 50, y + 25, text=str(item))

        # Mover las coordenadas para el siguiente nodo
        y += 60


def mostrar_ventana_enqueue(cola: Cola, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese un valor a insertar en la cola.
    """
    valor = simpledialog.askstring("Enqueue", "Ingrese el valor a insertar:")

    if valor is not None:
        cola.enqueue(valor)
        dibujar_cola(canvas, cola)


def mostrar_ventana_dequeue(cola: Cola, canvas: tk.Canvas) -> None:
    """
    Elimina el valor en el frente de la cola y actualiza el canvas.
    """
    if cola.is_empty():
        messagebox.showerror("Error", "La cola está vacía.")
    else:
        cola.dequeue()
        dibujar_cola(canvas, cola)


def window_cola(frame: tk.Frame, cola: Cola) -> None:
    """
    Muestra opciones para manipular una cola en la misma ventana.
    """
    # Limpiar el frame existente
    for widget in frame.winfo_children():
        widget.destroy()

    # Crear un frame para contener los botones
    frame_botones = tk.Frame(frame)
    frame_botones.pack(pady=10)

    # Crear botones para las operaciones
    btn_enqueue = tk.Button(
        frame_botones,
        text="Enqueue",
        command=lambda: mostrar_ventana_enqueue(cola, canvas),
    )
    btn_dequeue = tk.Button(
        frame_botones,
        text="Dequeue",
        command=lambda: mostrar_ventana_dequeue(cola, canvas),
    )
    btn_front = tk.Button(
        frame_botones,
        text="Front",
        command=lambda: messagebox.showinfo("Front", f"Frente: {cola.front()}"),
    )

    # Empaquetar los botones horizontalmente en el frame_botones
    btn_enqueue.pack(padx=10, side="left")
    btn_dequeue.pack(padx=10, side="left")
    btn_front.pack(padx=10, side="left")

    # Crear un canvas para dibujar la cola
    canvas = tk.Canvas(frame, width=200, height=400, bg="white")
    canvas.pack(pady=20)

    # Dibujar la cola inicial
    dibujar_cola(canvas, cola)
