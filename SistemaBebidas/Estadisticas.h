#pragma once
#include "UsuarioVisitor.h"

namespace SistemaBebidas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Text::RegularExpressions;
	using namespace std;


	//PARA LA BASE DE DATOS
	using namespace System::Data::SqlClient;

	//NEW
	using namespace System::IO;

	/// <summary>
	/// Resumen de Estadisticas
	/// </summary>
	public ref class Estadisticas : public System::Windows::Forms::Form
	{
	public:
		Estadisticas()
		{
			InitializeComponent();
			this->label_titulo->Text = "DATOS ESTADISTICOS\nALMACEN BEBIDAS";
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Estadisticas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPrecio;
	protected:
	private: System::Windows::Forms::Button^ btnMarcas;
	private: System::Windows::Forms::Button^ button_cervezas;
	private: System::Windows::Forms::Label^ label_titulo;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_estadistico;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartPrecios;


	protected:




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->btnPrecio = (gcnew System::Windows::Forms::Button());
			this->btnMarcas = (gcnew System::Windows::Forms::Button());
			this->button_cervezas = (gcnew System::Windows::Forms::Button());
			this->label_titulo = (gcnew System::Windows::Forms::Label());
			this->chart_estadistico = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart_2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartPrecios = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_estadistico))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPrecios))->BeginInit();
			this->SuspendLayout();
			// 
			// btnPrecio
			// 
			this->btnPrecio->Location = System::Drawing::Point(862, 220);
			this->btnPrecio->Name = L"btnPrecio";
			this->btnPrecio->Size = System::Drawing::Size(148, 35);
			this->btnPrecio->TabIndex = 8;
			this->btnPrecio->Text = L"Ver precios";
			this->btnPrecio->UseVisualStyleBackColor = true;
			this->btnPrecio->Click += gcnew System::EventHandler(this, &Estadisticas::btnPrecio_Click);
			// 
			// btnMarcas
			// 
			this->btnMarcas->Location = System::Drawing::Point(457, 69);
			this->btnMarcas->Name = L"btnMarcas";
			this->btnMarcas->Size = System::Drawing::Size(148, 35);
			this->btnMarcas->TabIndex = 7;
			this->btnMarcas->Text = L"Ver cantidad marcas";
			this->btnMarcas->UseVisualStyleBackColor = true;
			this->btnMarcas->Click += gcnew System::EventHandler(this, &Estadisticas::btnMarcas_Click);
			// 
			// button_cervezas
			// 
			this->button_cervezas->Location = System::Drawing::Point(259, 220);
			this->button_cervezas->Name = L"button_cervezas";
			this->button_cervezas->Size = System::Drawing::Size(148, 35);
			this->button_cervezas->TabIndex = 6;
			this->button_cervezas->Text = L"Ver bebidas cantidad";
			this->button_cervezas->UseVisualStyleBackColor = true;
			this->button_cervezas->Click += gcnew System::EventHandler(this, &Estadisticas::button_cervezas_Click);
			// 
			// label_titulo
			// 
			this->label_titulo->AutoSize = true;
			this->label_titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_titulo->Location = System::Drawing::Point(70, 75);
			this->label_titulo->Name = L"label_titulo";
			this->label_titulo->Size = System::Drawing::Size(69, 33);
			this->label_titulo->TabIndex = 5;
			this->label_titulo->Text = L"......";
			// 
			// chart_estadistico
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart_estadistico->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart_estadistico->Legends->Add(legend4);
			this->chart_estadistico->Location = System::Drawing::Point(30, 276);
			this->chart_estadistico->Name = L"chart_estadistico";
			this->chart_estadistico->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Doughnut;
			series4->IsValueShownAsLabel = true;
			series4->Legend = L"Legend1";
			series4->Name = L"Bebidas";
			this->chart_estadistico->Series->Add(series4);
			this->chart_estadistico->Size = System::Drawing::Size(564, 392);
			this->chart_estadistico->TabIndex = 9;
			this->chart_estadistico->Text = L"chart1";
			// 
			// chart_2
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart_2->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart_2->Legends->Add(legend5);
			this->chart_2->Location = System::Drawing::Point(686, 9);
			this->chart_2->Name = L"chart_2";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series5->IsValueShownAsLabel = true;
			series5->Legend = L"Legend1";
			series5->Name = L"Marcas";
			this->chart_2->Series->Add(series5);
			this->chart_2->Size = System::Drawing::Size(490, 188);
			this->chart_2->TabIndex = 10;
			this->chart_2->Text = L"chart1";
			// 
			// chartPrecios
			// 
			chartArea6->Name = L"ChartArea1";
			this->chartPrecios->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chartPrecios->Legends->Add(legend6);
			this->chartPrecios->Location = System::Drawing::Point(680, 276);
			this->chartPrecios->Name = L"chartPrecios";
			this->chartPrecios->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series6->IsValueShownAsLabel = true;
			series6->IsXValueIndexed = true;
			series6->Legend = L"Legend1";
			series6->Name = L"Precios";
			this->chartPrecios->Series->Add(series6);
			this->chartPrecios->Size = System::Drawing::Size(577, 392);
			this->chartPrecios->TabIndex = 11;
			this->chartPrecios->Text = L"chart1";
			// 
			// Estadisticas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1299, 694);
			this->Controls->Add(this->chartPrecios);
			this->Controls->Add(this->chart_2);
			this->Controls->Add(this->chart_estadistico);
			this->Controls->Add(this->btnPrecio);
			this->Controls->Add(this->btnMarcas);
			this->Controls->Add(this->button_cervezas);
			this->Controls->Add(this->label_titulo);
			this->Name = L"Estadisticas";
			this->Text = L"Estadisticas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_estadistico))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPrecios))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_cervezas_Click(System::Object^ sender, System::EventArgs^ e) {
		//Conexion con la base de datos
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT nombre,stock FROM productos";//Comando

		SqlCommand command(sqlQuery, % sqlConn);//hasta ahí prepara el envío


		//Recibimos los datos necesarios
		SqlDataReader^ reader = command.ExecuteReader(); //array dinamico que recibe los datos de la consulta
		//reader->Read();//depende las filas leidas
		while (reader->Read()) {
			//reader->Read();//depende las filas leidas
			/*Smart Pointers*/
			this->chart_estadistico->Series["Bebidas"]->Points->AddXY(reader->GetString(0), reader->GetInt32(1));
			//this->chart_estadistico->Series["Bebidas"]->Points->AddY(reader->GetString(0));
		}

		sqlConn.Close();//Cerramos la conexion con SQLserver
	}
	private: System::Void btnMarcas_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
			Necesitamos obtener el conteo en sí de la cantidad de marcas
			*/
			//Conexion con la base de datos
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		//Preparación de comandos
		String^ sqlQuery = "SELECT productos.marca,COUNT(marca) as 'Backus' FROM productos WHERE marca='Backus' GROUP BY marca";//Comando
		SqlCommand command(sqlQuery, % sqlConn);//hasta ahí prepara el envío

		String^ sqlQuery2 = "SELECT productos.marca,COUNT(marca) as 'Coca Cola' FROM productos WHERE marca='Coca Cola' GROUP BY marca";//Comando
		SqlCommand command2(sqlQuery2, % sqlConn);//hasta ahí prepara el envío


		//Recibimos los datos necesarios
		SqlDataReader^ reader_1 = command.ExecuteReader(); //array dinamico que recibe los datos de la consulta

		while (reader_1->Read()) {
			//reader_1->Read();//depende las filas leidas
			this->chart_2->Series["Marcas"]->Points->AddXY(reader_1->GetString(0), reader_1->GetInt32(1));
		}
		reader_1->Close();
		SqlDataReader^ reader_2 = command2.ExecuteReader(); //array dinamico que recibe los datos de la consulta
		//reader->Read();//depende las filas leidas
		while (reader_2->Read()) {
			//reader_2->Read();//depende las filas leidas
			this->chart_2->Series["Marcas"]->Points->AddXY(reader_2->GetString(0), reader_2->GetInt32(1));
		}

		sqlConn.Close();//Cerramos la conexion con SQLserver
	}
	private: System::Void btnPrecio_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
			Obtendremos los precios
			*/
			//Conexion con la base de datos
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=sistemabebidas;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		//Preparación de comandos
		String^ sqlQuery = "SELECT productos.nombre, productos.precio FROM productos";//Comando
		SqlCommand command(sqlQuery, % sqlConn);//hasta ahí prepara el envío


		//Recibimos los datos necesarios
		SqlDataReader^ reader = command.ExecuteReader(); //array dinamico que recibe los datos de la consulta

		while (reader->Read()) {
			//reader_1->Read();//depende las filas leidas
			this->chartPrecios->Series["Precios"]->Points->AddXY(reader->GetString(0), reader->GetDouble(1));
		}

		sqlConn.Close();//Cerramos la conexion con SQLserver
	}

};
}
