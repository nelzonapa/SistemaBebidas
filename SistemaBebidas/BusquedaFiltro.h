#pragma once
#include "BusquedaFiltro.h"
#include "Producto.h"
#include "ArrayDinamicoRef.h"
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

	/// <summary>
	/// Resumen de BusquedaFiltro
	/// </summary>
	public ref class BusquedaFiltro : public System::Windows::Forms::Form
	{
	public:
		BusquedaFiltro(void)
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
		~BusquedaFiltro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ cuadro;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Marca;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Capacidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ filtro;
	private: System::Windows::Forms::Button^ Buscar;
	private: System::Windows::Forms::TextBox^ Buscador;
	private: System::Windows::Forms::Label^ label14;










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
			this->cuadro = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Marca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Capacidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->filtro = (gcnew System::Windows::Forms::ComboBox());
			this->Buscar = (gcnew System::Windows::Forms::Button());
			this->Buscador = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cuadro))->BeginInit();
			this->SuspendLayout();
			// 
			// cuadro
			// 
			this->cuadro->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->cuadro->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Id, this->Marca,
					this->Nombre, this->Tipo, this->Capacidad, this->Precio, this->Stock
			});
			this->cuadro->Location = System::Drawing::Point(22, 117);
			this->cuadro->Name = L"cuadro";
			this->cuadro->Size = System::Drawing::Size(740, 240);
			this->cuadro->TabIndex = 56;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			// 
			// Marca
			// 
			this->Marca->HeaderText = L"Marca";
			this->Marca->Name = L"Marca";
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// Tipo
			// 
			this->Tipo->HeaderText = L"Tipo";
			this->Tipo->Name = L"Tipo";
			// 
			// Capacidad
			// 
			this->Capacidad->HeaderText = L"Capacidad";
			this->Capacidad->Name = L"Capacidad";
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->Name = L"Precio";
			// 
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(161, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(461, 42);
			this->label1->TabIndex = 55;
			this->label1->Text = L"BUSQUEDA POR FILTRO";
			// 
			// filtro
			// 
			this->filtro->FormattingEnabled = true;
			this->filtro->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"id", L"marca", L"nombre", L"tipo", L"capacidad",
					L"precio", L"stock"
			});
			this->filtro->Location = System::Drawing::Point(22, 72);
			this->filtro->Name = L"filtro";
			this->filtro->Size = System::Drawing::Size(121, 21);
			this->filtro->TabIndex = 54;
			// 
			// Buscar
			// 
			this->Buscar->Location = System::Drawing::Point(613, 69);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(131, 30);
			this->Buscar->TabIndex = 53;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			this->Buscar->Click += gcnew System::EventHandler(this, &BusquedaFiltro::Buscar_Click);
			// 
			// Buscador
			// 
			this->Buscador->Location = System::Drawing::Point(279, 75);
			this->Buscador->Name = L"Buscador";
			this->Buscador->Size = System::Drawing::Size(262, 20);
			this->Buscador->TabIndex = 52;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(195, 73);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 20);
			this->label14->TabIndex = 51;
			this->label14->Text = L"Ingrese:";
			// 
			// BusquedaFiltro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(784, 378);
			this->Controls->Add(this->cuadro);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->filtro);
			this->Controls->Add(this->Buscar);
			this->Controls->Add(this->Buscador);
			this->Controls->Add(this->label14);
			this->Name = L"BusquedaFiltro";
			this->Text = L"BusquedaFiltro";
			this->Load += gcnew System::EventHandler(this, &BusquedaFiltro::BusquedaFiltro_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cuadro))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = this->Buscador->Text;
	String^ filtro = this->filtro->Text;

	String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
	SqlConnection sqlConn(connString); //se crea el objeto conexion
	sqlConn.Open();
	String^ sqlQuery = "SELECT * FROM productos WHERE " + filtro + "=@nombre";
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@nombre", nombre);
	//command.Parameters->AddWithValue("@filtro", filtro);
	SqlDataReader^ fila = command.ExecuteReader();

	cuadro->Rows->Clear();

	while (fila->Read()) {
		int id = fila->GetInt32(0);
		String^ marca = fila->GetString(1);
		String^ nombre = fila->GetString(2);
		String^ tipo = fila->GetString(3);
		Double capacidad = fila->GetDouble(4);
		Double precio = fila->GetDouble(5);
		int stock = fila->GetInt32(6);

		int n = cuadro->Rows->Add();
		cuadro->Rows[n]->Cells[0]->Value = id;
		cuadro->Rows[n]->Cells[1]->Value = marca;
		cuadro->Rows[n]->Cells[2]->Value = nombre;
		cuadro->Rows[n]->Cells[3]->Value = tipo;
		cuadro->Rows[n]->Cells[4]->Value = capacidad;
		cuadro->Rows[n]->Cells[5]->Value = precio;
		cuadro->Rows[n]->Cells[6]->Value = stock;
	}

	sqlConn.Close();

	Buscador->Text = "";
}
private: System::Void BusquedaFiltro_Load(System::Object^ sender, System::EventArgs^ e) {


}
};
}
