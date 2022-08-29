#include "UsuarioVistitor.h"

UsuarioVistitor::UsuarioVistitor() {}

UsuarioVistitor::UsuarioVistitor(int id, std::string nombres, std::string apellidos, std::string email, std::string usuario, std::string password, std::string permiso) {
    this->id = id;
    this->nombres = nombres;
    this->apellidos = apellidos;
    this->email = email;
    this->usuario = usuario;
    this->password = password;
    this->permiso = permiso;
}
int UsuarioVistitor::getId() const {
    return this->id;
}
std::string UsuarioVistitor::getNombres() const {
    return this->nombres;
}
std::string UsuarioVistitor::getApellidos() const {
    return this->apellidos;
}
std::string UsuarioVistitor::getEmail() const {
    return this->email;
}
std::string UsuarioVistitor::getUsuario() const {
    return this->usuario;
}
std::string UsuarioVistitor::getPassword() const {
    return this->password;
}
std::string UsuarioVistitor::getPermiso() const {
    return this->permiso;
}