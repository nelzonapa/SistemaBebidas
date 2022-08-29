#include "UsuarioSesion.h"

//UsuarioSesion::UsuarioSesion(){}
/*
UsuarioSesion::UsuarioSesion(int id, std::string nombres, std::string apellidos, std::string email, std::string usuario, std::string password, std::string permiso) {
    this->id = id;
    this->nombres = nombres;
    this->apellidos = apellidos;
    this->email = email;
    this->usuario = usuario;
    this->password = password;
    this->permiso = permiso;
}*/
int UsuarioSesion::getId() const {
    return this->id;
}
std::string UsuarioSesion::getNombres() const {
    return this->nombres;
}
std::string UsuarioSesion::getApellidos() const {
    return this->apellidos;
}
std::string UsuarioSesion::getEmail() const {
    return this->email;
}
std::string UsuarioSesion::getUsuario() const {
    return this->usuario;
}
std::string UsuarioSesion::getPassword() const {
    return this->password;
}
std::string UsuarioSesion::getPermiso() const {
    return this->permiso;
}