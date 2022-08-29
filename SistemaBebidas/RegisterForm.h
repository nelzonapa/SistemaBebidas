#pragma once
#include "UsuarioSesion.h"
//#include "UsuarioVisitor.h"
//#include "ControladorExpedicion.h"
//#include "OperarioPedidos.h"
//#include "PersonalDeVigilancia.h"
#include "Encriptar.h"
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

	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//MessageBox::Show("Es necesario que usted tenga permisos de Jefe de Almacen para realizar esta accion", "Register Alert", MessageBoxButtons::OK);
		}

	protected:

		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkLblLogin;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::TextBox^ txtBoxConfirmPassw;
	private: System::Windows::Forms::Label^ lblConfirmContras;
	private: System::Windows::Forms::TextBox^ txtBxPassword;
	private: System::Windows::Forms::TextBox^ txtBxEmail;
	private: System::Windows::Forms::TextBox^ txtBxUsuario;
	private: System::Windows::Forms::Label^ lblContras;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblUsuario;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtBxNombres;
	private: System::Windows::Forms::Label^ lblNombres;
	private: System::Windows::Forms::Label^ lblApellidos;
	private: System::Windows::Forms::TextBox^ txtBxApellidos;
	private: System::Windows::Forms::Label^ lblPermiso;
	private: System::Windows::Forms::ComboBox^ cmbBxPermiso;

	private:
		/// Variable del diseñador necesaria.
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->linkLblLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->txtBoxConfirmPassw = (gcnew System::Windows::Forms::TextBox());
			this->lblConfirmContras = (gcnew System::Windows::Forms::Label());
			this->txtBxPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtBxEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtBxUsuario = (gcnew System::Windows::Forms::TextBox());
			this->lblContras = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBxNombres = (gcnew System::Windows::Forms::TextBox());
			this->lblNombres = (gcnew System::Windows::Forms::Label());
			this->lblApellidos = (gcnew System::Windows::Forms::Label());
			this->txtBxApellidos = (gcnew System::Windows::Forms::TextBox());
			this->lblPermiso = (gcnew System::Windows::Forms::Label());
			this->cmbBxPermiso = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// linkLblLogin
			// 
			this->linkLblLogin->AutoSize = true;
			this->linkLblLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLblLogin->Location = System::Drawing::Point(519, 364);
			this->linkLblLogin->Name = L"linkLblLogin";
			this->linkLblLogin->Size = System::Drawing::Size(111, 16);
			this->linkLblLogin->TabIndex = 23;
			this->linkLblLogin->TabStop = true;
			this->linkLblLogin->Text = L"Regresar a Login";
			this->linkLblLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::linkLblLogin_LinkClicked);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->Location = System::Drawing::Point(447, 304);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(101, 34);
			this->btnCancelar->TabIndex = 22;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancelar_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardar->Location = System::Drawing::Point(448, 248);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(101, 34);
			this->btnGuardar->TabIndex = 21;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &RegisterForm::btnGuardar_Click);
			// 
			// txtBoxConfirmPassw
			// 
			this->txtBoxConfirmPassw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtBoxConfirmPassw->Location = System::Drawing::Point(214, 277);
			this->txtBoxConfirmPassw->Name = L"txtBoxConfirmPassw";
			this->txtBoxConfirmPassw->PasswordChar = '*';
			this->txtBoxConfirmPassw->Size = System::Drawing::Size(186, 22);
			this->txtBoxConfirmPassw->TabIndex = 20;
			// 
			// lblConfirmContras
			// 
			this->lblConfirmContras->AutoSize = true;
			this->lblConfirmContras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblConfirmContras->Location = System::Drawing::Point(68, 278);
			this->lblConfirmContras->Name = L"lblConfirmContras";
			this->lblConfirmContras->Size = System::Drawing::Size(135, 16);
			this->lblConfirmContras->TabIndex = 19;
			this->lblConfirmContras->Text = L"Confirma Contraseña:";
			// 
			// txtBxPassword
			// 
			this->txtBxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBxPassword->Location = System::Drawing::Point(214, 239);
			this->txtBxPassword->Name = L"txtBxPassword";
			this->txtBxPassword->PasswordChar = '*';
			this->txtBxPassword->Size = System::Drawing::Size(185, 22);
			this->txtBxPassword->TabIndex = 18;
			// 
			// txtBxEmail
			// 
			this->txtBxEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBxEmail->Location = System::Drawing::Point(187, 159);
			this->txtBxEmail->Name = L"txtBxEmail";
			this->txtBxEmail->Size = System::Drawing::Size(362, 22);
			this->txtBxEmail->TabIndex = 17;
			// 
			// txtBxUsuario
			// 
			this->txtBxUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBxUsuario->Location = System::Drawing::Point(187, 198);
			this->txtBxUsuario->Name = L"txtBxUsuario";
			this->txtBxUsuario->Size = System::Drawing::Size(362, 22);
			this->txtBxUsuario->TabIndex = 16;
			// 
			// lblContras
			// 
			this->lblContras->AutoSize = true;
			this->lblContras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblContras->Location = System::Drawing::Point(68, 239);
			this->lblContras->Name = L"lblContras";
			this->lblContras->Size = System::Drawing::Size(79, 16);
			this->lblContras->TabIndex = 15;
			this->lblContras->Text = L"Contraseña:";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(69, 158);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(44, 16);
			this->lblEmail->TabIndex = 14;
			this->lblEmail->Text = L"Email:";
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsuario->Location = System::Drawing::Point(69, 198);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(54, 16);
			this->lblUsuario->TabIndex = 13;
			this->lblUsuario->Text = L"Usuario";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(33, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(563, 62);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Registrar Nuevo Usuario";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtBxNombres
			// 
			this->txtBxNombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBxNombres->Location = System::Drawing::Point(187, 81);
			this->txtBxNombres->Name = L"txtBxNombres";
			this->txtBxNombres->Size = System::Drawing::Size(362, 22);
			this->txtBxNombres->TabIndex = 16;
			// 
			// lblNombres
			// 
			this->lblNombres->AutoSize = true;
			this->lblNombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombres->Location = System::Drawing::Point(69, 82);
			this->lblNombres->Name = L"lblNombres";
			this->lblNombres->Size = System::Drawing::Size(66, 16);
			this->lblNombres->TabIndex = 13;
			this->lblNombres->Text = L"Nombres:";
			// 
			// lblApellidos
			// 
			this->lblApellidos->AutoSize = true;
			this->lblApellidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblApellidos->Location = System::Drawing::Point(69, 121);
			this->lblApellidos->Name = L"lblApellidos";
			this->lblApellidos->Size = System::Drawing::Size(67, 16);
			this->lblApellidos->TabIndex = 13;
			this->lblApellidos->Text = L"Apellidos:";
			// 
			// txtBxApellidos
			// 
			this->txtBxApellidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBxApellidos->Location = System::Drawing::Point(187, 120);
			this->txtBxApellidos->Name = L"txtBxApellidos";
			this->txtBxApellidos->Size = System::Drawing::Size(362, 22);
			this->txtBxApellidos->TabIndex = 16;
			// 
			// lblPermiso
			// 
			this->lblPermiso->AutoSize = true;
			this->lblPermiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPermiso->Location = System::Drawing::Point(69, 316);
			this->lblPermiso->Name = L"lblPermiso";
			this->lblPermiso->Size = System::Drawing::Size(60, 16);
			this->lblPermiso->TabIndex = 19;
			this->lblPermiso->Text = L"Permiso:";
			// 
			// cmbBxPermiso
			// 
			this->cmbBxPermiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbBxPermiso->FormattingEnabled = true;
			this->cmbBxPermiso->Location = System::Drawing::Point(214, 314);
			this->cmbBxPermiso->Name = L"cmbBxPermiso";
			this->cmbBxPermiso->Size = System::Drawing::Size(186, 24);
			this->cmbBxPermiso->TabIndex = 24;
			this->cmbBxPermiso->SelectedIndexChanged += gcnew System::EventHandler(this, &RegisterForm::cmbBxPermiso_SelectedIndexChanged);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 394);
			this->Controls->Add(this->cmbBxPermiso);
			this->Controls->Add(this->linkLblLogin);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->txtBoxConfirmPassw);
			this->Controls->Add(this->lblPermiso);
			this->Controls->Add(this->lblConfirmContras);
			this->Controls->Add(this->txtBxPassword);
			this->Controls->Add(this->txtBxEmail);
			this->Controls->Add(this->txtBxApellidos);
			this->Controls->Add(this->txtBxNombres);
			this->Controls->Add(this->txtBxUsuario);
			this->Controls->Add(this->lblContras);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblApellidos);
			this->Controls->Add(this->lblNombres);
			this->Controls->Add(this->lblUsuario);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: bool switchToLogin = false;
	//public: UsuarioSesion* user = nullptr;
	public: UsuarioSesion& user = UsuarioSesion::get_instance();
	public: String^ cmbBxTxtPermiso;
	
	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombres = txtBxNombres->Text;
		String^ apellidos = txtBxApellidos->Text;
		String^ email = txtBxEmail->Text;
		String^ usuario = txtBxUsuario->Text;
		String^ password = txtBxPassword->Text;
		String^ confirmPassword = txtBoxConfirmPassw->Text;
		String^ permiso = this->cmbBxTxtPermiso;
		if (nombres->Length == 0 || apellidos->Length == 0 || email->Length == 0 || usuario->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
			MessageBox::Show("Por favor ingrese todos los campos ", "Campos Vacios", MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("La contraseña ingresada en 'Confirmar Contraseña' no es la misma ", "Password Error", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO usuarios " +
				"(nombres,apellidos,email,usuario,password,permiso) VALUES " +
				"(@nombres,@apellidos,@email,@usuario,@password,@permiso);";

			SqlCommand command(sqlQuery, % sqlConn);

			std::string claveInputstd = marshal_as<std::string>(password);
			Encriptar encriptador;
			std::string claveEncriptada = encriptador(claveInputstd);
			String^ claveEncriptadaSystem = gcnew String(claveEncriptada.c_str());

			command.Parameters->AddWithValue("@nombres", nombres);
			command.Parameters->AddWithValue("@apellidos", apellidos);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@usuario", usuario);
			command.Parameters->AddWithValue("@password", claveEncriptadaSystem);
			command.Parameters->AddWithValue("@permiso", permiso);

			command.ExecuteNonQuery();

			int param1 = 5;
			std::string param2 = marshal_as<std::string>(nombres);
			std::string param3 = marshal_as<std::string>(apellidos);
			std::string param4 = marshal_as<std::string>(email);
			std::string param5 = marshal_as<std::string>(usuario);
			std::string param6 = marshal_as<std::string>(password);
			std::string param7 = marshal_as<std::string>(permiso);

			//user = new UsuarioSesion(param1, param2, param3, param4, param5, param6, param7);
			user.setDatosUsuarioSingleton(param1, param2, param3, param4, param5, param6, param7);
			/*
			if (permiso == "Controlador de Expedicion") {
				user = new ControladorExpedicion(param1, param2, param3, param4, param5, param6, param7);
			}
			else if (permiso == "Operario de Pedidos") {
				user = new OperarioPedidos(param1, param2, param3, param4, param5, param6, param7);
			}
			else if (permiso == "Personal de Vigilancia") {
				user = new PersonalDeVigilancia(param1, param2, param3, param4, param5, param6, param7);
			}*/

			this->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Fallo al registrar cliente "+ex, "Register Error", MessageBoxButtons::OK);
		}

		MessageBox::Show("Se guardaran los cambios", "Register Alert", MessageBoxButtons::OK);
	}
	private: System::Void linkLblLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	private: System::Void cmbBxPermiso_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((cmbBxPermiso->Text) == "Jefe de Almacen") {
			this->cmbBxTxtPermiso = "Jefe de Almacen";
		}
		else if ((cmbBxPermiso->Text) == "Controlador de Expedicion") {
			this->cmbBxTxtPermiso = "Controlador de Expedicion";
		}
		else if ((cmbBxPermiso->Text) == "Operario de Pedidos") {
			this->cmbBxTxtPermiso = "Operario de Pedidos";
		}
		else if ((cmbBxPermiso->Text) == "Personal de Vigilancia") {
			this->cmbBxTxtPermiso = "Personal de Vigilancia";
		}
	}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	cmbBxPermiso->Items->Add("Jefe de Almacen");
	cmbBxPermiso->Items->Add("Controlador de Expedicion");
	cmbBxPermiso->Items->Add("Operario de Pedidos");
	cmbBxPermiso->Items->Add("Personal de Vigilancia");
}
};
}
