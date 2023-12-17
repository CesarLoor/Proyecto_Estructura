
/***********************************************************************
 * Module:  ListaDoble.cpp
 * Author:  PC DIGITAL
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:32:00
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/

#include "ListaDoble.h"
ListaDoble::ListaDoble() {
    primero = NULL;
    ultimo = NULL;
}

void ListaDoble::Insertar(int _dato) {
    Nodo* nuevo = new Nodo(_dato);
    if (primero == NULL) {
        primero = nuevo;
        ultimo = nuevo;
    }
    else {
        ultimo->setSiguiente(nuevo);
        nuevo->setAnterior(ultimo);
        ultimo = nuevo;
    }
}

void ListaDoble::Buscar(int _dato) {
    Nodo* aux = primero;
    while (aux != NULL) {
        if (aux->getDato() == _dato) {
            cout << "El dato " << _dato << " se encuentra en la lista" << endl;
            return;
        }
        aux = aux->getSiguiente();
    }
    cout << "El dato " << _dato << " no se encuentra en la lista" << endl;
}

void ListaDoble::Eliminar(int _dato) {
    Nodo* aux = primero;
    while (aux != NULL) {
        if (aux->getDato() == _dato) {
            if (aux == primero) {
                primero = primero->getSiguiente();
                primero->setAnterior(NULL);
            }
            else if (aux == ultimo) {
                ultimo = ultimo->getAnterior();
                ultimo->setSiguiente(NULL);
            }
            else {
                aux->getAnterior()->setSiguiente(aux->getSiguiente());
                aux->getSiguiente()->setAnterior(aux->getAnterior());
            }
            delete aux;
            cout << "El dato " << _dato << " se ha eliminado de la lista" << endl;
            return;
        }
        aux = aux->getSiguiente();
    }
    cout << "El dato " << _dato << " no se encuentra en la lista" << endl;
}

void ListaDoble::Mostrar() {
    Nodo* aux = primero;
    while (aux != NULL) {
        cout << aux->getDato() << " -> ";
        aux = aux->getSiguiente();
    }
    cout << endl;
}
