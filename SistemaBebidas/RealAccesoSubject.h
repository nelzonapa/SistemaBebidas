#pragma once
#include "Desencriptar.h"
#include "AccesoSubject.h"
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Data::SqlClient;
using namespace msclr::interop;


class RealAccesoSubject : public AccesoSubject
{
private:
	bool Acceso;
public:
	RealAccesoSubject (String^ usuarioInput, String^ passwordInput) {
		std::string stdPasswordInput = marshal_as<std::string>(passwordInput);
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
		SqlConnection sqlConn(connString); //se crea el objeto conexion
		sqlConn.Open();
		String^ sqlQuery = "SELECT usuario,password FROM usuarios";
		SqlCommand command(sqlQuery, % sqlConn);
		SqlDataReader^ fila = command.ExecuteReader();

		String^ temp1 = "";
		String^ temp2 = "";
		std::string claveEncriptada = "";
		std::string claveDesencriptada = "";
		Desencriptar desencriptador;

		while (fila->Read()) {
			temp1 = fila->GetString(0);
			temp2 = fila->GetString(1);
			claveEncriptada = marshal_as<std::string>(temp2);
			claveDesencriptada = desencriptador(claveEncriptada);
			if ((stdPasswordInput == claveDesencriptada)) {
				sqlConn.Close();
				this->Acceso = true;
				return;
			}
		}
		sqlConn.Close();
		this->Acceso = false;
	}
	bool SolicitudAcceso() override {
		return this->Acceso;
	}
};

