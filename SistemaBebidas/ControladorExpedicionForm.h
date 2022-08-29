#pragma once
#include "UsuarioSesion.h"
#include "UsuarioVisitor.h"
#include "ModificarStock.h"
#include "BusquedaFiltro.h"
#include "AgregarStock.h"
#include "OrdenarStock.h"
#include <msclr\marshal_cppstd.h>//convertir a string

namespace SistemaBebidas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Resumen de ControladorExpedicionForm
	/// </summary>
	public ref class ControladorExpedicionForm : public System::Windows::Forms::Form
	{

	private: UsuarioSesion* datos;
	public:
		ControladorExpedicionForm(UsuarioSesion* datos)
		{
			InitializeComponent();
			this->datos = datos;

			int intid = (datos->getId());
			std::string stdnombres = datos->getNombres();
			std::string stdapellidos = datos->getApellidos();
			std::string stdemail = datos->getEmail();
			std::string stdusuario = datos->getUsuario();
			std::string stdpermiso = datos->getPermiso();

			String^ sysnombres = gcnew String(stdnombres.data());
			String^ sysapellidos = gcnew String(stdapellidos.data());
			String^ sysemail = gcnew String(stdemail.data());
			String^ sysusuario = gcnew String(stdusuario.data());
			String^ syspermiso = gcnew String(stdpermiso.data());

			lbUserInfo->Text = "///" + intid + sysnombres + sysapellidos + sysemail + sysusuario + syspermiso;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ControladorExpedicionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Reducir;
	protected:
	private: System::Windows::Forms::Button^ BuscarFiltro;
	private: System::Windows::Forms::Button^ Agregar;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::Button^ Ordenar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ControladorExpedicionForm::typeid));
			this->Reducir = (gcnew System::Windows::Forms::Button());
			this->BuscarFiltro = (gcnew System::Windows::Forms::Button());
			this->Agregar = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->Ordenar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Reducir
			// 
			this->Reducir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->Reducir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reducir->ForeColor = System::Drawing::Color::White;
			this->Reducir->Location = System::Drawing::Point(680, 238);
			this->Reducir->Name = L"Reducir";
			this->Reducir->Size = System::Drawing::Size(306, 65);
			this->Reducir->TabIndex = 65;
			this->Reducir->Text = L"Reducir Stock";
			this->Reducir->UseVisualStyleBackColor = false;
			this->Reducir->Click += gcnew System::EventHandler(this, &ControladorExpedicionForm::Reducir_Click);
			// 
			// BuscarFiltro
			// 
			this->BuscarFiltro->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->BuscarFiltro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuscarFiltro->ForeColor = System::Drawing::Color::White;
			this->BuscarFiltro->Location = System::Drawing::Point(680, 151);
			this->BuscarFiltro->Name = L"BuscarFiltro";
			this->BuscarFiltro->Size = System::Drawing::Size(306, 71);
			this->BuscarFiltro->TabIndex = 64;
			this->BuscarFiltro->Text = L"Busqueda Personalizada";
			this->BuscarFiltro->UseVisualStyleBackColor = false;
			this->BuscarFiltro->Click += gcnew System::EventHandler(this, &ControladorExpedicionForm::BuscarFiltro_Click);
			// 
			// Agregar
			// 
			this->Agregar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->Agregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Agregar->ForeColor = System::Drawing::Color::White;
			this->Agregar->Location = System::Drawing::Point(680, 316);
			this->Agregar->Name = L"Agregar";
			this->Agregar->Size = System::Drawing::Size(306, 65);
			this->Agregar->TabIndex = 63;
			this->Agregar->Text = L"Agregar Stock";
			this->Agregar->UseVisualStyleBackColor = false;
			this->Agregar->Click += gcnew System::EventHandler(this, &ControladorExpedicionForm::Agregar_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(277, 337);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 20);
			this->label10->TabIndex = 55;
			this->label10->Text = L"Permiso de:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(381, 337);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 20);
			this->label5->TabIndex = 56;
			this->label5->Text = L"label5";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(277, 279);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 20);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Usuario";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(381, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 58;
			this->label4->Text = L"label4";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(277, 221);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 20);
			this->label8->TabIndex = 59;
			this->label8->Text = L"Email: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(381, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 60;
			this->label3->Text = L"label3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(276, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 20);
			this->label7->TabIndex = 61;
			this->label7->Text = L"Apellidos:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(381, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 62;
			this->label2->Text = L"label2";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(88, 165);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 125);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 54;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(276, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 20);
			this->label6->TabIndex = 53;
			this->label6->Text = L"Nombres:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->label1->Location = System::Drawing::Point(350, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 31);
			this->label1->TabIndex = 52;
			this->label1->Text = L"Seccion de Expedicion";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(382, 114);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 20);
			this->label11->TabIndex = 51;
			this->label11->Text = L"label1";
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Location = System::Drawing::Point(75, 82);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(35, 13);
			this->lbUserInfo->TabIndex = 50;
			this->lbUserInfo->Text = L"label1";
			// 
			// Ordenar
			// 
			this->Ordenar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->Ordenar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ordenar->ForeColor = System::Drawing::Color::White;
			this->Ordenar->Location = System::Drawing::Point(680, 74);
			this->Ordenar->Name = L"Ordenar";
			this->Ordenar->Size = System::Drawing::Size(306, 71);
			this->Ordenar->TabIndex = 64;
			this->Ordenar->Text = L"Orden Personalizado";
			this->Ordenar->UseVisualStyleBackColor = false;
			this->Ordenar->Click += gcnew System::EventHandler(this, &ControladorExpedicionForm::Ordenar_Click);
			// 
			// ControladorExpedicionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(1007, 420);
			this->Controls->Add(this->Reducir);
			this->Controls->Add(this->Ordenar);
			this->Controls->Add(this->BuscarFiltro);
			this->Controls->Add(this->Agregar);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->lbUserInfo);
			this->Name = L"ControladorExpedicionForm";
			this->Text = L"ControladorExpedicionForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BuscarFiltro_Click(System::Object^ sender, System::EventArgs^ e) {
		BusquedaFiltro^ form2 = gcnew BusquedaFiltro();
		form2->Show();
	}
	private: System::Void Reducir_Click(System::Object^ sender, System::EventArgs^ e) {
		ModificarStock^ formulario = gcnew ModificarStock();
		formulario->Show();
	}
	private: System::Void Agregar_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarStock^ form3 = gcnew AgregarStock();
		form3->Show();
	}
	private: System::Void Ordenar_Click(System::Object^ sender, System::EventArgs^ e) {
		OrdenarStock^ form4 = gcnew OrdenarStock();
		form4->Show();
	}
};
}
