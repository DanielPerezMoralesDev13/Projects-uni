"""
Módulo para manipular arreglos unidimensionales en la interfaz gráfica.
"""

import tkinter as tk
from tkinter import messagebox, simpledialog, ttk

from value.data import AED


def mostrar_ventana_insertar(aed: AED, tabla: ttk.Treeview) -> None:
    """
    Muestra una ventana para que el usuario ingrese un valor a insertar en la lista.
    """
    # Crear una ventana emergente para ingresar el valor
    valor = simpledialog.askstring("Insertar", "Ingrese el valor a insertar:")

    if valor is not None:
        # Insertar el valor en la lista
        aed.modificar_lista(action="insertar", value=valor)

        # Actualizar la tabla
        tabla.insert("", "end", values=(len(aed.lista) - 1, valor))


def mostrar_ventana_borrar(aed: AED, tabla: ttk.Treeview) -> None:
    """
    Muestra una ventana para que el usuario ingrese el índice del valor a borrar en la lista.
    """
    # Crear una ventana emergente para ingresar el índice
    indice = simpledialog.askinteger("Borrar", "Ingrese el índice del valor a borrar:")

    if indice is not None:
        # Verificar si el índice es válido
        if 0 <= indice < len(aed.lista):
            # Borrar el valor en el índice especificado
            aed.modificar_lista(action="borrar", index=indice)

            # Actualizar la tabla
            for item in tabla.get_children():
                tabla.delete(item)
            for i, valor in enumerate(aed.lista):
                tabla.insert("", "end", values=(i, valor))
        else:
            # Mostrar una ventana emergente de error
            messagebox.showerror(
                "Error", "Índice fuera de rango. Por favor, ingrese un índice válido."
            )


def mostrar_ventana_actualizar(aed: AED, tabla: ttk.Treeview) -> None:
    """
    Muestra una ventana para que el usuario ingrese el índice
    y el nuevo valor a actualizar en la lista.
    """
    # Crear una ventana emergente para ingresar el índice
    indice = simpledialog.askinteger(
        "Actualizar", "Ingrese el índice del valor a actualizar:"
    )

    if indice is not None:
        # Verificar si el índice es válido
        if 0 <= indice < len(aed.lista):
            # Crear una ventana emergente para ingresar el nuevo valor
            nuevo_valor = simpledialog.askstring(
                "Actualizar", "Ingrese el nuevo valor:"
            )

            if nuevo_valor is not None:
                # Actualizar el valor en el índice especificado
                aed.modificar_lista(
                    action="actualizar", value=nuevo_valor, index=indice
                )

                # Actualizar la tabla
                for item in tabla.get_children():
                    tabla.delete(item)
                for i, valor in enumerate(aed.lista):
                    tabla.insert("", "end", values=(i, valor))
        else:
            # Mostrar una ventana emergente de error
            messagebox.showerror(
                "Error", "Índice fuera de rango. Por favor, ingrese un índice válido."
            )


def window_arreglos_unidimensionales(frame: tk.Frame, aed: AED) -> None:
    """
    Muestra opciones para manipular arreglos unidimensionales en la misma ventana.
    """
    # Limpiar el frame existente
    for widget in frame.winfo_children():
        widget.destroy()

    # Crear un frame para contener la tabla
    frame_tabla = tk.Frame(frame)
    frame_tabla.pack(pady=10, fill="both", expand=True)

    # Crear la tabla
    tabla = ttk.Treeview(frame_tabla, columns=("indice", "valor"), show="headings")
    tabla.heading("indice", text="Índice")
    tabla.heading("valor", text="Valor")

    # Insertar los datos actuales de la lista en la tabla
    for i, valor in enumerate(aed.lista):
        tabla.insert("", "end", values=(i, valor))

    # Empaquetar la tabla
    tabla.pack(fill="both", expand=True)

    # Crear un frame para contener los botones
    frame_botones = tk.Frame(frame)
    frame_botones.pack(pady=10)

    # Crear botones para las operaciones
    btn_insertar = tk.Button(
        frame_botones,
        text="Insertar",
        command=lambda: mostrar_ventana_insertar(aed, tabla),
    )
    btn_actualizar = tk.Button(
        frame_botones,
        text="Actualizar",
        command=lambda: mostrar_ventana_actualizar(aed, tabla),
    )
    btn_borrar = tk.Button(
        frame_botones, text="Borrar", command=lambda: mostrar_ventana_borrar(aed, tabla)
    )

    # Empaquetar los botones horizontalmente en el frame_botones
    btn_insertar.pack(padx=10, side="left")
    btn_actualizar.pack(padx=10, side="left")
    btn_borrar.pack(padx=10, side="left")
