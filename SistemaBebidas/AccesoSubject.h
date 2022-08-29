#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Data::SqlClient;
using namespace msclr::interop;

class AccesoSubject// Clase Base para Proxy
{
	public:
		virtual bool SolicitudAcceso() = 0;
};

