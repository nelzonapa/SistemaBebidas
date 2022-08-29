#pragma once
#include "OrdenarStock.h"
#include "Producto.h"
#include "ArrayDinamicoRef.h"
#include "OrdenFacade.h"
#include "FunctorProductos.h"
#include <msclr\marshal_cppstd.h>
#include <memory>
#include <vector>

namespace SistemaBebidas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OrdenarStock
	/// </summary>
	public ref class OrdenarStock : public System::Windows::Forms::Form
	{
	public:
		OrdenarStock(void)
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
		~OrdenarStock()
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
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ Orden;



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
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Orden = (gcnew System::Windows::Forms::ComboBox());
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
			this->cuadro->Location = System::Drawing::Point(62, 207);
			this->cuadro->Name = L"cuadro";
			this->cuadro->Size = System::Drawing::Size(743, 240);
			this->cuadro->TabIndex = 64;
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
			this->label1->Location = System::Drawing::Point(211, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(435, 42);
			this->label1->TabIndex = 63;
			this->label1->Text = L"ORDENAR POR STOCK";
			// 
			// filtro
			// 
			this->filtro->FormattingEnabled = true;
			this->filtro->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"id", L"marca", L"nombre", L"tipo", L"capacidad",
					L"precio", L"stock"
			});
			this->filtro->Location = System::Drawing::Point(333, 108);
			this->filtro->Name = L"filtro";
			this->filtro->Size = System::Drawing::Size(184, 21);
			this->filtro->TabIndex = 62;
			// 
			// Buscar
			// 
			this->Buscar->Location = System::Drawing::Point(626, 126);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(131, 30);
			this->Buscar->TabIndex = 61;
			this->Buscar->Text = L"Ordenar";
			this->Buscar->UseVisualStyleBackColor = true;
			this->Buscar->Click += gcnew System::EventHandler(this, &OrdenarStock::Buscar_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(124, 109);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(161, 20);
			this->label14->TabIndex = 59;
			this->label14->Text = L"Seleccione categoria:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(124, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 20);
			this->label2->TabIndex = 59;
			this->label2->Text = L"Seleccione tipo de orden:";
			// 
			// Orden
			// 
			this->Orden->FormattingEnabled = true;
			this->Orden->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ascendente", L"descendente" });
			this->Orden->Location = System::Drawing::Point(333, 152);
			this->Orden->Name = L"Orden";
			this->Orden->Size = System::Drawing::Size(184, 21);
			this->Orden->TabIndex = 62;
			// 
			// OrdenarStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(894, 477);
			this->Controls->Add(this->cuadro);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Orden);
			this->Controls->Add(this->filtro);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Buscar);
			this->Controls->Add(this->label14);
			this->Name = L"OrdenarStock";
			this->Text = L"OrdenarStock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cuadro))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filtro = this->filtro->Text;
		String^ Orden = this->Orden->Text;

		FunctorProductos fun;
		std::shared_ptr<ArrayDinamicoRef<Producto>> lista = fun();

		OrdenFacade orden;
		std::vector<Producto>ordenado = orden.ordenar(marshal_as<std::string>(filtro), marshal_as<std::string>(Orden), lista);

		cuadro->Rows->Clear();

		for (Producto pro : ordenado) {
			int id = pro.id;
			String^ marca = gcnew String(pro.marca.data());
			String^ nombre = gcnew String(pro.nombre.data());
			String^ tipo = gcnew String(pro.tipo.data());
			Double capacidad = pro.capacidad;
			Double precio = pro.precio;
			int stock = pro.stock;

			int n = cuadro->Rows->Add();
			cuadro->Rows[n]->Cells[0]->Value = id;
			cuadro->Rows[n]->Cells[1]->Value = marca;
			cuadro->Rows[n]->Cells[2]->Value = nombre;
			cuadro->Rows[n]->Cells[3]->Value = tipo;
			cuadro->Rows[n]->Cells[4]->Value = capacidad;
			cuadro->Rows[n]->Cells[5]->Value = precio;
			cuadro->Rows[n]->Cells[6]->Value = stock;
		}

	}
};
}
