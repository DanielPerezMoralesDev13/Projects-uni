"""
Ventana de explicación de algoritmos y estructuras de datos.    
"""

import tkinter as tk


def window_algoritmo(parent):
    for widget in parent.winfo_children():
        widget.destroy()

    canvas = tk.Canvas(parent)
    v_scrollbar = tk.Scrollbar(parent, orient="vertical", command=canvas.yview)
    h_scrollbar = tk.Scrollbar(parent, orient="horizontal", command=canvas.xview)
    scrollable_frame = tk.Frame(canvas)

    scrollable_frame.bind(
        "<Configure>", lambda e: canvas.configure(scrollregion=canvas.bbox("all"))
    )

    canvas.create_window((0, 0), window=scrollable_frame, anchor="nw")
    canvas.configure(yscrollcommand=v_scrollbar.set, xscrollcommand=h_scrollbar.set)

    canvas.pack(side="left", fill="both", expand=True)
    v_scrollbar.pack(side="right", fill="y")
    h_scrollbar.pack(side="bottom", fill="x")

    sections = [
        (
            "1. Algoritmo:",
            "Un algoritmo es una secuencia de pasos bien definidos para resolver un problema o realizar una tarea específica.\nEjemplo: Un algoritmo de ordenamiento organiza números en un orden específico.",
        ),
        (
            "2. Árboles:",
            "Un árbol es una estructura de datos jerárquica compuesta por nodos, donde cada nodo tiene un valor y un conjunto de nodos hijos.\nEl nodo principal se llama raíz, y los nodos sin hijos se denominan hojas.\nEjemplo: Un árbol binario, donde cada nodo tiene como máximo dos hijos.",
        ),
        (
            "3. Arreglos unidimensionales:",
            "También conocidos como vectores, son estructuras de datos lineales que almacenan elementos del mismo tipo en ubicaciones contiguas de memoria.\nSe accede a los elementos mediante un índice numérico.\nEjemplo: Una lista de números [1, 2, 3, 4, 5].",
        ),
        (
            "4. Cola:",
            "Una cola es una estructura de datos lineal que sigue el principio FIFO (First In, First Out), donde el primer elemento en entrar es el primero en salir.\nEjemplo: Una fila para entrar al cine.",
        ),
        (
            "5. Grafos:",
            "Un grafo es una estructura de datos que consta de un conjunto de nodos (vértices) y un conjunto de aristas (conexiones entre nodos).\nLos grafos pueden ser dirigidos (las conexiones tienen dirección) o no dirigidos.\nEjemplo: Un mapa de ciudades conectadas por carreteras.",
        ),
        (
            "6. Lista circular:",
            "Una lista circular es una variación de las listas enlazadas, donde el último nodo apunta de vuelta al primer nodo, formando un ciclo.\nEjemplo: Un carrusel de imágenes que vuelve al inicio después de llegar al final.",
        ),
        (
            "7. Lista doblemente enlazada:",
            "Una lista doblemente enlazada es una estructura de datos donde cada nodo tiene un puntero al nodo siguiente y al nodo anterior.\nEsto permite navegar tanto hacia adelante como hacia atrás en la lista.\nEjemplo: Una lista de reproducción que permite saltar canciones hacia adelante o hacia atrás.",
        ),
        (
            "8. Listas enlazadas:",
            "Una lista enlazada es una estructura de datos lineal compuesta por nodos, donde cada nodo contiene un valor y un puntero al siguiente nodo.\nEjemplo: Una cadena de personas pasándose un mensaje.",
        ),
        (
            "9. Pila:",
            "Una pila es una estructura de datos lineal que sigue el principio LIFO (Last In, First Out), donde el último elemento agregado es el primero en salir.\nEjemplo: Una pila de platos en un fregadero.",
        ),
        (
            "10. Recursividad:",
            "La recursividad es una técnica en programación donde una función se llama a sí misma para resolver un problema dividiéndolo en subproblemas más pequeños.\nEjemplo: El cálculo del factorial de un número n! se define como n * (n-1)!.",
        ),
    ]

    for title_text, description_text in sections:
        title = tk.Label(
            scrollable_frame, text=title_text, font=("Helvetica", 18, "bold")
        )
        title.pack(pady=10)

        description = tk.Label(
            scrollable_frame,
            text=description_text,
            font=("Helvetica", 14, "italic", "bold"),
            justify="left",
        )
        description.pack(pady=10, padx=20, anchor="w")
