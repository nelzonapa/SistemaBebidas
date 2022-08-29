#include "OperarioPedidos.h"

OperarioPedidos::OperarioPedidos(int, std::string, std::string, std::string, std::string, std::string, std::string) :
    Usuario(id, nombres, apellidos, email, usuario, password, permiso) {

}
OperarioPedidos::OperarioPedidos(Usuario* u) {
    id = u->getId();
    nombres = u->getNombres();
    apellidos = u->getApellidos();
    email = u->getEmail();
    usuario = u->getUsuario();
    password = u->getPassword();
    permiso = u->getPermiso();
}
