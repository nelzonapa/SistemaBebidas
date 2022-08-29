#pragma once
#include <memory>
#include "ArrayDinamicoRef.h"
#include "Producto.h"
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Data::SqlClient;
using namespace msclr::interop;

class FunctorProductos
{
public:
    std::shared_ptr<ArrayDinamicoRef<Producto>> operator()() {
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
			temp3 = marshal_as<std::string>(nombre);
			temp4 = marshal_as<std::string>(tipo);
			temp5 = capacidad;
			temp6 = precio;
			temp7 = stock;
			temp.setValues(temp1, temp2, temp3, temp4, temp5, temp6, temp7);
			listaProductos->insertarElemento(new Nodo<Producto>(temp));
		}
		return listaProductos;
    }
};

