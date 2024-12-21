"""
Este módulo contiene la implementación de una ventana para manipular un grafo.
"""

import math
import tkinter as tk
from tkinter import messagebox, simpledialog

from value.data import Grafo, NodoGrafo


def dibujar_grafo(canvas: tk.Canvas, grafo: Grafo) -> None:
    """
    Dibuja el grafo en el canvas.
    """
    canvas.delete("all")  # Limpiar el canvas

    nodos_pos = {}
    width = canvas.winfo_width()
    height = canvas.winfo_height()
    radius = 20
    offset = 50

    # Calcular posiciones de los nodos
    for i, (dato, nodo) in enumerate(grafo.nodos.items()):
        angle = 2 * math.pi * i / len(grafo.nodos)
        x = width // 2 + int((width // 2 - offset) * 0.8 * math.cos(angle))
        y = height // 2 + int((height // 2 - offset) * 0.8 * math.sin(angle))
        nodos_pos[dato] = (x, y)

    # Dibujar aristas
    for nodo in grafo.nodos.values():
        for vecino in nodo.vecinos:
            x1, y1 = nodos_pos[nodo.dato]
            x2, y2 = nodos_pos[vecino.dato]
            canvas.create_line(x1, y1, x2, y2, fill="red")

    # Dibujar nodos
    for dato, (x, y) in nodos_pos.items():
        canvas.create_oval(x - radius, y - radius, x + radius, y + radius, fill="white")
        canvas.create_text(x, y, text=str(dato))


def mostrar_ventana_agregar_nodo(grafo: Grafo, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese un nodo a agregar al grafo.
    """
    valor = simpledialog.askstring("Agregar Nodo", "Ingrese el valor del nodo:")

    if valor is not None:
        grafo.agregar_nodo(valor)
        dibujar_grafo(canvas, grafo)


def mostrar_ventana_agregar_arista(grafo: Grafo, canvas: tk.Canvas) -> None:
    """
    Muestra una ventana para que el usuario ingrese una arista a agregar al grafo.
    """
    valor1 = simpledialog.askstring(
        "Agregar Arista", "Ingrese el valor del primer nodo:"
    )
    valor2 = simpledialog.askstring(
        "Agregar Arista", "Ingrese el valor del segundo nodo:"
    )

    if valor1 is not None and valor2 is not None:
        grafo.agregar_arista(valor1, valor2)
        dibujar_grafo(canvas, grafo)


def window_grafo(frame: tk.Frame, grafo: Grafo) -> None:
    """
    Muestra opciones para manipular un grafo en la misma ventana.
    """
    # Limpiar el frame existente
    for widget in frame.winfo_children():
        widget.destroy()

    # Crear un frame para contener los botones
    frame_botones = tk.Frame(frame)
    frame_botones.pack(pady=10)

    # Crear botones para las operaciones
    btn_agregar_nodo = tk.Button(
        frame_botones,
        text="Agregar Nodo",
        command=lambda: mostrar_ventana_agregar_nodo(grafo, canvas),
    )
    btn_agregar_arista = tk.Button(
        frame_botones,
        text="Agregar Arista",
        command=lambda: mostrar_ventana_agregar_arista(grafo, canvas),
    )

    # Empaquetar los botones horizontalmente en el frame_botones
    btn_agregar_nodo.pack(padx=10, side="left")
    btn_agregar_arista.pack(padx=10, side="left")

    # Crear un canvas para dibujar el grafo
    canvas = tk.Canvas(frame, width=800, height=600, bg="white")
    canvas.pack(pady=20)

    # Dibujar el grafo inicial
    dibujar_grafo(canvas, grafo)
