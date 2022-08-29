#include "ControladorRecepcion.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;
using namespace std;


ControladorRecepcion::ControladorRecepcion
(int id, std::string nombres, std::string apellidos, std::string email, std::string usuario, std::string password, std::string permiso) :
    Usuario(id, nombres, apellidos, email, usuario, password, permiso) {
    std::string lista[] = {
        "Cusqueña Negra","Cusqueña Dorada","Pilsen Callao","Coca Cola","Inka Kola",
        "Sprite","Coronita Botella","Corona","San Mateo","Guarana"
    };
    std::string* ptr = &lista[0];

    //this->listaDeProductosVencidos = lista[0];
    this->listaDeProductosVencidos = ptr;

}
ControladorRecepcion::ControladorRecepcion(Usuario* u) {
    id = u->getId();
    nombres = u->getNombres();
    apellidos = u->getApellidos();
    email = u->getEmail();
    usuario = u->getUsuario();
    password = u->getPassword();
    permiso = u->getPermiso();
}

ListaEnlazada<std::string> ControladorRecepcion::getListaDeProductosVencidos() {
   // Nodo<std::string> nodo1("Sergio");
    ListaEnlazada<std::string> lista1;
    lista1.agregarProducto("Producto 1");
    lista1.agregarProducto("Coca Cola");
    return lista1;
    //std::string resClase = nodo1.getDato();
    //std::string resClaseLista = lista1.getHead();
    //String^ mess1 = gcnew String(resClase.data());
    //String^ mess2 = gcnew String(resClaseLista.data());
}
/*
std::string* ControladorRecepcion::getListaDeProductosVencidos() {
    
    return (this->listaDeProductosVencidos);
}
*/