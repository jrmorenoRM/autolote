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
	/// Summary for VehiculosEditar
	/// </summary>
	public ref class VehiculosEditar : public System::Windows::Forms::Form
	{
	public:
		VehiculosEditar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
			MySqlConnection^ conn = gcnew MySqlConnection(connection);
			MySqlCommand^ conncmd = gcnew MySqlCommand("Select marca, modelo, idmodelos, descripcion from marca inner join modelos on marca.idmarca = modelos.idmarca; ", conn);
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



				{


				}

			}
			catch (...)
			{
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VehiculosEditar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtdescripcion;
	private: System::Windows::Forms::TextBox^ txtmodelo;
	private: System::Windows::Forms::TextBox^ txtid;

	private: System::Windows::Forms::Button^ btneditar;
	private: System::Windows::Forms::Button^ btncerrar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtdescripcion = (gcnew System::Windows::Forms::TextBox());
			this->txtmodelo = (gcnew System::Windows::Forms::TextBox());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->btneditar = (gcnew System::Windows::Forms::Button());
			this->btncerrar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->txtdescripcion);
			this->panel1->Controls->Add(this->txtmodelo);
			this->panel1->Controls->Add(this->txtid);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(416, 223);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &VehiculosEditar::Panel1_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(314, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"ID Marca";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(314, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Descripcion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(314, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Modelo";
			// 
			// txtdescripcion
			// 
			this->txtdescripcion->Location = System::Drawing::Point(314, 143);
			this->txtdescripcion->Name = L"txtdescripcion";
			this->txtdescripcion->Size = System::Drawing::Size(95, 20);
			this->txtdescripcion->TabIndex = 7;
			// 
			// txtmodelo
			// 
			this->txtmodelo->Location = System::Drawing::Point(317, 101);
			this->txtmodelo->Name = L"txtmodelo";
			this->txtmodelo->Size = System::Drawing::Size(95, 20);
			this->txtmodelo->TabIndex = 6;
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(317, 59);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(95, 20);
			this->txtid->TabIndex = 5;
			// 
			// btneditar
			// 
			this->btneditar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btneditar->FlatAppearance->BorderSize = 0;
			this->btneditar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btneditar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btneditar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btneditar->Location = System::Drawing::Point(176, 8);
			this->btneditar->Name = L"btneditar";
			this->btneditar->Size = System::Drawing::Size(85, 33);
			this->btneditar->TabIndex = 4;
			this->btneditar->Text = L"Editar";
			this->btneditar->UseVisualStyleBackColor = true;
			this->btneditar->Click += gcnew System::EventHandler(this, &VehiculosEditar::Btneditar_Click);
			// 
			// btncerrar
			// 
			this->btncerrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncerrar->FlatAppearance->BorderSize = 0;
			this->btncerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncerrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btncerrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btncerrar->Location = System::Drawing::Point(316, 8);
			this->btncerrar->Name = L"btncerrar";
			this->btncerrar->Size = System::Drawing::Size(89, 33);
			this->btncerrar->TabIndex = 3;
			this->btncerrar->Text = L"Atras";
			this->btncerrar->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 46);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(305, 126);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VehiculosEditar::DataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(95, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Listado De Vehiculos";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->btncerrar);
			this->panel2->Controls->Add(this->btneditar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 181);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(417, 48);
			this->panel2->TabIndex = 3;
			// 
			// VehiculosEditar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(417, 229);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"VehiculosEditar";
			this->Text = L"VehiculosEditar";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0)
		{
			DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];
			txtid->Text = row->Cells["idmodelos"]->Value->ToString();
			txtmodelo->Text = row->Cells["modelo"]->Value->ToString();
			txtdescripcion->Text = row->Cells["descripcion"]->Value->ToString();



		}
	}
private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Btneditar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
	MySqlConnection^ conn = gcnew MySqlConnection(connection);
	MySqlCommand^ conncmd = gcnew MySqlCommand("Update modelos set modelo='" +this->txtmodelo->Text+"', descripcion='" +this->txtdescripcion->Text+"' Where idmodelos='" +this->txtid->Text + "'; ", conn);
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
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
};
}
