#pragma once
#include "Producto.h"
#include "ArrayDinamicoRef.h"
#include "FunctorProductos.h"
#include <memory>
#include "Nodo.h"
#include <vector>

template <typename T>
bool ascendente(T x, T y) {
    return x < y;
}
template <typename T>
bool descendente(T x, T y) {
    return x > y;
}

class OrdenId {
public:

    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos, bool(*orden)(int, int)) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }

        int tam = ordenado.size();

        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && orden(ordenado[j].id, ordenado[j - 1].id)) {
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
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos, bool(*orden)(std::string, std::string)) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && orden(ordenado[j].marca, ordenado[j - 1].marca)) {
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
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos, bool(*orden)(std::string, std::string)) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && orden(ordenado[j].nombre, ordenado[j - 1].nombre)) {
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
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos, bool(*orden)(std::string, std::string)) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && orden(ordenado[j].tipo, ordenado[j - 1].tipo)) {
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
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos, bool(*orden)(double, double)) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && orden(ordenado[j].precio, ordenado[j - 1].precio)) {
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
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos, bool(*orden)(double, double)) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && orden(ordenado[j].capacidad, ordenado[j - 1].capacidad)) {
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
    std::vector<Producto> ordenar(std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos, bool(*orden)(int, int)) {
        std::vector<Producto>ordenado;
        int Nelementos = listaProductos.get()->getSize();
        for (int i = 0; i < Nelementos; i++) {
            ordenado.push_back(listaProductos.get()->getInPosicion(i)->getDato());
        }
        int tam = ordenado.size();
        for (int i = 1; i < tam; i++) {
            int j = i;
            while (j > 0 && orden(ordenado[j].stock, ordenado[j - 1].stock)) {
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
    std::vector<Producto> ordenar(std::string filtro, std::string orden, std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos) {
        std::vector<Producto>Aux;
        if (filtro == "id") {
            if (orden == "descendente") {
                Aux = ordenid.ordenar(listaProductos, descendente);
            }
            else {
                Aux = ordenid.ordenar(listaProductos, ascendente);
            }
        }
        else if (filtro == "marca") {
            if (orden == "descendente") {
                Aux = ordenmarca.ordenar(listaProductos, descendente);
            }
            else {
                Aux = ordenmarca.ordenar(listaProductos, ascendente);
            }
        }
        else if (filtro == "nombre") {
            if (orden == "descendente") {
                Aux = ordennombre.ordenar(listaProductos, descendente);
            }
            else {
                Aux = ordennombre.ordenar(listaProductos, ascendente);
            }
        }
        else if (filtro == "capacidad") {
            if (orden == "descendente") {
                Aux = ordencapacidad.ordenar(listaProductos, descendente);
            }
            else {
                Aux = ordencapacidad.ordenar(listaProductos, ascendente);
            }
        }
        else if (filtro == "tipo") {
            if (orden == "descendente") {
                Aux = ordentipo.ordenar(listaProductos, descendente);
            }
            else {
                Aux = ordentipo.ordenar(listaProductos, ascendente);
            }
        }
        else if (filtro == "precio") {
            if (orden == "descendente") {
                Aux = ordenprecio.ordenar(listaProductos, descendente);
            }
            else {
                Aux = ordenprecio.ordenar(listaProductos, ascendente);
            }
        }
        else if (filtro == "stock") {
            if (orden == "descendente") {
                Aux = ordenstock.ordenar(listaProductos, descendente);
            }
            else {
                Aux = ordenstock.ordenar(listaProductos, ascendente);
            }
        }

        return Aux;
    }
};