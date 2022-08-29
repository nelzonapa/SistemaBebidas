#pragma once
#include <string>

struct Producto
{
    int id;
    std::string marca;
    std::string nombre;
    std::string tipo;
    double capacidad;
    double precio;
    int stock;
    
    Producto() = default;
    Producto(int id, std::string marca, std::string nombre, std::string tipo,
            double capacidad, double precio, int stock) 
    {
        this->id = id;
        this->marca = marca;
        this->nombre = nombre;
        this->tipo = tipo;
        this->capacidad = capacidad;
        this->precio = precio;
        this->stock = stock;
    }

    void setValues(int id, std::string marca, std::string nombre, std::string tipo,
        double capacidad, double precio, int stock)
    {
        this->id = id;
        this->marca = marca;
        this->nombre = nombre;
        this->tipo = tipo;
        this->capacidad = capacidad;
        this->precio = precio;
        this->stock = stock;
    }
};

