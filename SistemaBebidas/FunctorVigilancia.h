#pragma once
#include <memory>
#include "ArrayDinamicoRef.h"
#include "UsuarioVigilancia.h"
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace System::Data::SqlClient;
using namespace msclr::interop;

class FunctorVigilancia {
public:
	std::shared_ptr<ArrayDinamicoRef<UsuarioVi>> operator()() {
		std::shared_ptr<ArrayDinamicoRef<UsuarioVi>> listaVigilancia = std::make_shared<ArrayDinamicoRef<UsuarioVi>>();
		//Array de productos	
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
		SqlConnection sqlConn(connString); //se crea el objeto conexion
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM vigilancia";
		SqlCommand command(sqlQuery, % sqlConn);
		SqlDataReader^ fila = command.ExecuteReader();

		int id = 0;
		String^ nombre = "";
		String^ apellidos = "";
		String^ permiso = "";
		String^ hora = "";
		String^ fecha = "";
		//String^ registro = "";

		int temp1 = 0;
		std::string temp2 = "", temp3 = "", temp4 = "", temp5 = "", temp6 = "";
		UsuarioVi temp;

		while (fila->Read()) {
			id = fila->GetInt32(0);
			nombre = fila->GetString(1);
			apellidos = fila->GetString(2);
			permiso = fila->GetString(3);
			hora = fila->GetString(4);
			fecha = fila->GetString(5);
			//registro = fila->GetString(5);

			temp1 = id;
			temp2 = marshal_as<std::string>(nombre);
			temp3 = marshal_as<std::string>(apellidos);
			temp4 = marshal_as<std::string>(permiso);
			temp5 = marshal_as<std::string>(hora);
			temp6 = marshal_as<std::string>(fecha);
			//temp7 = marshal_as<std::string>(registro);


			temp.setValues(temp1, temp2, temp3, temp4, temp5, temp6);
			listaVigilancia->insertarElemento(new Nodo<UsuarioVi>(temp));
		}
		return listaVigilancia;
	}

};

