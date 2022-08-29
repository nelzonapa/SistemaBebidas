#pragma once
#include <chrono>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <ctime>
#include <format>
#include <iostream>
#include <memory>
#include "ArrayDinamicoRef.h"
#include "Producto.h"
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Data::SqlClient;
using namespace msclr::interop;


class FunctorRegistrarAcceso
{
public:
	void operator() (int^ id, String^ nombre, String^ apellido, String^ permiso) {
		std::time_t t = std::time(nullptr);
		std::tm* now = std::localtime(&t);

		std::string fecha = std::to_string(now->tm_mday) + '/' + std::to_string(now->tm_mon + 1) + '/' + std::to_string(now->tm_year + 1900);
		char tt[100];
		strftime(tt, 100, "%H:%M:%S", now);

		String^ hora2 = gcnew String(tt);
		String^ fechas = gcnew String(fecha.data());
		//string query = "INSERT INTO Person (Name,Salary) VALUES('Max','$1200')";
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
		SqlConnection sqlConn2(connString); //se crea el objeto conexion
		sqlConn2.Open();
		//string registro = "INGRESO";
		//String^ re ="REGISTRO";

		String^ sqlVigilacia = "INSERT INTO vigilancia " + "(ID,NOMBRE,APELLIDOS,PERMISO,HORA,FECHA) VALUES " + "(@param1,@param2,@param3,@param7,@hora,@fecha);";
		SqlCommand command2(sqlVigilacia, % sqlConn2);

		command2.Parameters->AddWithValue("@param1", id);
		command2.Parameters->AddWithValue("@param2", nombre);
		command2.Parameters->AddWithValue("@param3", apellido);
		command2.Parameters->AddWithValue("@param7", permiso);
		command2.Parameters->AddWithValue("@fecha", fechas);
		command2.Parameters->AddWithValue("@hora", hora2);

		command2.ExecuteNonQuery();

		sqlConn2.Close();
	}
};

