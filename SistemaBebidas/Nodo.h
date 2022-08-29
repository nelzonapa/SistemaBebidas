#pragma once
#include <memory>
// using namespace std;

template<class type>
class Nodo {
private:
    type dato;
    std::shared_ptr<Nodo<type>> sig;
public:
    Nodo() = default;

    Nodo(type dato) { //constructor
        this->dato = dato;
        this->sig = nullptr;
    }
    ~Nodo() {}

    type getDato() const {//retorna el dato
        return dato;
    }

    void setDato(type dato) {//establece dato
        this->dato = dato;
    }

    std::shared_ptr<Nodo<type>> getPtrSig() {//retorna la direccion apuntada por PtrSig
        return sig;
    }

    void setPtrSig(std::shared_ptr<Nodo<type>> sig) {//establece una nueva direccion/ apunta a otra Nodo
        this->sig = sig;
    }

};
