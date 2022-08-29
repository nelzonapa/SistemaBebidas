#pragma once
#include "UsuarioVisitor.h" //Visitor Pattern
#include "Producto.h"
#include "Nodo.h"
#include "ArrayDinamicoRef.h"
#include "Encriptar.h"
#include "Desencriptar.h"
#include <chrono>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <ctime>
#include <format>
#include <iostream>
#include "UsuarioSesion.h" // Singleton Pattern
#include "AccesoSubject.h" // Proxy Pattern
#include "RealAccesoSubject.h"	// Proxy Pattern
#include "AccesoProxy.h" // Proxy Pattern
#include <msclr\marshal_cppstd.h>

namespace SistemaBebidas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace msclr::interop;

	public ref class LoginForm : public System::Windows::Forms::Form
	{

	public:

		LoginForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
			
		}
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::Windows::Forms::TextBox^ txtbxPassword;
	private: System::Windows::Forms::TextBox^ txtbxUsuario;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->txtbxPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtbxUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(444, 285);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(75, 23);
			this->btnSalir->TabIndex = 21;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &LoginForm::btnSalir_Click);
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(320, 285);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(75, 23);
			this->btnIngresar->TabIndex = 20;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &LoginForm::btnIngresar_Click);
			// 
			// txtbxPassword
			// 
			this->txtbxPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->txtbxPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtbxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbxPassword->ForeColor = System::Drawing::Color::White;
			this->txtbxPassword->Location = System::Drawing::Point(6, 7);
			this->txtbxPassword->Name = L"txtbxPassword";
			this->txtbxPassword->PasswordChar = '*';
			this->txtbxPassword->Size = System::Drawing::Size(199, 15);
			this->txtbxPassword->TabIndex = 19;
			// 
			// txtbxUsuario
			// 
			this->txtbxUsuario->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->txtbxUsuario->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtbxUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbxUsuario->ForeColor = System::Drawing::Color::White;
			this->txtbxUsuario->Location = System::Drawing::Point(6, 7);
			this->txtbxUsuario->Name = L"txtbxUsuario";
			this->txtbxUsuario->Size = System::Drawing::Size(199, 15);
			this->txtbxUsuario->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(264, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 24);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Contraseña";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(264, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 24);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Usuario";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(300, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 38);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(530, 342);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(75, 23);
			this->btnRegister->TabIndex = 22;
			this->btnRegister->Text = L"Registrar";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &LoginForm::btnRegister_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(214, 377);
			this->panel1->TabIndex = 23;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(43, 109);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(126, 139);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->panel2->Controls->Add(this->txtbxUsuario);
			this->panel2->Location = System::Drawing::Point(376, 167);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(210, 29);
			this->panel2->TabIndex = 24;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->panel3->Controls->Add(this->txtbxPassword);
			this->panel3->Location = System::Drawing::Point(376, 223);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(210, 28);
			this->panel3->TabIndex = 25;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(617, 377);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Usted salio del sistema", "Sistema de Almacen de Bebidas", MessageBoxButtons::OK);
		this->Close();
	}
	//public: UsuarioSesion* user = nullptr;
	public: UsuarioSesion& user = UsuarioSesion::get_instance();
	/*
	protected: bool acceso(String^ usuarioInput,String^ passwordInput) {
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
				return true;
			}
		}
		sqlConn.Close();
		return false;
	}
	*/
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ usuario = this->txtbxUsuario->Text;
		String^ password = this->txtbxPassword->Text;

		/*
		if (usuario->Length == 0 || password->Length == 0) {
			MessageBox::Show("Por favor ingrese email y password",
				"Email o Password vacio", MessageBoxButtons::OK);
			return;
		}
		*/
		
		RealAccesoSubject* real_subject = new RealAccesoSubject(usuario,password);
		AccesoProxy* accesoProxy = new AccesoProxy(real_subject,usuario,password);
		//real_subject->SolicitudAcceso();

		//if (acceso(usuario,password) == false) {
		//if (real_subject->SolicitudAcceso() == false) {
		if (accesoProxy->SolicitudAcceso() == false) {
			MessageBox::Show("Usuario o password incorrectos",
				"Error al ingresar al sistema", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
			//String^ connString = "Data Source=LAPTOP-0MVU5789\SQLEXPRESS;Initial Catalog=sistemabebidas;User ID=sa;Password=administrador";
			SqlConnection sqlConn(connString); //se crea el objeto conexion
			sqlConn.Open();
			//String^ sqlQuery = "SELECT * FROM usuarios WHERE usuario=@usuario AND password=@password;";
			String^ sqlQuery = "SELECT * FROM usuarios WHERE usuario='"+usuario+"'";
			SqlCommand command(sqlQuery, % sqlConn);
			//command.Parameters->AddWithValue("@usuario", usuario);
			//command.Parameters->AddWithValue("@password", password);

			SqlDataReader^ reader = command.ExecuteReader(); //array dinamico que recibe los datos de la consulta
			if (reader->Read()) {
				int param1 = reader->GetInt32(0);
				std::string param2 = marshal_as<std::string>((reader->GetString(1)));
				std::string param3 = marshal_as<std::string>((reader->GetString(2)));
				std::string param4 = marshal_as<std::string>((reader->GetString(3)));
				std::string param5 = marshal_as<std::string>((reader->GetString(4)));
				std::string param6 = marshal_as<std::string>((reader->GetString(5)));
				std::string param7 = marshal_as<std::string>((reader->GetString(6)));

				std::time_t t = std::time(nullptr);
				std::tm* now = std::localtime(&t);

				std::string fecha = std::to_string(now->tm_mday) + '/' + std::to_string(now->tm_mon + 1) + '/' + std::to_string(now->tm_year + 1900);

				char tt[100];
				strftime(tt, 100, "%H:%M:%S", now);

				String^ hora2 = gcnew String(tt);

				int^ id = reader->GetInt32(0);
				String^ nombre = reader->GetString(1);
				String^ apellido = reader->GetString(2);
				String^ fechas = gcnew String(fecha.data());
				String^ permiso = reader->GetString(6);

				//sqlConn.Close();
				//string query = "INSERT INTO Person (Name,Salary) VALUES('Max','$1200')";

				SqlConnection sqlConn2(connString); //se crea el objeto conexion
				sqlConn2.Open();

				String^ sqlVigilacia = "INSERT INTO vigilancia " + "(ID,NOMBRE,APELLIDOS,PERMISO,HORA,FECHA) VALUES " + "(@param1,@param2,@param3,@param7,@hora ,@fecha);";
				SqlCommand command2(sqlVigilacia, % sqlConn2);

				command2.Parameters->AddWithValue("@param1", id);
				command2.Parameters->AddWithValue("@param2", nombre);
				command2.Parameters->AddWithValue("@param3", apellido);
				command2.Parameters->AddWithValue("@param7", permiso);
				command2.Parameters->AddWithValue("@fecha", fechas);
				command2.Parameters->AddWithValue("@hora", hora2);

				command2.ExecuteNonQuery();

				sqlConn2.Close();

				//user = new UsuarioSesion(param1, param2, param3, param4, param5, param6, param7);
				user.setDatosUsuarioSingleton(param1, param2, param3, param4, param5, param6, param7);
				this->Close();

				/*if (reader->GetString(6) == "Jefe de Almacen") {
					user = new Usuario(param1, param2, param3, param4, param5, param6, param7);
					this->Close();
				}
				else if (reader->GetString(6) == "Controlador de Expedicion") {
					user = new Usuario(param1, param2, param3, param4, param5, param6, param7);
					this->Close();
				}
				else if (reader->GetString(6) == "Operario de Pedidos") {
					user = new ControladorExpedicion(param1, param2, param3, param4, param5, param6, param7);
					this->Close();
				}
				else if (reader->GetString(6) == "Personal de Vigilancia") {
					user = new ControladorExpedicion(param1, param2, param3, param4, param5, param6, param7);
					this->Close();
				}
				else {
					MessageBox::Show("Usted no tiene permisos para acceder al sistema",
						"Error de permisos", MessageBoxButtons::OK);
				}*/

			}
			else {
				String^ mensajito = "Usuario o password incorrecto";
				MessageBox::Show(mensajito,
					"Email or Password Error", MessageBoxButtons::OK);
			}


		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database"+e,
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}
	public: bool switchToRegister = false;
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
};
}
