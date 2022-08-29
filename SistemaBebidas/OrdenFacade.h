#pragma once
#include "Producto.h"
#include "ArrayDinamicoRef.h"
#include "FunctorProductos.h"
#include <memory>
#include "Nodo.h"
#include <vector>

class OrdenId {
public:
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }

        int tam = ordenado.size();

        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && ordenado[j].id < ordenado[j - 1].id) {
                Producto Aux = ordenado[j];
                ordenado[j] = ordenado[j - 1];
                ordenado[j - 1] = Aux;
                j--;
            }
        }
        return ordenado;
    }
};

class OrdenMarca {
public:
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && ordenado[j].marca < ordenado[j - 1].marca) {
                Producto Aux = ordenado[j];
                ordenado[j] = ordenado[j - 1];
                ordenado[j - 1] = Aux;
                j--;
            }
        }
        return ordenado;
    }
};

class OrdenNombre {
public:
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && ordenado[j].nombre < ordenado[j - 1].nombre) {
                Producto Aux = ordenado[j];
                ordenado[j] = ordenado[j - 1];
                ordenado[j - 1] = Aux;
                j--;
            }
        }
        return ordenado;
    }
};

class OrdenTipo {
public:
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && ordenado[j].tipo < ordenado[j - 1].tipo) {
                Producto Aux = ordenado[j];
                ordenado[j] = ordenado[j - 1];
                ordenado[j - 1] = Aux;
                j--;
            }
        }
        return ordenado;
    }
};

class OrdenPrecio {
public:
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && ordenado[j].precio < ordenado[j - 1].precio) {
                Producto Aux = ordenado[j];
                ordenado[j] = ordenado[j - 1];
                ordenado[j - 1] = Aux;
                j--;
            }
        }
        return ordenado;
    }
};

class OrdenCapacidad {
public:
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && ordenado[j].capacidad < ordenado[j - 1].capacidad) {
                Producto Aux = ordenado[j];
                ordenado[j] = ordenado[j - 1];
                ordenado[j - 1] = Aux;
                j--;
            }
        }
        return ordenado;
    }
};

class OrdenStock {
public:
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && ordenado[j].stock < ordenado[j - 1].stock) {
                Producto Aux = ordenado[j];
                ordenado[j] = ordenado[j - 1];
                ordenado[j - 1] = Aux;
                j--;
            }
        }
        return ordenado;
    }
};


class OrdenFacade {
private:
    OrdenId ordenid;
    OrdenMarca ordenmarca;
    OrdenNombre ordennombre;
    OrdenCapacidad ordencapacidad;
    OrdenTipo ordentipo;
    OrdenPrecio ordenprecio;
    OrdenStock ordenstock;

public:
    std::vector<Producto> ordenar(std::string filtro, std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos) {
        std::vector<Producto>Aux;
        if (filtro == "id") {
            Aux = ordenid.ordenar(listaProductos);
        }
        else if (filtro == "marca") {
            Aux = ordenmarca.ordenar(listaProductos);
        }
        else if (filtro == "nombre") {
            Aux = ordennombre.ordenar(listaProductos);
        }
        else if (filtro == "capacidad") {
            Aux = ordencapacidad.ordenar(listaProductos);
        }
        else if (filtro == "tipo") {
            Aux = ordentipo.ordenar(listaProductos);
        }
        else if (filtro == "precio") {
            Aux = ordenprecio.ordenar(listaProductos);
        }
        else if (filtro == "stock") {
            Aux = ordenstock.ordenar(listaProductos);
        }

        return Aux;
    }
};