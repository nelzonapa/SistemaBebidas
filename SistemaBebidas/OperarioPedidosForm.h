#pragma once
#include "UsuarioSesion.h"
#include "UsuarioVisitor.h"
#include <msclr\marshal_cppstd.h>//convertir a string

namespace SistemaBebidas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	using namespace std;
	using namespace msclr::interop;
	using namespace System::Data::SqlClient;
	//NEW
	using namespace System::IO;


	/// <summary>
	/// Resumen de OperarioPedidosForm
	/// </summary>
	public ref class OperarioPedidosForm : public System::Windows::Forms::Form
	{
	private: UsuarioSesion* datos;
	public:
		OperarioPedidosForm(UsuarioSesion* datos)
		{
			InitializeComponent();
			this->datos = datos;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~OperarioPedidosForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BtnConforme;
	private: System::Windows::Forms::Button^ BtnObservar;
	private: System::Windows::Forms::Label^ labelFechaEntrega;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::CheckBox^ checkBoxCantidad;
	private: System::Windows::Forms::Button^ BtnLeerArchivo2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label1Proveedor;
	private: System::Windows::Forms::CheckBox^ checkBoxTipoProd;
	private: System::Windows::Forms::CheckBox^ checkBoxNombreProd;
	private: System::Windows::Forms::CheckBox^ checkBoxMarca;
	private: System::Windows::Forms::Label^ labelCargo;
	private: System::Windows::Forms::Label^ labelBienvendio;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ BtnCrearArchivo;
	private: System::Windows::Forms::Button^ BtnLeerArchivo1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ labelProveedorBD;
	private: System::Windows::Forms::Label^ labelCargoBD;
	private: System::Windows::Forms::Label^ labelPersonal;
	private: System::Windows::Forms::Label^ label_prueba;
	private: System::Windows::Forms::Label^ label_conf_crear;
	private: System::Windows::Forms::Label^ label_error;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label_prueba = (gcnew System::Windows::Forms::Label());
			this->label_conf_crear = (gcnew System::Windows::Forms::Label());
			this->label_error = (gcnew System::Windows::Forms::Label());
			this->labelProveedorBD = (gcnew System::Windows::Forms::Label());
			this->labelCargoBD = (gcnew System::Windows::Forms::Label());
			this->labelPersonal = (gcnew System::Windows::Forms::Label());
			this->BtnConforme = (gcnew System::Windows::Forms::Button());
			this->BtnObservar = (gcnew System::Windows::Forms::Button());
			this->labelFechaEntrega = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBoxCantidad = (gcnew System::Windows::Forms::CheckBox());
			this->BtnLeerArchivo2 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label1Proveedor = (gcnew System::Windows::Forms::Label());
			this->checkBoxTipoProd = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxNombreProd = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxMarca = (gcnew System::Windows::Forms::CheckBox());
			this->labelCargo = (gcnew System::Windows::Forms::Label());
			this->labelBienvendio = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->BtnCrearArchivo = (gcnew System::Windows::Forms::Button());
			this->BtnLeerArchivo1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panel2->Controls->Add(this->label_prueba);
			this->panel2->Controls->Add(this->label_conf_crear);
			this->panel2->Controls->Add(this->label_error);
			this->panel2->Controls->Add(this->labelProveedorBD);
			this->panel2->Controls->Add(this->labelCargoBD);
			this->panel2->Controls->Add(this->labelPersonal);
			this->panel2->Controls->Add(this->BtnConforme);
			this->panel2->Controls->Add(this->BtnObservar);
			this->panel2->Controls->Add(this->labelFechaEntrega);
			this->panel2->Controls->Add(this->dateTimePicker1);
			this->panel2->Controls->Add(this->checkBoxCantidad);
			this->panel2->Controls->Add(this->BtnLeerArchivo2);
			this->panel2->Controls->Add(this->listBox3);
			this->panel2->Controls->Add(this->label1Proveedor);
			this->panel2->Controls->Add(this->checkBoxTipoProd);
			this->panel2->Controls->Add(this->checkBoxNombreProd);
			this->panel2->Controls->Add(this->checkBoxMarca);
			this->panel2->Controls->Add(this->labelCargo);
			this->panel2->Controls->Add(this->labelBienvendio);
			this->panel2->Controls->Add(this->listBox2);
			this->panel2->Controls->Add(this->BtnCrearArchivo);
			this->panel2->Controls->Add(this->BtnLeerArchivo1);
			this->panel2->Controls->Add(this->listBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(0, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1237, 591);
			this->panel2->TabIndex = 1;
			// 
			// label_prueba
			// 
			this->label_prueba->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prueba->Location = System::Drawing::Point(849, 557);
			this->label_prueba->Name = L"label_prueba";
			this->label_prueba->Size = System::Drawing::Size(162, 23);
			this->label_prueba->TabIndex = 45;
			this->label_prueba->Text = L"...";
			this->label_prueba->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_conf_crear
			// 
			this->label_conf_crear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_conf_crear->ForeColor = System::Drawing::Color::White;
			this->label_conf_crear->Location = System::Drawing::Point(981, 556);
			this->label_conf_crear->Name = L"label_conf_crear";
			this->label_conf_crear->Size = System::Drawing::Size(162, 23);
			this->label_conf_crear->TabIndex = 44;
			this->label_conf_crear->Text = L"...";
			this->label_conf_crear->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_error
			// 
			this->label_error->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_error->ForeColor = System::Drawing::Color::White;
			this->label_error->Location = System::Drawing::Point(749, 557);
			this->label_error->Name = L"label_error";
			this->label_error->Size = System::Drawing::Size(102, 23);
			this->label_error->TabIndex = 43;
			this->label_error->Text = L"...";
			this->label_error->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelProveedorBD
			// 
			this->labelProveedorBD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelProveedorBD->ForeColor = System::Drawing::Color::White;
			this->labelProveedorBD->Location = System::Drawing::Point(687, 228);
			this->labelProveedorBD->Name = L"labelProveedorBD";
			this->labelProveedorBD->Size = System::Drawing::Size(204, 23);
			this->labelProveedorBD->TabIndex = 42;
			this->labelProveedorBD->Text = L"...";
			this->labelProveedorBD->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelCargoBD
			// 
			this->labelCargoBD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCargoBD->ForeColor = System::Drawing::Color::White;
			this->labelCargoBD->Location = System::Drawing::Point(683, 168);
			this->labelCargoBD->Name = L"labelCargoBD";
			this->labelCargoBD->Size = System::Drawing::Size(204, 23);
			this->labelCargoBD->TabIndex = 41;
			this->labelCargoBD->Text = L"...";
			this->labelCargoBD->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelPersonal
			// 
			this->labelPersonal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPersonal->ForeColor = System::Drawing::Color::White;
			this->labelPersonal->Location = System::Drawing::Point(683, 105);
			this->labelPersonal->Name = L"labelPersonal";
			this->labelPersonal->Size = System::Drawing::Size(204, 23);
			this->labelPersonal->TabIndex = 40;
			this->labelPersonal->Text = L"...";
			this->labelPersonal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BtnConforme
			// 
			this->BtnConforme->Location = System::Drawing::Point(744, 531);
			this->BtnConforme->Name = L"BtnConforme";
			this->BtnConforme->Size = System::Drawing::Size(112, 23);
			this->BtnConforme->TabIndex = 39;
			this->BtnConforme->Text = L"CONFORME";
			this->BtnConforme->UseVisualStyleBackColor = true;
			this->BtnConforme->Click += gcnew System::EventHandler(this, &OperarioPedidosForm::BtnConforme_Click_1);
			// 
			// BtnObservar
			// 
			this->BtnObservar->Location = System::Drawing::Point(746, 498);
			this->BtnObservar->Name = L"BtnObservar";
			this->BtnObservar->Size = System::Drawing::Size(112, 23);
			this->BtnObservar->TabIndex = 38;
			this->BtnObservar->Text = L"OBSERVAR";
			this->BtnObservar->UseVisualStyleBackColor = true;
			this->BtnObservar->Click += gcnew System::EventHandler(this, &OperarioPedidosForm::BtnObservar_Click_1);
			// 
			// labelFechaEntrega
			// 
			this->labelFechaEntrega->AutoSize = true;
			this->labelFechaEntrega->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelFechaEntrega->ForeColor = System::Drawing::Color::White;
			this->labelFechaEntrega->Location = System::Drawing::Point(716, 438);
			this->labelFechaEntrega->Name = L"labelFechaEntrega";
			this->labelFechaEntrega->Size = System::Drawing::Size(143, 16);
			this->labelFechaEntrega->TabIndex = 37;
			this->labelFechaEntrega->Text = L"FECHA DE ENTREGA";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd-MM-yyyy";
			this->dateTimePicker1->Location = System::Drawing::Point(692, 463);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(197, 20);
			this->dateTimePicker1->TabIndex = 36;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &OperarioPedidosForm::dateTimePicker1_ValueChanged_1);
			// 
			// checkBoxCantidad
			// 
			this->checkBoxCantidad->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkBoxCantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBoxCantidad->ForeColor = System::Drawing::Color::White;
			this->checkBoxCantidad->Location = System::Drawing::Point(691, 389);
			this->checkBoxCantidad->Name = L"checkBoxCantidad";
			this->checkBoxCantidad->Size = System::Drawing::Size(201, 42);
			this->checkBoxCantidad->TabIndex = 35;
			this->checkBoxCantidad->Text = L"Cantidad (sixpacks)";
			this->checkBoxCantidad->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBoxCantidad->UseVisualStyleBackColor = true;
			this->checkBoxCantidad->CheckedChanged += gcnew System::EventHandler(this, &OperarioPedidosForm::checkBoxCantidad_CheckedChanged_1);
			// 
			// BtnLeerArchivo2
			// 
			this->BtnLeerArchivo2->Location = System::Drawing::Point(438, 531);
			this->BtnLeerArchivo2->Name = L"BtnLeerArchivo2";
			this->BtnLeerArchivo2->Size = System::Drawing::Size(151, 23);
			this->BtnLeerArchivo2->TabIndex = 34;
			this->BtnLeerArchivo2->Text = L"Leer archivo de verificación";
			this->BtnLeerArchivo2->UseVisualStyleBackColor = true;
			this->BtnLeerArchivo2->Click += gcnew System::EventHandler(this, &OperarioPedidosForm::BtnLeerArchivo2_Click_1);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(362, 83);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(311, 420);
			this->listBox3->TabIndex = 33;
			// 
			// label1Proveedor
			// 
			this->label1Proveedor->AutoSize = true;
			this->label1Proveedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1Proveedor->ForeColor = System::Drawing::Color::White;
			this->label1Proveedor->Location = System::Drawing::Point(745, 201);
			this->label1Proveedor->Name = L"label1Proveedor";
			this->label1Proveedor->Size = System::Drawing::Size(93, 16);
			this->label1Proveedor->TabIndex = 32;
			this->label1Proveedor->Text = L"PROVEEDOR";
			// 
			// checkBoxTipoProd
			// 
			this->checkBoxTipoProd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkBoxTipoProd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBoxTipoProd->ForeColor = System::Drawing::Color::White;
			this->checkBoxTipoProd->Location = System::Drawing::Point(693, 348);
			this->checkBoxTipoProd->Name = L"checkBoxTipoProd";
			this->checkBoxTipoProd->Size = System::Drawing::Size(201, 36);
			this->checkBoxTipoProd->TabIndex = 31;
			this->checkBoxTipoProd->Text = L"Tipo de Producto";
			this->checkBoxTipoProd->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBoxTipoProd->UseVisualStyleBackColor = true;
			this->checkBoxTipoProd->CheckedChanged += gcnew System::EventHandler(this, &OperarioPedidosForm::checkBoxTipoProd_CheckedChanged_1);
			// 
			// checkBoxNombreProd
			// 
			this->checkBoxNombreProd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkBoxNombreProd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBoxNombreProd->ForeColor = System::Drawing::Color::White;
			this->checkBoxNombreProd->Location = System::Drawing::Point(690, 304);
			this->checkBoxNombreProd->Name = L"checkBoxNombreProd";
			this->checkBoxNombreProd->Size = System::Drawing::Size(201, 38);
			this->checkBoxNombreProd->TabIndex = 30;
			this->checkBoxNombreProd->Text = L"  Nombre del Producto";
			this->checkBoxNombreProd->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBoxNombreProd->UseVisualStyleBackColor = true;
			this->checkBoxNombreProd->CheckedChanged += gcnew System::EventHandler(this, &OperarioPedidosForm::checkBoxNombreProd_CheckedChanged_1);
			// 
			// checkBoxMarca
			// 
			this->checkBoxMarca->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkBoxMarca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxMarca->ForeColor = System::Drawing::Color::White;
			this->checkBoxMarca->Location = System::Drawing::Point(690, 266);
			this->checkBoxMarca->Name = L"checkBoxMarca";
			this->checkBoxMarca->Size = System::Drawing::Size(201, 40);
			this->checkBoxMarca->TabIndex = 29;
			this->checkBoxMarca->Text = L"Marca del Producto";
			this->checkBoxMarca->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBoxMarca->UseVisualStyleBackColor = true;
			this->checkBoxMarca->CheckedChanged += gcnew System::EventHandler(this, &OperarioPedidosForm::checkBoxMarca_CheckedChanged_1);
			// 
			// labelCargo
			// 
			this->labelCargo->AutoSize = true;
			this->labelCargo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCargo->ForeColor = System::Drawing::Color::White;
			this->labelCargo->Location = System::Drawing::Point(759, 146);
			this->labelCargo->Name = L"labelCargo";
			this->labelCargo->Size = System::Drawing::Size(55, 16);
			this->labelCargo->TabIndex = 28;
			this->labelCargo->Text = L"CARGO";
			// 
			// labelBienvendio
			// 
			this->labelBienvendio->AutoSize = true;
			this->labelBienvendio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBienvendio->ForeColor = System::Drawing::Color::White;
			this->labelBienvendio->Location = System::Drawing::Point(746, 86);
			this->labelBienvendio->Name = L"labelBienvendio";
			this->labelBienvendio->Size = System::Drawing::Size(89, 16);
			this->labelBienvendio->TabIndex = 27;
			this->labelBienvendio->Text = L"BIENVENIDO";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(900, 83);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(311, 420);
			this->listBox2->TabIndex = 26;
			// 
			// BtnCrearArchivo
			// 
			this->BtnCrearArchivo->Location = System::Drawing::Point(1003, 531);
			this->BtnCrearArchivo->Name = L"BtnCrearArchivo";
			this->BtnCrearArchivo->Size = System::Drawing::Size(112, 23);
			this->BtnCrearArchivo->TabIndex = 25;
			this->BtnCrearArchivo->Text = L"Crear archivo";
			this->BtnCrearArchivo->UseVisualStyleBackColor = true;
			this->BtnCrearArchivo->Click += gcnew System::EventHandler(this, &OperarioPedidosForm::BtnCrearArchivo_Click_1);
			// 
			// BtnLeerArchivo1
			// 
			this->BtnLeerArchivo1->Location = System::Drawing::Point(106, 531);
			this->BtnLeerArchivo1->Name = L"BtnLeerArchivo1";
			this->BtnLeerArchivo1->Size = System::Drawing::Size(147, 23);
			this->BtnLeerArchivo1->TabIndex = 24;
			this->BtnLeerArchivo1->Text = L"Leer archivo enviado";
			this->BtnLeerArchivo1->UseVisualStyleBackColor = true;
			this->BtnLeerArchivo1->Click += gcnew System::EventHandler(this, &OperarioPedidosForm::BtnLeerArchivo1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(30, 83);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(311, 420);
			this->listBox1->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->label1->Location = System::Drawing::Point(102, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(322, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Seccion de Operario de Pedidos";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(584, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(427, 20);
			this->textBox1->TabIndex = 1;
			// 
			// OperarioPedidosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1237, 589);
			this->Controls->Add(this->panel2);
			this->Name = L"OperarioPedidosForm";
			this->Text = L"OperarioPedidosForm";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Boolean^ checking = gcnew Boolean(false);//variable general
		//BOTON que LEERÁ el "file enviado"
	private:Void BtnLeerArchivo1_Click(Object^ sender, EventArgs^ e) {

		//Conexion con la base de datos
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT nombres,apellidos,permiso FROM usuarios WHERE permiso='Operario de Pedidos';";//Comando que selecciona el usuario correcto de la base de datos

		SqlCommand command(sqlQuery, % sqlConn);//hasta ahí prepara el envío

		//Recibimos los datos necesarios
		SqlDataReader^ reader = command.ExecuteReader(); //array dinamico que recibe los datos de la consulta
		reader->Read();//depende las filas leidas

		//String^ Proveedor = gcnew String("Empresa2.SAC");
		labelPersonal->Text = reader->GetString(0) + " " + reader->GetString(1);//Nombres+Apellidos;
		labelCargoBD->Text = reader->GetString(2);
		labelProveedorBD->Text = "Empresa2.SAC";
		sqlConn.Close();//Cerramos la conexion con SQLserver

		listBox1->Items->Clear();//primero limpiamos lo que se tenía en el textbox(vaciamos el textbox)
		try
		{
			/*
			StreamReader y StreamWriter nos servirá para leer y crear un txt
			parecido a ofstream and fstream
			*/
			StreamReader^ reader = gcnew  StreamReader("..\\Enviado_anterior.txt");//archivo que se abrirá
			do
			{
				listBox1->Items->Add(reader->ReadLine());//lee una linea de caracteres y los da en cadena
			} while (reader->Peek() != -1);//ir leendo caracteres hasta no encontrar uno
		}
		//en caso de no encontrar un file de 0 byte o un archivo o file inexistente
		catch (FileNotFoundException^ ex)
		{
			listBox1->Items->Add(ex);
		}

		catch (System::Exception^ e)
		{
			listBox1->Items->Add(e);
		}

	}

		   //Función que leerá el "archivo de verificación"
	private:Void BtnLeerArchivo2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		listBox3->Items->Clear();//vaciamos el textbox
		try
		{
			StreamReader^ reader = gcnew  StreamReader("..\\Archivo_Verificacion.txt");//archivo que se abrirá
			do
			{
				listBox3->Items->Add(reader->ReadLine());//lee una linea de caracteres y los da en cadena
			} while (reader->Peek() != -1);//ir leendo caracteres hasta no encontrar uno
		}
		//en caso de no encontrar un file de 0 byte o un archivo o file inexistente
		catch (FileNotFoundException^ ex)
		{
			listBox3->Items->Add(ex);
		}

		catch (System::Exception^ e)
		{
			listBox3->Items->Add(e);
		}
	}

	private:Void checkBoxMarca_CheckedChanged_1(Object^ sender, EventArgs^ e) {
		//Recibe de base datos...
		/*String^ Marca = gcnew String("----------- Backus -------------");*/
		checking = true;
		if (checkBoxMarca->Checked == true)
			checking = true;
		else
			checking = false;
	}

	private:Void checkBoxNombreProd_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxNombreProd->Checked == true)
			checking = true;
		else
			checking = false;
	}

	private: System::Void checkBoxTipoProd_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxTipoProd->Checked == true)
			checking = true;
		else
			checking = false;
	}

	private: System::Void checkBoxCantidad_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxCantidad->Checked == true)
			checking = true;
		else
			checking = false;
	}

	private: System::Void BtnObservar_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//Enviar a la base de datos el dato segun id del producto su estado del producto: OBSERVADO
		if (checking->Equals(false))
		{
			label_error->Text = "Obs. Correcta";
		}
		else {
			label_error->Text = "Obs. Errónea";
		}
	}

		   //Función para verificar lo conforme del producto y a la vez incluya el producto en la base de datos
	private: System::Void BtnConforme_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//Enviar a la base de datos el dato segun id del producto su estado del producto: Conforme
		if (checking->Equals(true))
		{
			label_error->Text = "Conf. Correcta";
		}
		else {
			label_error->Text = "Conf. Errónea";
		}
	}

		   //Función para elegir fecha, esta en sí se pone de acuerdo al computador
	private: System::Void dateTimePicker1_ValueChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void BtnCrearArchivo_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (label_error->Text == "Conf. Correcta" || label_error->Text == "Obs. Correcta")
		{
			listBox2->Items->Clear();//Limpiamos lo que este mostrando el listBox
			String^ aviso = gcnew String("\nEl documento fue creado -> ..\\TextoCreado.txt");//Escritura que aparecerá en el listBox
			listBox2->Items->Add(aviso);//lo pone en el listbox
			/*---------------------------------------------------*/

			// Creamos y escribimos en el DOC
			StreamWriter^ Creando = gcnew StreamWriter("..\\TextoCreado.txt");//ponemos nombre del texto a crear

			//txt a leer
			StreamReader^ reader = gcnew  StreamReader("..\\Archivo_Verificacion.txt");//archivo que se abrirá

			String^ aux1, ^ aux2, ^ aux3, ^ aux4, ^ aux5, ^ aux6;

			String^ Leida;
			cli::array<String^>^ StringArray2;
			int contador = 0;
			do
			{
				Leida = reader->ReadLine();
				/*lee una linea de caracteres y los da en cadena, en este caso lee 10*/
				listBox2->Items->Add(Leida);//lo ponemos en el listBox
				Creando->WriteLine(Leida);//Lo ponemos en el texto creado
				//label_prueba->Text = contador.ToString();
				switch (contador)
				{
				case 0:
					//label_prueba->Text = contador.ToString();
					StringArray2 = Leida->Split(' ');
					aux1 = StringArray2[2];
					label_prueba->Text = aux1;
					contador++;
					break;
				case 1:
					//label_prueba->Text = "contador.ToString()";
					StringArray2 = Leida->Split(' ');
					aux2 = StringArray2[4];
					label_prueba->Text = aux2;
					contador++;
					break;
				case 2:
					//label_prueba->Text = "contador.ToString()";
					StringArray2 = Leida->Split(' ');
					aux3 = StringArray2[4];
					label_prueba->Text = aux3;
					contador++;
					break;
				case 3:
					//label_prueba->Text = "contador.ToString()";
					StringArray2 = Leida->Split(' ');
					aux4 = StringArray2[2];
					label_prueba->Text = aux4;
					contador++;
					break;
				case 4:
					//label_prueba->Text = "contador.ToString()";
					StringArray2 = Leida->Split(' ');
					aux5 = StringArray2[2];
					label_prueba->Text = aux5;
					contador++;
					continue;
				case 5:
					//label_prueba->Text = "contador.ToString()";
					StringArray2 = Leida->Split(' ');
					aux6 = StringArray2[3];
					label_prueba->Text = aux6;
					contador++;
					continue;
				default:
					contador++;//contador al final
					break;
				}

			} while (reader->Peek() != -1);//ir leendo caracteres hasta no encontrar uno

			//label_prueba->Text = aux1;

			String^ Time = gcnew String("> Fecha última de Revisión: " + dateTimePicker1->Text);
			listBox2->Items->Add(Time);//lo pone en el listbox

			/*listBox2->Items->Add(aux1);*/

			Creando->WriteLine(Time);
			Creando->Close();//cerramos edición

			/*---------------------------------------------------*/

			/*Notificamos si se realizó la creación*/
			label_conf_crear->Text = "Creación correcta";


			//COMANDOS para DATABASE
			//Conexion con la base de datos
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			if (label_error->Text == "Conf. Correcta")
			{
				String^ sqlQuery = "INSERT INTO productos(marca, nombre, tipo,capacidad,precio,stock) VALUES(@marca,@nombre, @tipo, @capacidad, @precio, @stock);";//('Backus', 'Pilsen Callao', 'cerveza', 320, 21.5, 5)
				SqlCommand command(sqlQuery, % sqlConn);

				command.Parameters->AddWithValue("@marca", aux1);
				command.Parameters->AddWithValue("@nombre", aux2);
				command.Parameters->AddWithValue("@tipo", aux3);
				command.Parameters->AddWithValue("@capacidad", aux4);
				command.Parameters->AddWithValue("@precio", aux5);
				command.Parameters->AddWithValue("@stock", aux6);

				command.ExecuteNonQuery();
				sqlConn.Close();
			}
			else if (label_error->Text == "Obs. Correcta") {
				String^ sqlQuery = "INSERT INTO productos_obs(marca, nombre, tipo,capacidad,precio,stock) VALUES(@marca,@nombre, @tipo, @capacidad, @precio, @stock);";//('Backus', 'Pilsen Callao', 'cerveza', 320, 21.5, 5)
				SqlCommand command(sqlQuery, % sqlConn);

				command.Parameters->AddWithValue("@marca", aux1);
				command.Parameters->AddWithValue("@nombre", aux2);
				command.Parameters->AddWithValue("@tipo", aux3);
				command.Parameters->AddWithValue("@capacidad", aux4);
				command.Parameters->AddWithValue("@precio", aux5);
				command.Parameters->AddWithValue("@stock", aux6);

				command.ExecuteNonQuery();
				sqlConn.Close();
			}
		}
		else {
			label_conf_crear->Text = "Creación Incorrecta";
		}

	}
	};

}
