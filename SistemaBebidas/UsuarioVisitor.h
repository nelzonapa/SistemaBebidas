#pragma once
#include <string>
class UsuarioVisitor { //visitor
protected:
    int id;
    std::string nombres;
    std::string apellidos;
    std::string email;
    std::string usuario;
    std::string password;
    std::string permiso;
public:
    UsuarioVisitor() {}
    UsuarioVisitor(int id, std::string nombres, std::string apellidos, std::string email, std::string usuario, std::string password, std::string permiso) {
        this->id = id;
        this->nombres = nombres;
        this->apellidos = apellidos;
        this->email = email;
        this->usuario = usuario;
        this->password = password;
        this->permiso = permiso;
    }
    virtual void accept(class Visitor*) = 0;


    int getId() const {
        return this->id;
    }
    std::string getNombres() const {
        return this->nombres;
    }
    std::string getApellidos() const {
        return this->apellidos;
    }
    std::string getEmail() const {
        return this->email;
    }
    std::string getUsuario() const {
        return this->usuario;
    }
    std::string getPassword() const {
        return this->password;
    }
    std::string getPermiso() const {
        return this->permiso;
    }
};

