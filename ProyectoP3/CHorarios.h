#pragma once
using namespace MySql::Data::MySqlClient;
#include "ResultadosLeccion.h"

namespace ProyectoP3 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CHorarios
	/// </summary>
	public ref class CHorarios : public System::Windows::Forms::Form
	{
		String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
		MySqlConnection^ conn = gcnew MySqlConnection(connection);

	public:
		CHorarios(void)
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
		~CHorarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(504, 277);
			this->panel1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(6, 54);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(498, 172);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CHorarios::DataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(132, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"HORARIO DE LECCIONES";
			// 
			// panel2
			// 
			this->panel2->AutoSize = true;
			this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 231);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(504, 46);
			this->panel2->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(347, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 42);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Cerrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CHorarios::Button3_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(12, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 42);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Cargar Datos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CHorarios::Button1_Click);
			// 
			// CHorarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 277);
			this->Controls->Add(this->panel1);
			this->Name = L"CHorarios";
			this->Text = L"CHorarios";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MySqlCommand^ conncmd = gcnew MySqlCommand("Select nombre, apellido, Fecha, hora, maestro from alumnos inner join matricula_alumnos on alumnos.id = matricula_alumnos.idalumno ; ", conn);
	MySqlDataReader^ datareader;

	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = conncmd;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dataGridView1->DataSource = bSource;
		sda->Update(dbdataset);




	}
	catch (...)
	{
	}
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
