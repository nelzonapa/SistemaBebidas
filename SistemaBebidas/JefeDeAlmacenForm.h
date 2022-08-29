#pragma once
#include "UsuarioVisitor.h"
#include "ProductosForm.h"
#include "ControladorExpedicionForm.h"
#include "OperarioPedidosForm.h"
#include "PersonalDeVigilanciaForm.h"
#include "PuestoVigilanciaMostrar.h"
#include "RegistroDeIngreso.h"
#include "Estadisticas.h"
#include <string>

namespace SistemaBebidas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class JefeDeAlmacenForm : public System::Windows::Forms::Form
	{
	//private: UsuarioVisitor* userJefe;
	public: UsuarioSesion* datosSesion;
	public:
		JefeDeAlmacenForm(UsuarioSesion* datosSesion)//UsuarioVisitor* userJefe
		{
			InitializeComponent();
			//ControladorRecepcion* userJefe = new ControladorRecepcion(user);
			this->datosSesion = datosSesion;
			//userJefe->recibirProductos();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~JefeDeAlmacenForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ btnVerAlmacen;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(JefeDeAlmacenForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btnVerAlmacen = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(317, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(24, 103);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 125);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(317, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(317, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(317, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &JefeDeAlmacenForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(317, 275);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 20);
			this->label5->TabIndex = 3;
			this->label5->Text = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &JefeDeAlmacenForm::label4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(212, 52);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Nombres:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(212, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 20);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Apellidos:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(213, 159);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 20);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Email: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(213, 217);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 20);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Usuario";
			this->label9->Click += gcnew System::EventHandler(this, &JefeDeAlmacenForm::label4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(213, 275);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 20);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Permiso de:";
			this->label10->Click += gcnew System::EventHandler(this, &JefeDeAlmacenForm::label4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(577, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(395, 53);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Seccion de Expedicion";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &JefeDeAlmacenForm::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(577, 190);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(395, 56);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Seccion de Seguridad y Vigilancia";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &JefeDeAlmacenForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(577, 263);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(184, 85);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Usuarios Disponibles";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &JefeDeAlmacenForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(786, 263);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(186, 85);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Ver Estadiscticas";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &JefeDeAlmacenForm::button6_Click);
			// 
			// btnVerAlmacen
			// 
			this->btnVerAlmacen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->btnVerAlmacen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerAlmacen->ForeColor = System::Drawing::Color::White;
			this->btnVerAlmacen->Location = System::Drawing::Point(577, 52);
			this->btnVerAlmacen->Name = L"btnVerAlmacen";
			this->btnVerAlmacen->Size = System::Drawing::Size(395, 53);
			this->btnVerAlmacen->TabIndex = 5;
			this->btnVerAlmacen->Text = L"Ver Almacen";
			this->btnVerAlmacen->UseVisualStyleBackColor = false;
			this->btnVerAlmacen->Click += gcnew System::EventHandler(this, &JefeDeAlmacenForm::btnVerAlmacen_Click);
			// 
			// JefeDeAlmacenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->ClientSize = System::Drawing::Size(1066, 406);
			this->Controls->Add(this->btnVerAlmacen);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
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
			this->Name = L"JefeDeAlmacenForm";
			this->Text = L"JefeDeAlmacenForm";
			this->Load += gcnew System::EventHandler(this, &JefeDeAlmacenForm::JefeDeAlmacenForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void JefeDeAlmacenForm_Load(System::Object^ sender, System::EventArgs^ e) {

		int intid = (datosSesion->getId());
		std::string stdnombres = datosSesion->getNombres();
		std::string stdapellidos = datosSesion->getApellidos();
		std::string stdemail = datosSesion->getEmail();
		std::string stdusuario = datosSesion->getUsuario();
		std::string stdpermiso = datosSesion->getPermiso();

		String^ sysnombres = gcnew String(stdnombres.data());
		String^ sysapellidos = gcnew String(stdapellidos.data());
		String^ sysemail = gcnew String(stdemail.data());
		String^ sysusuario = gcnew String(stdusuario.data());
		String^ syspermiso = gcnew String(stdpermiso.data());

		//label1->Text = "*** => " + intid + sysnombres + sysapellidos + sysemail + sysusuario + syspermiso;
		label1->Text = sysnombres;
		label2->Text = sysapellidos;
		label3->Text = sysemail;
		label4->Text = sysusuario;
		label5->Text = syspermiso;
	}
	private: System::Void pictureBox2_MouseHover(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Usuario* usertemp;
		SistemaBebidas::ControladorExpedicionForm controladorExpedicionSeccion(this->datosSesion);
		controladorExpedicionSeccion.ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		/*SistemaBebidas::PersonalDeVigilanciaForm personalVigilancia(this->userJefe);
		personalVigilancia.ShowDialog();*/
		//while (true) {
			SistemaBebidas::PersonalDeVigilanciaForm PersonalVigilanciaSeccion(this->datosSesion);
			PersonalVigilanciaSeccion.ShowDialog();
			if (PersonalVigilanciaSeccion.switchPuestoVigilancia) {
				SistemaBebidas::PuestoVigilanciaMostrar mostrar_usuarios;
				mostrar_usuarios.ShowDialog();
			}
			if (PersonalVigilanciaSeccion.switchPuestoVigilancia2) {
				SistemaBebidas::RegistroDeIngreso mostrar_registro;
				mostrar_registro.ShowDialog();
				//break;
			}
		//}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btnVerAlmacen_Click(System::Object^ sender, System::EventArgs^ e) {
		SistemaBebidas::ProductosForm productos_form;
		productos_form.ShowDialog();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		SistemaBebidas::Estadisticas estadisticasForm;
		estadisticasForm.ShowDialog();
	}
};
}
