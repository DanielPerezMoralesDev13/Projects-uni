"""
Este módulo contiene la estructura de datos utilizada para almacenar los datos.
"""

from typing import Any, Dict, List, Optional, Set


class NodoGrafo:
    """
    Esta clase representa un nodo en un grafo.
    """

    def __init__(self, dato: Any) -> None:
        self.dato = dato
        self.vecinos: Set[NodoGrafo] = set()

    def agregar_vecino(self, vecino: "NodoGrafo") -> None:
        """
        Añade un vecino al nodo.
        """
        self.vecinos.add(vecino)

    def __str__(self) -> str:
        return str(self.dato)


class Grafo:
    """
    Esta clase representa un grafo.
    """

    def __init__(self) -> None:
        self.nodos: Dict[Any, NodoGrafo] = {}

    def agregar_nodo(self, dato: Any) -> NodoGrafo:
        """
        Añade un nodo al grafo.
        """
        if dato not in self.nodos:
            self.nodos[dato] = NodoGrafo(dato)
        return self.nodos[dato]

    def agregar_arista(self, dato1: Any, dato2: Any) -> None:
        """
        Añade una arista entre dos nodos en el grafo. Si los nodos no existen, se crean.

        Args:
            dato1 (Any): El dato para el primer nodo.
            dato2 (Any): El dato para el segundo nodo.

        Returns:
            None
        """
        nodo1 = self.agregar_nodo(dato1)
        nodo2 = self.agregar_nodo(dato2)
        nodo1.agregar_vecino(nodo2)
        nodo2.agregar_vecino(nodo1)

    def obtener_nodo(self, dato: Any) -> Optional[NodoGrafo]:
        """
        Obtiene un nodo del grafo basado en el dato proporcionado.

        Args:
            dato (Any): El dato asociado con el nodo a ser recuperado.

        Returns:
            Optional[NodoGrafo]: El nodo asociado con el
            dato proporcionado si existe, de lo contrario None.
        """
        return self.nodos.get(dato)

    def __str__(self) -> str:
        resultado = ""
        for dato, nodo in self.nodos.items():
            resultado += f"{dato}: {[vecino.dato for vecino in nodo.vecinos]}\n"
        return resultado


class NodoArbol:
    """
    Esta clase representa un nodo en un árbol binario.
    """

    def __init__(self, dato: Any) -> None:
        self.dato = dato
        self.izquierdo: Optional[NodoArbol] = None
        self.derecho: Optional[NodoArbol] = None


class ArbolBinario:
    """
    Esta clase representa un árbol binario.
    """

    def __init__(self) -> None:
        self.raiz: Optional[NodoArbol] = None

    def insertar(self, dato: Any) -> None:
        """
        Inserta un nuevo nodo en el árbol binario.
        """
        if self.raiz is None:
            self.raiz = NodoArbol(dato)
        else:
            self._insertar_recursivo(self.raiz, dato)

    def _insertar_recursivo(self, nodo: NodoArbol, dato: Any) -> None:
        if dato < nodo.dato:
            if nodo.izquierdo is None:
                nodo.izquierdo = NodoArbol(dato)
            else:
                self._insertar_recursivo(nodo.izquierdo, dato)
        else:
            if nodo.derecho is None:
                nodo.derecho = NodoArbol(dato)
            else:
                self._insertar_recursivo(nodo.derecho, dato)

    def buscar(self, dato: Any) -> bool:
        """
        Busca un nodo en el árbol binario.
        """
        return self._buscar_recursivo(self.raiz, dato)

    def _buscar_recursivo(self, nodo: Optional[NodoArbol], dato: Any) -> bool:
        if nodo is None:
            return False
        if dato == nodo.dato:
            return True
        elif dato < nodo.dato:
            return self._buscar_recursivo(nodo.izquierdo, dato)
        else:
            return self._buscar_recursivo(nodo.derecho, dato)

    def eliminar(self, dato: Any) -> None:
        """
        Elimina un nodo del árbol binario.
        """
        self.raiz = self._eliminar_recursivo(self.raiz, dato)

    def _eliminar_recursivo(
        self, nodo: Optional[NodoArbol], dato: Any
    ) -> Optional[NodoArbol]:
        if nodo is None:
            return None
        if dato < nodo.dato:
            nodo.izquierdo = self._eliminar_recursivo(nodo.izquierdo, dato)
        elif dato > nodo.dato:
            nodo.derecho = self._eliminar_recursivo(nodo.derecho, dato)
        else:
            if nodo.izquierdo is None:
                return nodo.derecho
            elif nodo.derecho is None:
                return nodo.izquierdo
            temp = self._minimo_valor_nodo(nodo.derecho)
            nodo.dato = temp.dato
            nodo.derecho = self._eliminar_recursivo(nodo.derecho, temp.dato)
        return nodo

    def _minimo_valor_nodo(self, nodo: NodoArbol) -> NodoArbol:
        actual = nodo
        while actual.izquierdo is not None:
            actual = actual.izquierdo
        return actual

    def en_orden(self) -> List[Any]:
        """
        Devuelve una lista con los elementos del árbol en orden.
        """
        elementos: List[Any] = []
        self._en_orden_recursivo(self.raiz, elementos)
        return elementos

    def _en_orden_recursivo(
        self, nodo: Optional[NodoArbol], elementos: List[Any]
    ) -> None:
        if nodo:
            self._en_orden_recursivo(nodo.izquierdo, elementos)
            elementos.append(nodo.dato)
            self._en_orden_recursivo(nodo.derecho, elementos)

    def pre_orden(self) -> List[Any]:
        """
        Devuelve una lista con los elementos del árbol en preorden.
        """
        elementos: List[Any] = []
        self._pre_orden_recursivo(self.raiz, elementos)
        return elementos

    def _pre_orden_recursivo(
        self, nodo: Optional[NodoArbol], elementos: List[Any]
    ) -> None:
        if nodo:
            elementos.append(nodo.dato)
            self._pre_orden_recursivo(nodo.izquierdo, elementos)
            self._pre_orden_recursivo(nodo.derecho, elementos)

    def post_orden(self) -> List[Any]:
        """
        Devuelve una lista con los elementos del árbol en postorden.
        """
        elementos: List[Any] = []
        self._post_orden_recursivo(self.raiz, elementos)
        return elementos

    def _post_orden_recursivo(
        self, nodo: Optional[NodoArbol], elementos: List[Any]
    ) -> None:
        if nodo:
            self._post_orden_recursivo(nodo.izquierdo, elementos)
            self._post_orden_recursivo(nodo.derecho, elementos)
            elementos.append(nodo.dato)


class Cola:
    """
    Esta clase representa una cola utilizando una lista.
    """

    def __init__(self) -> None:
        self.items = []

    def tamano(self) -> int:
        """
        Devuelve el tamaño de la cola.
        """
        return len(self.items)

    def enqueue(self, item: Any) -> None:
        """
        Inserta un nuevo elemento al final de la cola.
        """
        self.items.append(item)

    def dequeue(self) -> Optional[Any]:
        """
        Elimina y devuelve el elemento en el frente de la cola.
        """
        if not self.items:
            return None
        return self.items.pop(0)

    def front(self) -> Optional[Any]:
        """
        Devuelve el elemento en el frente de la cola sin eliminarlo.
        """
        if not self.items:
            return None
        return self.items[0]

    def is_empty(self) -> bool:
        """
        Devuelve True si la cola está vacía, False en caso contrario.
        """
        return len(self.items) == 0

    def mostrar(self) -> List[Any]:
        """
        Devuelve una lista con los elementos de la cola.
        """
        return self.items[:]


class Pila:
    """
    Esta clase representa una pila utilizando una lista.
    """

    def __init__(self) -> None:
        self.items = []

    def push(self, item: Any) -> None:
        """
        Inserta un nuevo elemento en la cima de la pila.
        """
        self.items.append(item)

    def pop(self) -> Optional[Any]:
        """
        Elimina y devuelve el elemento en la cima de la pila.
        """
        if not self.items:
            return None
        return self.items.pop()

    def peek(self) -> Optional[Any]:
        """
        Devuelve el elemento en la cima de la pila sin eliminarlo.
        """
        if not self.items:
            return None
        return self.items[-1]

    def is_empty(self) -> bool:
        """
        Devuelve True si la pila está vacía, False en caso contrario.
        """
        return len(self.items) == 0

    def mostrar(self) -> List[Any]:
        """
        Devuelve una lista con los elementos de la pila.
        """
        return self.items[:]


class NodoCircular:
    """
    Esta clase representa un nodo en una lista circular.
    """

    def __init__(self, dato: Any) -> None:
        self.dato = dato
        self.siguiente: Optional[NodoCircular] = None


class ListaCircular:
    """
    Esta clase representa una lista circular.
    """

    def __init__(self) -> None:
        self.cabeza: Optional[NodoCircular] = None

    def longitud(self) -> int:
        """
        Devuelve la longitud de la lista circular.
        """
        if self.cabeza is None:
            return 0

        actual = self.cabeza
        longitud = 1
        while actual is not None and actual.siguiente != self.cabeza:
            longitud += 1
            actual = actual.siguiente
        return longitud

    def insertar(self, dato: Any) -> None:
        """
        Inserta un nuevo nodo al final de la lista.
        """
        nuevo_nodo = NodoCircular(dato)
        if self.cabeza is None:
            self.cabeza = nuevo_nodo
            nuevo_nodo.siguiente = self.cabeza
        else:
            actual = self.cabeza
            while actual is not None and actual.siguiente != self.cabeza:
                actual = actual.siguiente
            if actual is not None:
                actual.siguiente = nuevo_nodo
            nuevo_nodo.siguiente = self.cabeza

    def borrar(self, indice: int) -> None:
        """
        Borra el nodo en el índice especificado.
        """
        if self.cabeza is None:
            return

        actual = self.cabeza
        if indice == 0:
            while actual.siguiente and actual.siguiente != self.cabeza:
                actual = actual.siguiente
            if actual == self.cabeza:
                self.cabeza = None
            else:
                if actual.siguiente:
                    actual.siguiente = self.cabeza.siguiente
                self.cabeza = self.cabeza.siguiente
            return

        for _ in range(indice - 1):
            if actual.siguiente == self.cabeza or actual.siguiente is None:
                return
            actual = actual.siguiente

        if actual.siguiente == self.cabeza or actual.siguiente is None:
            return

        actual.siguiente = actual.siguiente.siguiente

    def actualizar(self, indice: int, nuevo_dato: Any) -> None:
        """
        Actualiza el dato del nodo en el índice especificado.
        """
        if self.cabeza is None:
            return

        actual = self.cabeza
        for _ in range(indice):
            if actual is None or actual.siguiente == self.cabeza:
                return
            actual = actual.siguiente

        if actual is not None:
            actual.dato = nuevo_dato

    def leer(self, indice: int) -> Optional[Any]:
        """
        Lee el dato del nodo en el índice especificado.
        """
        if self.cabeza is None:
            return None

        actual = self.cabeza
        for _ in range(indice):
            if actual.siguiente == self.cabeza or actual.siguiente is None:
                return None
            actual = actual.siguiente

        if actual is not None:
            return actual.dato
        return None

    def mostrar(self) -> list:
        """
        Devuelve una lista con los datos de la lista circular.
        """
        datos = []
        if self.cabeza is None:
            return datos

        actual = self.cabeza
        if actual is not None:
            datos.append(actual.dato)
        while actual.siguiente is not None and actual.siguiente != self.cabeza:
            actual = actual.siguiente
            if actual is not None:
                datos.append(actual.dato)
        return datos


class NodoDoble:
    """
    Esta clase representa un nodo en una lista doblemente enlazada.
    """

    def __init__(self, dato: Any) -> None:
        self.dato = dato
        self.siguiente: Optional[NodoDoble] = None
        self.anterior: Optional[NodoDoble] = None


class ListaDobleEnlazada:
    """
    Esta clase representa una lista doblemente enlazada.
    """

    def __init__(self) -> None:
        self.cabeza: Optional[NodoDoble] = None

    def longitud(self) -> int:
        """
        Devuelve la longitud de la lista doblemente enlazada.
        """
        actual = self.cabeza
        longitud = 0
        while actual:
            longitud += 1
            actual = actual.siguiente
        return longitud

    def insertar(self, dato: Any) -> None:
        """
        Inserta un nuevo nodo al final de la lista.
        """
        nuevo_nodo = NodoDoble(dato)
        if self.cabeza is None:
            self.cabeza = nuevo_nodo
        else:
            actual = self.cabeza
            while actual.siguiente:
                actual = actual.siguiente
            actual.siguiente = nuevo_nodo
            nuevo_nodo.anterior = actual

    def borrar(self, indice: int) -> None:
        """
        Borra el nodo en el índice especificado.
        """
        if self.cabeza is None:
            return

        actual = self.cabeza
        for _ in range(indice):
            if actual is None:
                return
            actual = actual.siguiente

        if actual is None:
            return

        if actual.anterior is not None:
            actual.anterior.siguiente = actual.siguiente
        if actual.siguiente is not None:
            actual.siguiente.anterior = actual.anterior

        if actual == self.cabeza:
            self.cabeza = actual.siguiente

    def actualizar(self, indice: int, nuevo_dato: Any) -> None:
        """
        Actualiza el dato del nodo en el índice especificado.
        """
        actual = self.cabeza
        for _ in range(indice):
            if actual is None:
                return
            actual = actual.siguiente

        if actual is not None:
            actual.dato = nuevo_dato

    def leer(self, indice: int) -> Optional[Any]:
        """
        Lee el dato del nodo en el índice especificado.
        """
        actual = self.cabeza
        for _ in range(indice):
            if actual is None:
                return None
            actual = actual.siguiente

        if actual is not None:
            return actual.dato
        return None

    def mostrar(self) -> List[Any]:
        """
        Devuelve una lista con los datos de la lista doblemente enlazada.
        """
        datos = []
        actual = self.cabeza
        while actual:
            datos.append(actual.dato)
            actual = actual.siguiente
        return datos


class Nodo:
    """
    Esta clase representa un nodo en una lista enlazada.
    """

    def __init__(self, dato: Any) -> None:
        self.dato = dato
        self.siguiente: Optional[Nodo] = None


class ListaEnlazada:
    """
    Esta clase representa una lista enlazada.
    """

    def __init__(self) -> None:
        self.cabeza = None

    def longitud(self) -> int:
        """
        Devuelve la longitud de la lista enlazada.
        """
        actual = self.cabeza
        longitud = 0
        while actual:
            longitud += 1
            actual = actual.siguiente
        return longitud

    def insertar(self, dato: Any) -> None:
        """
        Inserta un nuevo nodo al final de la lista.
        """
        nuevo_nodo = Nodo(dato)
        if self.cabeza is None:
            self.cabeza = nuevo_nodo
        else:
            actual = self.cabeza
            while actual.siguiente:
                actual = actual.siguiente
            actual.siguiente = nuevo_nodo

    def borrar(self, indice: int) -> None:
        """
        Borra el nodo en el índice especificado.
        """
        if self.cabeza is None:
            return

        if indice == 0:
            self.cabeza = self.cabeza.siguiente
            return

        actual = self.cabeza
        for _ in range(indice - 1):
            if actual.siguiente is None:
                return
            actual = actual.siguiente

        if actual.siguiente is None:
            return

        actual.siguiente = actual.siguiente.siguiente

    def actualizar(self, indice: int, nuevo_dato: Any) -> None:
        """
        Actualiza el dato del nodo en el índice especificado.
        """
        actual = self.cabeza
        for _ in range(indice):
            if actual is None:
                return
            actual = actual.siguiente

        if actual is not None:
            actual.dato = nuevo_dato

    def mostrar(self) -> List[Any]:
        """
        Devuelve una lista con los datos de la lista enlazada.
        """
        datos = []
        actual = self.cabeza
        while actual:
            datos.append(actual.dato)
            actual = actual.siguiente
        return datos


class AED:
    """
    Esta clase representa una estructura de datos
    """

    def __init__(self: "AED") -> None:
        self.__lista: List[Any] = list()
        self.__lista_enlazada: ListaEnlazada = ListaEnlazada()
        self.__lista_doble_enlazada: ListaDobleEnlazada = ListaDobleEnlazada()
        self.__lista_circular: ListaCircular = ListaCircular()
        self.__pila: Pila = Pila()
        self.__cola: Cola = Cola()
        self.__arbol: ArbolBinario = ArbolBinario()
        self.__grafo: Grafo = Grafo()
        # Añade 3 Nodos
        # for i in range(4):
        #     self.__grafo.agregar_nodo(f"Nodo {i}")
        #     self.__arbol.insertar(f"Valor {i}")
        # self.__cola.enqueue(f"Valor {i}")
        # self.__pila.push(f"Valor {i}")
        # self.__lista_circular.insertar(f"Nodo {i}")
        # self.__lista_doble_enlazada.insertar(f"Nodo {i}")
        #     self.__lista_enlazada.insertar(f"Nodo {i}")

        # self.__lista.append(f"Numero {i}")
        return None

    @property
    def grafo(self: "AED") -> Grafo:
        """
        Devuelve el grafo de la estructura de datos
        """
        return self.__grafo

    @property
    def arbol(self: "AED") -> ArbolBinario:
        """
        Devuelve el árbol binario de la estructura de datos
        """
        return self.__arbol

    @property
    def cola(self: "AED") -> Cola:
        """
        Devuelve la cola de la estructura de datos
        """
        return self.__cola

    @property
    def pila(self: "AED") -> Pila:
        """
        Devuelve la pila de la estructura de datos
        """
        return self.__pila

    @property
    def lista_circular(self: "AED") -> ListaCircular:
        """
        Devuelve la lista circular de la estructura de datos
        """
        return self.__lista_circular

    @property
    def lista_doble_enlazada(self: "AED") -> ListaDobleEnlazada:
        """
        Devuelve la lista doble enlazada de la estructura de datos
        """
        return self.__lista_doble_enlazada

    @property
    def lista_enlazada(self: "AED") -> ListaEnlazada:
        """
        Devuelve la lista enlazada de la estructura de datos
        """
        return self.__lista_enlazada

    def modificar_lista_enlazada(
        self: "AED",
        lista_enlazada: ListaEnlazada,
        action: str,
        value: Any = None,
        indice: Optional[int] = None,
    ) -> None:
        """
        Actualiza la lista enlazada de la estructura de datos
        """
        match action:
            case "insertar":
                lista_enlazada.insertar(value)
            case "borrar":
                if indice is not None:
                    lista_enlazada.borrar(indice)
            case "actualizar":
                if indice is not None:
                    lista_enlazada.actualizar(indice, value)
            case _:
                pass
        return None

    @property
    def lista(self: "AED") -> List[Any]:
        """
        Devuelve la lista de la estructura de datos
        """
        return self.__lista

    def modificar_lista(
        self: "AED", action: str, value: Any = None, index: Optional[int] = None
    ) -> None:
        """
        Modifica la lista de la estructura de datos.
        * action: `str` - La acción a realizar (insertar, actualizar, borrar)
        * value: `Any` - El valor a insertar, actualizar o borrar
        * index: `int` - El índice del valor a actualizar o borrar
        """

        match action:
            case "insertar":
                self.__lista.append(value)
            case "actualizar":
                if index is not None:
                    self.__lista[index] = value
            case "borrar":
                if index is not None:
                    self.__lista.pop(index)
            case _:
                pass
        return None
