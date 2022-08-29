#include "ControladorExpedicion.h"

ControladorExpedicion::ControladorExpedicion
(int id, std::string nombres, std::string apellidos, std::string email, std::string usuario, std::string password, std::string permiso) :
    Usuario(id, nombres, apellidos, email, usuario, password, permiso) {

}