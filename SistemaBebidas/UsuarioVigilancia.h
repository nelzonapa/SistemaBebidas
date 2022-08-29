#pragma once
#include <string>

struct UsuarioVi
{
    int id;
    std::string nombre;
    std::string apellidos;
    std::string permiso;
    std::string hora;
    std::string fecha;
    //std::string registro;

    UsuarioVi() = default;
    UsuarioVi(int id, std::string nombre, std::string apellidos, std::string permiso, std::string hora, std::string fecha)
    {
        this->id = id;
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->permiso = permiso;
        this->hora = hora;
        this->fecha = fecha;
        //this->registro = registro;
    }

    void setValues(int id, std::string nombre, std::string apellidos, std::string permiso, std::string hora, std::string fecha)
    {
        this->id = id;
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->permiso = permiso;
        this->hora = hora;
        this->fecha = fecha;
        //this->registro = registro;
    }
};
