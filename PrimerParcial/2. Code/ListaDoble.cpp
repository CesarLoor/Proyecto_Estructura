
/***********************************************************************
 * Module:  ListaDoble.cpp
 * Author:  PC DIGITAL
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:32:00
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/

#include "ListaDoble.h" 
#include <iostream>
template <typename T>
ListaDoble<T>::ListaDoble() {
    primero = nullptr;
    ultimo = nullptr;
}
template <typename T>
void ListaDoble<T>::Insertar(T _dato) {
    Nodo<T>* nuevo = new Nodo(_dato);
    if (primero == nullptr) {
        primero = nuevo;
        ultimo = nuevo;
    }
    else {
        ultimo->setSiguiente(nuevo);
        nuevo->setAnterior(ultimo);
        ultimo = nuevo;
    }
}
template <typename T>
void ListaDoble<T>::Buscar(T _dato) {
    Nodo<T>* aux = primero;
    while (aux != nullptr) {
        if (aux->getDato() == _dato) {
            std::cout << "El dato " << _dato << " se encuentra en la lista" << std::endl;
            return;
        }
        aux = aux->getSiguiente();
    }
    std::cout << "El dato " << _dato << " no se encuentra en la lista" << std::endl;
}
template <typename T>
void ListaDoble<T>::Eliminar(T _dato) {
    Nodo<T>* aux = primero;
    while (aux != nullptr) {
        if (aux->getDato() == _dato) {
            if (aux == primero) {
                primero = primero->getSiguiente();
                primero->setAnterior(nullptr);
            }
            else if (aux == ultimo) {
                ultimo = ultimo->getAnterior();
                ultimo->setSiguiente(nullptr);
            }
            else {
                aux->getAnterior()->setSiguiente(aux->getSiguiente());
                aux->getSiguiente()->setAnterior(aux->getAnterior());
            }
            delete aux;
            std::cout << "El dato " << _dato << " se ha eliminado de la lista" << std::endl;
            return;
        }
        aux = aux->getSiguiente();
    }
    std::cout << "El dato " << _dato << " no se encuentra en la lista" << std::endl;
}
template <typename T>
void ListaDoble<T>::Mostrar() {
    Nodo<T>* aux = primero;
    while (aux != nullptr) {
       std::cout << aux->getDato() << " -> ";
        aux = aux->getSiguiente();
    }
    std::cout << std::endl;
}
