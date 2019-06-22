#pragma once
using namespace MySql::Data::MySqlClient;

namespace ProyectoP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NotasFinales
	/// </summary>
	public ref class NotasFinales : public System::Windows::Forms::Form
	{
	public:
		NotasFinales(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
			MySqlConnection^ conn = gcnew MySqlConnection(connection);
			MySqlCommand^ conncmd = gcnew MySqlCommand("Select nombre, apellido, maestro, promediofinal from alumnos inner join matricula_alumnos on alumnos.id = matricula_alumnos.idalumno ; ", conn);
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

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~NotasFinales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ BTNCERRAR;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->BTNCERRAR = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel1->Controls->Add(this->BTNCERRAR);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 365);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(608, 50);
			this->panel1->TabIndex = 0;
			// 
			// BTNCERRAR
			// 
			this->BTNCERRAR->FlatAppearance->BorderSize = 0;
			this->BTNCERRAR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BTNCERRAR->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNCERRAR->ForeColor = System::Drawing::SystemColors::Control;
			this->BTNCERRAR->Location = System::Drawing::Point(487, 3);
			this->BTNCERRAR->Name = L"BTNCERRAR";
			this->BTNCERRAR->Size = System::Drawing::Size(118, 44);
			this->BTNCERRAR->TabIndex = 0;
			this->BTNCERRAR->Text = L"CERRAR";
			this->BTNCERRAR->UseVisualStyleBackColor = true;
			this->BTNCERRAR->Click += gcnew System::EventHandler(this, &NotasFinales::BTNCERRAR_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(215, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"NOTAS FINALES";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(14, 50);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(582, 297);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &NotasFinales::DataGridView1_CellContentClick);
			// 
			// NotasFinales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(608, 415);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"NotasFinales";
			this->Text = L"NotasFinales";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BTNCERRAR_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
