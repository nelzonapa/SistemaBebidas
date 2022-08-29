#pragma once
#include "Desencriptar.h"
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

	public ref class ValidarJefeForm : public System::Windows::Forms::Form
	{
	public:
		ValidarJefeForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ValidarJefeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSalir;
	protected:
	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::Windows::Forms::TextBox^ txtbxPassword;
	private: System::Windows::Forms::TextBox^ txtbxUsuario;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->txtbxPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtbxUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnSalir
			// 
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->Location = System::Drawing::Point(340, 201);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(91, 30);
			this->btnSalir->TabIndex = 28;
			this->btnSalir->Text = L"Cancelar";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &ValidarJefeForm::btnSalir_Click);
			// 
			// btnIngresar
			// 
			this->btnIngresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIngresar->Location = System::Drawing::Point(216, 201);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(91, 30);
			this->btnIngresar->TabIndex = 27;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &ValidarJefeForm::btnIngresar_Click);
			// 
			// txtbxPassword
			// 
			this->txtbxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbxPassword->Location = System::Drawing::Point(216, 146);
			this->txtbxPassword->Name = L"txtbxPassword";
			this->txtbxPassword->PasswordChar = '*';
			this->txtbxPassword->Size = System::Drawing::Size(228, 22);
			this->txtbxPassword->TabIndex = 26;
			// 
			// txtbxUsuario
			// 
			this->txtbxUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbxUsuario->Location = System::Drawing::Point(216, 106);
			this->txtbxUsuario->Name = L"txtbxUsuario";
			this->txtbxUsuario->Size = System::Drawing::Size(228, 22);
			this->txtbxUsuario->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(78, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 24);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Contraseña";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(78, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 24);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Usuario";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(529, 38);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Validacion";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ValidarJefeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 261);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->txtbxPassword);
			this->Controls->Add(this->txtbxUsuario);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ValidarJefeForm";
			this->Text = L"ValidarJefeForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	public: bool validacionJefe = false;

	protected: bool acceso(String^ usuarioInput, String^ passwordInput) {
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


	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ usuario = this->txtbxUsuario->Text;
		String^ password = this->txtbxPassword->Text;
		if (usuario->Length == 0 || password->Length == 0) {
			MessageBox::Show("Por favor ingrese email y password",
				"Email o Password vacio", MessageBoxButtons::OK);
			return;
		}
		if (acceso(usuario, password) == false) {
			MessageBox::Show("Usuario o password incorrectos",
				"Error al ingresar al sistema", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
			SqlConnection sqlConn(connString); //se crea el objeto conexion
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM usuarios WHERE usuario='" + usuario + "'";
			SqlCommand command(sqlQuery, % sqlConn);

			SqlDataReader^ reader = command.ExecuteReader(); //array dinamico que recibe los datos de la consulta
			if (reader->Read()) {
				if (reader->GetString(6) == "Jefe de Almacen") {
					validacionJefe = true;
					this->Close();
				}
				else {
					MessageBox::Show("Usted no tiene permisos para Registrar Nuevo Usuario",
						"Error de permisos", MessageBoxButtons::OK);
				}
			}
			else {
				String^ mensajito = "Usuario o password incorrecto";
				MessageBox::Show(mensajito,
					"Error de Email o Password", MessageBoxButtons::OK);
			}

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database"+e,
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}
	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
