#pragma once
#include <memory>
#include "Producto.h"
#include "ArrayDinamicoRef.h"
#include "FunctorProductos.h"
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

	public ref class ProductosForm : public System::Windows::Forms::Form
	{
	public:
		ProductosForm()//std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos
		{
			InitializeComponent();
			//System::Void ProductosForm_Load(System::Object ^ sender, System::EventArgs ^ e);
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ tablaProductos;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
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
			this->tablaProductos = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaProductos))->BeginInit();
			this->SuspendLayout();
			// 
			// tablaProductos
			// 
			this->tablaProductos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tablaProductos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
			});
			this->tablaProductos->Location = System::Drawing::Point(22, 125);
			this->tablaProductos->Name = L"tablaProductos";
			this->tablaProductos->Size = System::Drawing::Size(740, 322);
			this->tablaProductos->TabIndex = 58;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Id";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Marca";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Tipo";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Capacidad";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Precio";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Stock";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(346, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(461, 42);
			this->label1->TabIndex = 59;
			this->label1->Text = L"BUSQUEDA POR FILTRO";
			// 
			// ProductosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Coral;
			this->ClientSize = System::Drawing::Size(1180, 478);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tablaProductos);
			this->Name = L"ProductosForm";
			this->Text = L"ProductosForm";
			this->Load += gcnew System::EventHandler(this, &ProductosForm::ProductosForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaProductos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ProductosForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FunctorProductos obtenerProductos;
		std::shared_ptr<ArrayDinamicoRef<Producto>> listaProductos = obtenerProductos();
		
		/*String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
		SqlConnection sqlConn(connString); //se crea el objeto conexion
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM productos";
		SqlCommand command(sqlQuery, % sqlConn);
		//command.Parameters->AddWithValue("@nombre", nombre);
		SqlDataReader^ fila = command.ExecuteReader();
		*/

		tablaProductos->Rows->Clear();
		int id = 0;
		String^ marca = "";
		String^ nombre = "";
		String^ tipo = "";
		Double capacidad = 0;
		Double precio = 0;
		int stock = 0;

		int n = 0;

		//listaProductos.get()->getInPosicion(0)->getDato().precio;

		for (int i = 0; i < listaProductos->getSize(); i++) {
			int id = listaProductos.get()->getInPosicion(i)->getDato().id;
			String^ marca = gcnew String((listaProductos.get()->getInPosicion(i)->getDato().marca).data());
			String^ nombre = gcnew String((listaProductos.get()->getInPosicion(i)->getDato().nombre).data());
			String^ tipo = gcnew String((listaProductos.get()->getInPosicion(i)->getDato().tipo).data());
			Double capacidad = listaProductos.get()->getInPosicion(i)->getDato().capacidad;
			Double precio = listaProductos.get()->getInPosicion(i)->getDato().precio;
			int stock = listaProductos.get()->getInPosicion(i)->getDato().stock;

			tablaProductos->Rows->Add();

			tablaProductos->Rows[n]->Cells[0]->Value = id;
			tablaProductos->Rows[n]->Cells[1]->Value = marca;
			tablaProductos->Rows[n]->Cells[2]->Value = nombre;
			tablaProductos->Rows[n]->Cells[3]->Value = tipo;
			tablaProductos->Rows[n]->Cells[4]->Value = capacidad;
			tablaProductos->Rows[n]->Cells[5]->Value = precio;
			tablaProductos->Rows[n]->Cells[6]->Value = stock;

			n++;
		}

		/*
		while (fila->Read()) {
			int id = fila->GetInt32(0);
			String^ marca = fila->GetString(1);
			String^ nombre = fila->GetString(2);
			String^ tipo = fila->GetString(3);
			Double capacidad = fila->GetDouble(4);
			Double precio = fila->GetDouble(5);
			int stock = fila->GetInt32(6);

			int n = tablaProductos->Rows->Add();

			tablaProductos->Rows[n]->Cells[0]->Value = id;
			tablaProductos->Rows[n]->Cells[1]->Value = marca;
			tablaProductos->Rows[n]->Cells[2]->Value = nombre;
			tablaProductos->Rows[n]->Cells[3]->Value = tipo;
			tablaProductos->Rows[n]->Cells[4]->Value = capacidad;
			tablaProductos->Rows[n]->Cells[5]->Value = precio;
			tablaProductos->Rows[n]->Cells[6]->Value = stock;
		}
		*/

		//sqlConn.Close();
	}
};
}
