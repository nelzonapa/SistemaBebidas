#pragma once
#include <iostream>
#include "Nodo.h"

template<class type>
class ListaEnlazada
{
private:
    Nodo<type>* head; //apunta al nodo head de la lista
    int longitud; //almacena el tamanio de la lista
    //ALGORITMO DE ORDENAMIENTO
    void intercambio(type&, type&); //funciones privadas
    void quickSort(type*&, int, int); //algoritmo quicksort
public:
    ListaEnlazada();
    ~ListaEnlazada();
    int size() const; //retorna el tamanio(longitud) de la lista
    bool empty(); //retorna verdadero si la lista esta vacia y en caso contrario retorna falso 
    type getHead() const; //retorna el valor del primer nodo
    void agregarProducto(type); // Era pushback: agrega un nuevo elemento al final de la lista
    void pushFront(type); //agrega un nuevo elemento al PRINCIPIO de la lista
    void insert(type, type); //inserta un nuevo elemento en el indice indicado como 1er parametro
    void pop(); //elimina el ultimo elemento de la lista
    void popFront(); //elimina el primer elemento de la lista
    void popElemento(type);
    void popAll(); //vacia toda la lista
    void sort_asc(); //ordena ascendentemente
    void sort_desc(); //ordena descendentemente
    //void printList(); //recorre la lista y muestra sus elementos
};

template <class type>
ListaEnlazada<type>::ListaEnlazada() {
    this->head = nullptr;
    this->longitud = 0;
}
template<class type>
ListaEnlazada<type>::~ListaEnlazada() {
    Nodo<type>* aux1 = head;
    Nodo<type>* aux2 = nullptr;
    while (aux1 != nullptr) {
        aux2 = aux1->getPtrSig();
        delete aux1;
        aux1 = aux2;
    }
    std::cout << "Linked List Destroyed" << std::endl;
}
template<class type>
int ListaEnlazada<type>::size() const {
    return this->longitud;
}
template<class type>
bool ListaEnlazada<type>::empty() {
    return (this->longitud == 0);
}
template<class type>
type ListaEnlazada<type>::getHead() const {
    return head->getDato();
}
template<class type>
void ListaEnlazada<type>::agregarProducto(type num) {
    Nodo<type>* nuevoNodo = new Nodo<type>(num); //creamos nuevo nodo a insertar
    if (empty()) {
        head = nuevoNodo;
    }
    else {
        Nodo<type>* aux = head; //apuntamos aux al head
        while (aux->getPtrSig() != nullptr) { //recorre hasta el final de la lista
            aux = aux->getPtrSig();
        }
        aux->setPtrSig(nuevoNodo); //apunta al nuevo nodo
    }
    longitud++;
}
template<class type>
void ListaEnlazada<type>::pushFront(type num) {
    Nodo<type>* nuevoNodo = new Nodo<type>(num); //creamos nuevo nodo a insertar
    if (empty()) {
        head = nuevoNodo;
    }
    else {
        Nodo<type>* aux = head;
        head = nuevoNodo;
        head->setPtrSig(aux);
    }
    longitud++;
}
template<class type>
void ListaEnlazada<type>::insert(type indice, type num) {
    if ((indice < 0) || (indice > longitud)) {
        std::cout << "Posicion no valida. No se inserto el nuevo dato" << endl; return;
    }
    Nodo<type>* nuevoNodo = new Nodo<type>(num); //creamos nuevo nodo a insertar
    Nodo<type>* aux1 = head;
    Nodo<type>* aux2 = head;
    if (indice == 0) {
        head = nuevoNodo;
        head->setPtrSig(aux1);
    }
    else if (indice == longitud) {
        while (aux1->getPtrSig() != nullptr) { //recorre hasta el final de la lista
            aux1 = aux1->getPtrSig();
        }
        aux1->setPtrSig(nuevoNodo); //apunta al nuevo nodo
    }
    else {
        for (int i = 0; i < indice - 1; i++) {
            aux1 = aux1->getPtrSig();
            aux2 = aux2->getPtrSig();
        }
        aux2 = aux2->getPtrSig();
        aux1->setPtrSig(nuevoNodo);
        nuevoNodo->setPtrSig(aux2);
    }
    longitud++;
}
template<class type>
void ListaEnlazada<type>::pop() {
    Nodo<type>* aux1 = head;
    Nodo<type>* aux2 = head;
    if (empty()) {
        cout << "No existe un elemento para eliminar" << std::endl;
        return;
    }
    else {
        while (aux1->getPtrSig() != nullptr) { //recorre hasta el ultimo elemento de la lista
            aux1 = aux1->getPtrSig();
        }
        for (int i = 0; i < longitud - 2; i++) { //recorre hasta el penultimo elemento de la lista
            aux2 = aux2->getPtrSig();
        }
        aux2->setPtrSig(nullptr); //apunta a nullptr
    }
    delete aux1;
    longitud--;
}

template <class type>
void ListaEnlazada<type>::popFront() {
    if (empty()) {
        cout << "No existe un elemento para eliminar" << endl;
        return;
    }
    else {
        Nodo<type>* aux1 = head;
        Nodo<type>* aux2 = head;
        aux2 = aux2->getPtrSig();
        aux1->setPtrSig(nullptr); delete aux1;
        head = aux2;
    }
    longitud--;
}

template <class type>
void ListaEnlazada<type>::popAll() {
    while (empty() != true) {
        this->pop();
    }
}

template <class type>
void ListaEnlazada<type>::popElemento(type indice) {
    if ((indice < 0) || (indice >= longitud)) {
        cout << "Posicion no valida. No se inserto el nuevo dato" << endl; return;
    }
    Nodo<type>* aux1 = head;
    Nodo<type>* aux2 = head;
    Nodo<type>* temp = head;
    if (indice == 0) {
        aux2 = aux2->getPtrSig();
        aux1->setPtrSig(nullptr); delete aux1;
        head = aux2;
    }
    else {
        for (int i = 0; i < indice - 1; i++) {
            aux1 = aux1->getPtrSig();
            aux2 = aux2->getPtrSig();
            temp = temp->getPtrSig();
        }
        temp = temp->getPtrSig();
        for (int i = 0; i < 2; i++)
            aux2 = aux2->getPtrSig(); // 2 veces
        aux1->setPtrSig(aux2);
        temp->setPtrSig(nullptr); delete temp;
    }
    longitud--;
}

template <class type>
void ListaEnlazada<type>::intercambio(type& x, type& y) {//intercambia los valores de las variables
    type aux;
    aux = x;
    x = y;
    y = aux;
}

template <class type>
void ListaEnlazada<type>::quickSort(type*& _array, int ini, int fin) {
    int i, j, cent = (ini + fin) / 2;
    type piv = _array[cent];//pivote
    i = ini; j = fin;
    do {
        while (_array[i] < piv) i++;
        while (_array[j] > piv) j--;
        if (i <= j) {
            intercambio(_array[i], _array[j]);
            i++; j--;
        }
    } while (i <= j);
    if (ini < j) quickSort(_array, ini, j);//ordena la sublista izquierda
    if (i < fin) quickSort(_array, i, fin);//ordena la sublista derecha
}

template <class type>
void ListaEnlazada<type>::sort_asc() {
    // Nodo* aux = head;
    int arraySize = longitud;
    type* arrayTemp = new type[arraySize];
    for (int i = 0; i < arraySize; i++) {
        *(arrayTemp + i) = this->getHead();
        this->popFront();
    }
    quickSort(arrayTemp, 0, arraySize - 1);
    for (int i = 0; i < arraySize; i++) {
        this->pushBack(arrayTemp[i]);
    }
    delete arrayTemp;//eliminamos array temporal
}
template <class type>
void ListaEnlazada<type>::sort_desc() {
    int arraySize = longitud;
    type* arrayTemp = new type[arraySize];
    for (int i = 0; i < arraySize; i++) {
        *(arrayTemp + i) = this->getHead();
        this->popFront();
    }
    quickSort(arrayTemp, 0, arraySize - 1);
    for (int i = arraySize - 1; i >= 0; i--) { //insertamos elementos en orden inverso
        this->pushBack(arrayTemp[i]);
    }
    delete arrayTemp;//eliminamos array temporal
}

