#pragma once
#include <msclr\marshal_cppstd.h>
#include "PuestoVigilanciaMostrar.h"
namespace SistemaBebidas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace msclr::interop;

	/// <summary>
	/// Resumen de PuestoVigilanciaMostrar
	/// </summary>
	public ref class PuestoVigilanciaMostrar : public System::Windows::Forms::Form
	{
	public:
		PuestoVigilanciaMostrar(void)
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
		~PuestoVigilanciaMostrar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegresar;
	protected:

	private: System::Windows::Forms::Button^ btnBuscar;








	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ComboBox^ filtro;
	private: System::Windows::Forms::TextBox^ Buscador;
	private: System::Windows::Forms::DataGridView^ data_grid;
	private: System::Windows::Forms::DataGridView^ data_busqueda;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NOMBRE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ APELLIDOS;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PERMISO;






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
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->filtro = (gcnew System::Windows::Forms::ComboBox());
			this->Buscador = (gcnew System::Windows::Forms::TextBox());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->data_busqueda = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NOMBRE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->APELLIDOS = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PERMISO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_busqueda))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRegresar
			// 
			this->btnRegresar->Location = System::Drawing::Point(1034, 596);
			this->btnRegresar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(141, 34);
			this->btnRegresar->TabIndex = 30;
			this->btnRegresar->Text = L"REGRESAR";
			this->btnRegresar->UseVisualStyleBackColor = true;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &PuestoVigilanciaMostrar::btnRegresar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::White;
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10, System::Drawing::FontStyle::Bold));
			this->btnBuscar->Location = System::Drawing::Point(988, 144);
			this->btnBuscar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(196, 37);
			this->btnBuscar->TabIndex = 28;
			this->btnBuscar->Text = L"BUSCAR";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &PuestoVigilanciaMostrar::btnBuscar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(380, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(412, 43);
			this->label1->TabIndex = 19;
			this->label1->Text = L"LISTA DE USUARIOS";
			// 
			// filtro
			// 
			this->filtro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->filtro->FormattingEnabled = true;
			this->filtro->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"id", L"nombres", L"apellidos", L"email", L"usuario",
					L"password", L"permiso"
			});
			this->filtro->Location = System::Drawing::Point(649, 86);
			this->filtro->Margin = System::Windows::Forms::Padding(4);
			this->filtro->Name = L"filtro";
			this->filtro->Size = System::Drawing::Size(202, 34);
			this->filtro->TabIndex = 50;
			// 
			// Buscador
			// 
			this->Buscador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->Buscador->Location = System::Drawing::Point(902, 88);
			this->Buscador->Margin = System::Windows::Forms::Padding(4);
			this->Buscador->Name = L"Buscador";
			this->Buscador->Size = System::Drawing::Size(282, 32);
			this->Buscador->TabIndex = 49;
			// 
			// data_grid
			// 
			this->data_grid->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid->Location = System::Drawing::Point(12, 89);
			this->data_grid->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->data_grid->Name = L"data_grid";
			this->data_grid->RowHeadersWidth = 51;
			this->data_grid->RowTemplate->Height = 24;
			this->data_grid->Size = System::Drawing::Size(596, 492);
			this->data_grid->TabIndex = 18;
			// 
			// data_busqueda
			// 
			this->data_busqueda->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->data_busqueda->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_busqueda->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ID, this->NOMBRE,
					this->APELLIDOS, this->PERMISO
			});
			this->data_busqueda->Location = System::Drawing::Point(630, 204);
			this->data_busqueda->Name = L"data_busqueda";
			this->data_busqueda->RowHeadersWidth = 51;
			this->data_busqueda->RowTemplate->Height = 24;
			this->data_busqueda->Size = System::Drawing::Size(554, 377);
			this->data_busqueda->TabIndex = 51;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->Width = 125;
			// 
			// NOMBRE
			// 
			this->NOMBRE->HeaderText = L"NOMBRE";
			this->NOMBRE->MinimumWidth = 6;
			this->NOMBRE->Name = L"NOMBRE";
			this->NOMBRE->Width = 125;
			// 
			// APELLIDOS
			// 
			this->APELLIDOS->HeaderText = L"APELLIDOS";
			this->APELLIDOS->MinimumWidth = 6;
			this->APELLIDOS->Name = L"APELLIDOS";
			this->APELLIDOS->Width = 125;
			// 
			// PERMISO
			// 
			this->PERMISO->HeaderText = L"PERMISO";
			this->PERMISO->MinimumWidth = 6;
			this->PERMISO->Name = L"PERMISO";
			this->PERMISO->Width = 125;
			// 
			// PuestoVigilanciaMostrar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1196, 641);
			this->Controls->Add(this->data_busqueda);
			this->Controls->Add(this->filtro);
			this->Controls->Add(this->Buscador);
			this->Controls->Add(this->btnRegresar);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->data_grid);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PuestoVigilanciaMostrar";
			this->Text = L"PuestoVigilanciaMostrar";
			this->Load += gcnew System::EventHandler(this, &PuestoVigilanciaMostrar::PuestoVigilanciaMostrar_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_busqueda))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PuestoVigilanciaMostrar_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}


	private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   //original
	public: void Consulta() {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
		SqlConnection sqlConn(connString); //se crea el objeto conexion
		sqlConn.Open();
		String^ sqlQuery = "SELECT id , nombres , apellidos , permiso  FROM usuarios";
		SqlCommand^ cursor = gcnew SqlCommand(sqlQuery, % sqlConn);
		SqlDataAdapter^ data = gcnew SqlDataAdapter(cursor);

		DataTable^ tabla = gcnew DataTable();
		data->Fill(tabla);
		this->data_grid->DataSource = tabla;
		sqlConn.Close();
	}





	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->Buscador->Text;
		String^ filtro = this->filtro->Text;

		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
		SqlConnection sqlConn(connString); //se crea el objeto conexion
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM usuarios WHERE " + filtro + "=@nombre";
		SqlCommand command(sqlQuery, % sqlConn);

		command.Parameters->AddWithValue("@nombre", nombre);
		//command.Parameters->AddWithValue("@filtro", filtro);
		SqlDataReader^ fila = command.ExecuteReader();
		data_busqueda->Rows->Clear();



		while (fila->Read()) {
			int id = fila->GetInt32(0);
			String^ nombres = fila->GetString(1);
			String^ apellidos = fila->GetString(2);
			String^ permiso = fila->GetString(6);

			int n = data_busqueda->Rows->Add();
			data_busqueda->Rows[n]->Cells[0]->Value = id;
			data_busqueda->Rows[n]->Cells[1]->Value = nombres;
			data_busqueda->Rows[n]->Cells[2]->Value = apellidos;
			data_busqueda->Rows[n]->Cells[3]->Value = permiso;
		}

		sqlConn.Close();

		Buscador->Text = "";
	}
	};
}
