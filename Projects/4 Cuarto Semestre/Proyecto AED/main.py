"""
Proyecto Algoritmos y Estructuras de Datos
"""

import tkinter as tk

import ttkbootstrap as ttk

from EstructuraDeDatos import (
    algoritmo,
    arboles,
    arreglos_unidimensionales,
    cola,
    grafos,
    lista_circular,
    lista_doblemente_enlazada,
    listas_enlazadas,
    pila,
    recursividad,
)
from value.data import AED

aed: AED = AED()

ventana = ttk.Window(themename="darkly")
ventana.title(
    "Proyecto Algoritmos y Estructuras de Datos 2024 (Pulse 'Esc' para salir)"
)
# ventana.geometry(f"{ventana.winfo_screenwidth()}x{ventana.winfo_screenheight()}")
ventana.bind("<Escape>", lambda e: ventana.quit())

menu_bar = tk.Menu(ventana)
frame = tk.Frame(ventana)
frame.pack(expand=True, fill="both")

algoritmo_menu = tk.Menu(menu_bar, tearoff=0)
algoritmo_menu.add_command(
    label="Algoritmo - Implementación de Algoritmos", command=lambda: algoritmo.window_algoritmo(frame)
)
menu_bar.add_cascade(label="1. Algoritmo", menu=algoritmo_menu)

arreglos_menu = tk.Menu(menu_bar, tearoff=0)
arreglos_menu.add_command(
    label="Arreglos Unidimensionales - Manejo de Arreglos",
    command=lambda: arreglos_unidimensionales.window_arreglos_unidimensionales(
        frame, aed
    ),
)
menu_bar.add_cascade(label="2. Arreglos Unidimensionales", menu=arreglos_menu)

listas_enlazadas_menu = tk.Menu(menu_bar, tearoff=0)
listas_enlazadas_menu.add_command(
    label="Listas Enlazadas - Estructura de Datos Lineal",
    command=lambda: listas_enlazadas.window_listas_enlazadas(frame, aed),
)
menu_bar.add_cascade(label="3. Listas Enlazadas", menu=listas_enlazadas_menu)

lista_doble_menu = tk.Menu(menu_bar, tearoff=0)
lista_doble_menu.add_command(
    label="Lista Doblemente Enlazada - Estructura de Datos Lineal",
    command=lambda: lista_doblemente_enlazada.window_lista_doblemente_enlazada(
        frame, aed.lista_doble_enlazada
    ),
)
menu_bar.add_cascade(label="4. Lista Doblemente Enlazada", menu=lista_doble_menu)

lista_circular_menu = tk.Menu(menu_bar, tearoff=0)
lista_circular_menu.add_command(
    label="Lista Circular - Estructura de Datos Circular",
    command=lambda: lista_circular.window_lista_circular(frame, aed.lista_circular),
)
menu_bar.add_cascade(label="5. Lista Circular", menu=lista_circular_menu)

pila_menu = tk.Menu(menu_bar, tearoff=0)
pila_menu.add_command(label="Pila - Estructura de Datos LIFO", command=lambda: pila.window_pila(frame, aed.pila))
menu_bar.add_cascade(label="6. Pila", menu=pila_menu)

cola_menu = tk.Menu(menu_bar, tearoff=0)
cola_menu.add_command(label="Cola - Estructura de Datos FIFO", command=lambda: cola.window_cola(frame, aed.cola))
menu_bar.add_cascade(label="7. Cola", menu=cola_menu)

recursividad_menu = tk.Menu(menu_bar, tearoff=0)
recursividad_menu.add_command(
    label="Recursividad - Técnicas Recursivas", command=lambda: recursividad.window_recursividad(frame)
)
menu_bar.add_cascade(label="8. Recursividad", menu=recursividad_menu)

arboles_menu = tk.Menu(menu_bar, tearoff=0)
arboles_menu.add_command(
    label="Arboles - Estructura de Datos Jerárquica", command=lambda: arboles.window_arbol(frame, aed.arbol)
)
menu_bar.add_cascade(label="9. Arboles", menu=arboles_menu)

grafos_menu = tk.Menu(menu_bar, tearoff=0)
grafos_menu.add_command(
    label="Grafos - Estructura de Datos No Lineal", command=lambda: grafos.window_grafo(frame, aed.grafo)
)
menu_bar.add_cascade(label="10. Grafos", menu=grafos_menu)

salir_menu = tk.Menu(menu_bar, tearoff=0)
salir_menu.add_command(label="Salir - Cerrar Aplicación", command=ventana.quit)
menu_bar.add_cascade(label="11. Salir", menu=salir_menu)

# Configurar la ventana para usar la barra de menú
ventana.config(menu=menu_bar)

# Iniciar el bucle principal de la ventana
ventana.mainloop()
