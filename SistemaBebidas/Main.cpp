#include <iostream>
#include <string>
#include "UsuarioSesion.h"
#include "UsuarioVisitor.h"
#include "FunctorProductos.h"
#include "LoginForm.h"
#include "RegisterForm.h"
#include "ValidarJefeForm.h"
#include "JefeDeAlmacenForm.h"
#include "ControladorExpedicionForm.h"
#include "OperarioPedidosForm.h"
#include "PersonalDeVigilanciaForm.h"
#include "PuestoVigilanciaMostrar.h"
#include "RegistroDeIngreso.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace System::Data::SqlClient;
using namespace msclr::interop;

class JefeAlmacenVisitor:public UsuarioVisitor{
public:
	void accept(Visitor *);
	void iniciar_sesion(UsuarioVisitor* user, UsuarioSesion* datos){
		SistemaBebidas::JefeDeAlmacenForm JefeDeAlmacenSeccion(datos);
		Application::Run(% JefeDeAlmacenSeccion);
	}
};

class ControladorExpedicionVisitor:public UsuarioVisitor{
public:
	void accept(Visitor *);
	void iniciar_sesion(UsuarioVisitor* user, UsuarioSesion* datos){
		SistemaBebidas::ControladorExpedicionForm controladorExpedicionSeccion(datos);
		Application::Run(% controladorExpedicionSeccion);
	}
};

class OperarioPedidosVisitor:public UsuarioVisitor{
public:
	void accept(Visitor *);
	void iniciar_sesion(UsuarioVisitor* user, UsuarioSesion* datos){
		SistemaBebidas::OperarioPedidosForm operarioPedidosSeccion(datos);
		Application::Run(% operarioPedidosSeccion);
	}

};

class PuestoVigilanciaVisitor:public UsuarioVisitor{
public:
	void accept(Visitor *);
	void iniciar_sesion(UsuarioVisitor* user, UsuarioSesion* datos){
		while (true) {
			SistemaBebidas::PersonalDeVigilanciaForm PersonalVigilanciaSeccion(datos);
			PersonalVigilanciaSeccion.ShowDialog();
			if (PersonalVigilanciaSeccion.switchPuestoVigilancia) {
				SistemaBebidas::PuestoVigilanciaMostrar mostrar_usuarios;
				mostrar_usuarios.ShowDialog();
			}
			if (PersonalVigilanciaSeccion.switchPuestoVigilancia2) {
				SistemaBebidas::RegistroDeIngreso mostrar_registro;
				mostrar_registro.ShowDialog();
				break;
			}
		}
	}

};

class Visitor{
public:
	/*
	- virtual puro(=0) no se puede instanciar
	- Cada método visit, recibe punteros de diferentes clases
	*/
	virtual void visit(JefeAlmacenVisitor*) = 0;
	virtual void visit(ControladorExpedicionVisitor *) = 0;
	virtual void visit(OperarioPedidosVisitor *) = 0;	
	virtual void visit(PuestoVigilanciaVisitor *) = 0;
};


class iniciar_sesion: public Visitor{ //Sobrecarga de Funciones
private:
	UsuarioVisitor* user;
	UsuarioSesion* datos;

public:
	iniciar_sesion(UsuarioSesion* datos){//constructor
		this->datos = datos;
	}
	//Sobrecarga de Funciones
	void visit(JefeAlmacenVisitor *a){ 
		a->iniciar_sesion(a, this->datos);
	}
	void visit(ControladorExpedicionVisitor *b){
		b->iniciar_sesion(b, this->datos);
	}
	void visit(OperarioPedidosVisitor *c){
		c->iniciar_sesion(c, this->datos);
	}
	void visit(PuestoVigilanciaVisitor *d){
		d->iniciar_sesion(d, this->datos);
	}
};


//Aplicamos los métodos visit de la clase visitor
void JefeAlmacenVisitor::accept(Visitor *v){
	v->visit(this);
}
void ControladorExpedicionVisitor::accept(Visitor *v){
	v->visit(this);
}
void OperarioPedidosVisitor::accept(Visitor *v){
	v->visit(this);
}
void PuestoVigilanciaVisitor::accept(Visitor *v){
	v->visit(this);
}
/*
std::shared_ptr<ArrayDinamicoRef<Producto>> ObtenerProductos() {
	std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos = std::make_shared<ArrayDinamicoRef<Producto>>(); //Array de productos	
	String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
	SqlConnection sqlConn(connString); //se crea el objeto conexion
	sqlConn.Open();
	String^ sqlQuery = "SELECT * FROM productos";
	SqlCommand command(sqlQuery, % sqlConn);
	SqlDataReader^ fila = command.ExecuteReader();


	int id = 0;
	String^ marca = "";
	String^ nombre = "";
	String^ tipo = "";
	Double capacidad = 0;
	Double precio = 0;
	int stock = 0;

	int n = 0;

	int temp1 = 0, temp7 = 0;
	std::string temp2 = "", temp3 = "", temp4 = "";
	double temp5 = 0, temp6 = 0;
	Producto temp;

	while (fila->Read()) {
		id = fila->GetInt32(0);
		marca = fila->GetString(1);
		nombre = fila->GetString(2);
		tipo = fila->GetString(3);
		capacidad = fila->GetDouble(4);
		precio = fila->GetDouble(5);
		stock = fila->GetInt32(6);

		temp1 = id;
		temp2 = marshal_as<std::string>(marca);
		temp3 = marshal_as<std::string>(marca);
		temp4 = marshal_as<std::string>(marca);
		temp5 = capacidad;
		temp6 = precio;
		temp7 = stock;
		temp.setValues(temp1, temp2, temp3, temp4, temp5, temp6, temp7);
		listaProductos->insertarElemento(new Nodo<Producto>(temp));
	}
	return listaProductos;
}
*/


int main(){
	//ArrayDinamicoRef<Producto>* listaDeProductos = ObtenerProductos();
	//FunctorProductos obtenerProductos;
	//std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos = obtenerProductos();

	UsuarioVisitor *set[] = {	new JefeAlmacenVisitor, 
								new ControladorExpedicionVisitor, 
								new OperarioPedidosVisitor,
								new PuestoVigilanciaVisitor};//creando espacio
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Usuario* user = nullptr;
	UsuarioSesion& user = UsuarioSesion::get_instance();
	while (true) {
		SistemaBebidas::LoginForm^ login = gcnew SistemaBebidas::LoginForm();
		login->ShowDialog();
		if (login->switchToRegister) {
			SistemaBebidas::ValidarJefeForm^ validarJefeForm = gcnew SistemaBebidas::ValidarJefeForm;
			validarJefeForm->ShowDialog();
			if (validarJefeForm->validacionJefe) {
				SistemaBebidas::RegisterForm^ registerForm = gcnew SistemaBebidas::RegisterForm;
				registerForm->ShowDialog();

				if (registerForm->switchToLogin) {
					continue;
				}
				else {
					user = registerForm->user;
					break;
				}
			}
		}
		else {
			user = login->user;
			break;
		}
	}
	iniciar_sesion ad_visitor(&user); // Por referencia por el Singleton Pattern

	if(user.getPermiso() == "Jefe de Almacen"){
		set[0]->accept(&ad_visitor);		
	}
	else if(user.getPermiso() == "Controlador de Expedicion"){
		set[1]->accept(&ad_visitor);	
	}
	else if(user.getPermiso() == "Operario de Pedidos"){
		set[2]->accept(&ad_visitor);	
	}
	else if(user.getPermiso() == "Personal de Vigilancia"){
		set[3]->accept(&ad_visitor);	
	}

	//}
	//else {
		//listaProductos.get()->getInPosicion(0)->getDato().precio
		//String^ marca = gcnew String((listaProductos.get()->getInPosicion(0)->getDato().marca).data());
		//MessageBox::Show("Usted salio del sistema", "Sistema de Almacen de Bebidas", MessageBoxButtons::OK);
	//}
	//delete user;
}
