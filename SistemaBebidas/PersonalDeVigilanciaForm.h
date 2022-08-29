#pragma once
#include "UsuarioSesion.h"
#include "UsuarioVisitor.h"
#include "PuestoVigilanciaMostrar.h"
#include "RegistroDeIngreso.h"

namespace SistemaBebidas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PersonalDeVigilanciaForm
	/// </summary>
	public ref class PersonalDeVigilanciaForm : public System::Windows::Forms::Form
	{
	//private: UsuarioVisitor* userVigilancia;
	protected: UsuarioSesion* datos;
	public:
		PersonalDeVigilanciaForm(UsuarioSesion* datos)
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
		~PersonalDeVigilanciaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSalir;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnRegistro;
	private: System::Windows::Forms::Button^ btnListaUsuarios;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRegistro = (gcnew System::Windows::Forms::Button());
			this->btnListaUsuarios = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(223, 295);
			this->btnSalir->Margin = System::Windows::Forms::Padding(2);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(152, 28);
			this->btnSalir->TabIndex = 8;
			this->btnSalir->Text = L"CERRAR SESION";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &PersonalDeVigilanciaForm::btnSalir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(100, 35);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(401, 35);
			this->label1->TabIndex = 7;
			this->label1->Text = L"MODULO DE VIGILANCIA";
			// 
			// btnRegistro
			// 
			this->btnRegistro->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnRegistro->Location = System::Drawing::Point(340, 140);
			this->btnRegistro->Margin = System::Windows::Forms::Padding(2);
			this->btnRegistro->Name = L"btnRegistro";
			this->btnRegistro->Size = System::Drawing::Size(182, 75);
			this->btnRegistro->TabIndex = 6;
			this->btnRegistro->Text = L"REGISTRO ENTRADA Y SALIDA";
			this->btnRegistro->UseVisualStyleBackColor = false;
			this->btnRegistro->Click += gcnew System::EventHandler(this, &PersonalDeVigilanciaForm::btnRegistro_Click);
			// 
			// btnListaUsuarios
			// 
			this->btnListaUsuarios->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnListaUsuarios->Location = System::Drawing::Point(72, 140);
			this->btnListaUsuarios->Margin = System::Windows::Forms::Padding(2);
			this->btnListaUsuarios->Name = L"btnListaUsuarios";
			this->btnListaUsuarios->Size = System::Drawing::Size(182, 75);
			this->btnListaUsuarios->TabIndex = 5;
			this->btnListaUsuarios->Text = L"LISTA DE USUARIOS";
			this->btnListaUsuarios->UseVisualStyleBackColor = false;
			this->btnListaUsuarios->Click += gcnew System::EventHandler(this, &PersonalDeVigilanciaForm::btnListaUsuarios_Click);
			// 
			// PersonalDeVigilanciaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(602, 404);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnRegistro);
			this->Controls->Add(this->btnListaUsuarios);
			this->Name = L"PersonalDeVigilanciaForm";
			this->Text = L"PersonalDeVigilanciaForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchPuestoVigilancia = false;
	public: bool switchPuestoVigilancia2 = false;
	private: System::Void btnListaUsuarios_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchPuestoVigilancia = true;
		//this->Close();
		SistemaBebidas::PuestoVigilanciaMostrar mostrar_usuarios;
		mostrar_usuarios.ShowDialog();
	}
	private: System::Void btnRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchPuestoVigilancia2 = true;
		//this->Close();
		SistemaBebidas::RegistroDeIngreso mostrar_registro;
		mostrar_registro.ShowDialog();
	}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
