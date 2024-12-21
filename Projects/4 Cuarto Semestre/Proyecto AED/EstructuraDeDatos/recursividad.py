"""
Esta Ventana es para la recursividad
"""

import tkinter as tk
from tkinter import END, RIGHT, Scrollbar, Text, Toplevel, Y


def mostrar_codigo_coloreado(titulo: str, codigo: str) -> None:
    """
    Muestra el código coloreado en una ventana emergente.
    """
    ventana = Toplevel()
    ventana.title(titulo)

    text_widget = Text(ventana, wrap="word")
    text_widget.pack(expand=True, fill="both")

    # Agregar un scrollbar
    scrollbar = Scrollbar(ventana, command=text_widget.yview)
    scrollbar.pack(side=RIGHT, fill=Y)
    text_widget.config(yscrollcommand=scrollbar.set)

    # Insertar el código en el widget de texto
    text_widget.insert(END, codigo)

    # Aplicar colores
    text_widget.tag_configure("keyword", foreground="blue")
    text_widget.tag_configure("function", foreground="purple")
    text_widget.tag_configure("number", foreground="red")

    # Añadir tags para colorear el texto
    keywords = ["def", "if", "elif", "else", "return"]
    for keyword in keywords:
        start = "1.0"
        while True:
            start = text_widget.search(keyword, start, stopindex=END)
            if not start:
                break
            end = f"{start}+{len(keyword)}c"
            text_widget.tag_add("keyword", start, end)
            start = end

    # Colorear el nombre de la función
    start = "1.0"
    while True:
        start = text_widget.search("fibonacci", start, stopindex=END)
        if not start:
            break
        end = f"{start}+{len('fibonacci')}c"
        text_widget.tag_add("function", start, end)
        start = end

    # Colorear los números
    for number in ["0", "1", "-1", "-2"]:
        start = "1.0"
        while True:
            start = text_widget.search(number, start, stopindex=END)
            if not start:
                break
            end = f"{start}+{len(number)}c"
            text_widget.tag_add("number", start, end)
            start = end

    text_widget.config(state=tk.DISABLED)


def mostrar_codigo_fibonacci() -> None:
    """
    Muestra el código del algoritmo de Fibonacci.
    """
    codigo = (
        "def fibonacci(n):\n"
        "    if n <= 0:\n"
        "        return 0\n"
        "    elif n == 1:\n"
        "        return 1\n"
        "    else:\n"
        "        return fibonacci(n-1) + fibonacci(n-2)\n"
    )
    mostrar_codigo_coloreado("Algoritmo de Fibonacci", codigo)


def mostrar_codigo_torre_hanoi() -> None:
    """
    Muestra el código del algoritmo de la Torre de Hanoi.
    """
    codigo = (
        "def torre_hanoi(n, origen, destino, auxiliar):\n"
        "    if n == 1:\n"
        "        print(f'Mover disco 1 de {origen} a {destino}')\n"
        "    else:\n"
        "        torre_hanoi(n-1, origen, auxiliar, destino)\n"
        "        print(f'Mover disco {n} de {origen} a {destino}')\n"
        "        torre_hanoi(n-1, auxiliar, destino, origen)\n"
    )
    mostrar_codigo_coloreado("Algoritmo de la Torre de Hanoi", codigo)


def mostrar_codigo_factorial() -> None:
    """
    Muestra el código del algoritmo de cálculo del factorial.
    """
    codigo = (
        "def factorial(n):\n"
        "    if n == 0:\n"
        "        return 1\n"
        "    else:\n"
        "        return n * factorial(n-1)\n"
    )
    mostrar_codigo_coloreado("Algoritmo de Factorial", codigo)


def window_recursividad(frame: tk.Frame) -> None:
    """
    Muestra la ventana para la recursividad.
    """
    # Limpiar el frame existente
    for widget in frame.winfo_children():
        widget.destroy()
    # Mostrar el concepto de recursividad
    concepto = (
        "La recursividad es una técnica de programación en la que una función se llama a sí misma "
        "directamente o indirectamente para resolver un problema. Es útil para resolver problemas "
        "que pueden dividirse en subproblemas más pequeños del mismo tipo."
    )
    label_concepto = tk.Label(
        frame,
        text=concepto,
        wraplength=600,
        justify="left",
        fg="yellow",
        font=("Helvetica", 16, "bold"),
    )
    label_concepto.pack(pady=10)

    # Crear un frame para contener los botones
    frame_botones = tk.Frame(frame)
    frame_botones.pack(pady=10)

    # Crear botones para los algoritmos
    btn_fibonacci = tk.Button(
        frame_botones,
        text="Algoritmo de Fibonacci",
        command=mostrar_codigo_fibonacci,
        width=25,
        font=("Helvetica", 14),
    )
    btn_torre_hanoi = tk.Button(
        frame_botones,
        text="Algoritmo de Torre de Hanoi",
        command=mostrar_codigo_torre_hanoi,
        width=25,
        font=("Helvetica", 14),
    )
    btn_factorial = tk.Button(
        frame_botones,
        text="Algoritmo de Factorial",
        command=mostrar_codigo_factorial,
        width=25,
        font=("Helvetica", 14),
    )

    # Empaquetar los botones verticalmente en el frame_botones
    btn_fibonacci.pack(pady=10)
    btn_torre_hanoi.pack(pady=10)
    btn_factorial.pack(pady=10)
