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
	/// Resumen de EliminarUsuarios
	/// </summary>
	public ref class EliminarUsuarios : public System::Windows::Forms::Form
	{
		String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
		MySqlConnection^ conn = gcnew MySqlConnection(connection);
	public:
		EliminarUsuarios(void)
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
		~EliminarUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ bntcargar;
	private: System::Windows::Forms::Button^ btneliminar;
	private: System::Windows::Forms::Button^ btncerrar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ txtusuario;
	private: System::Windows::Forms::TextBox^ txtnombre;
	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EliminarUsuarios::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bntcargar = (gcnew System::Windows::Forms::Button());
			this->btneliminar = (gcnew System::Windows::Forms::Button());
			this->btncerrar = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->txtusuario);
			this->panel1->Controls->Add(this->txtnombre);
			this->panel1->Controls->Add(this->txtid);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(3, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(482, 203);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &EliminarUsuarios::Panel1_Paint);
			// 
			// txtusuario
			// 
			this->txtusuario->Location = System::Drawing::Point(65, 122);
			this->txtusuario->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(135, 21);
			this->txtusuario->TabIndex = 23;
			this->txtusuario->TextChanged += gcnew System::EventHandler(this, &EliminarUsuarios::Txtusuario_TextChanged);
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(65, 89);
			this->txtnombre->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(135, 21);
			this->txtnombre->TabIndex = 22;
			this->txtnombre->TextChanged += gcnew System::EventHandler(this, &EliminarUsuarios::Txtnombre_TextChanged);
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(65, 60);
			this->txtid->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(135, 21);
			this->txtid->TabIndex = 21;
			this->txtid->TextChanged += gcnew System::EventHandler(this, &EliminarUsuarios::Txtid_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Usuario:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"ID:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(208, 57);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(274, 86);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EliminarUsuarios::DataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(83, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Usuarios Autoescuela Moreno";
			// 
			// bntcargar
			// 
			this->bntcargar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bntcargar->FlatAppearance->BorderSize = 0;
			this->bntcargar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bntcargar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntcargar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bntcargar->Location = System::Drawing::Point(126, 0);
			this->bntcargar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bntcargar->Name = L"bntcargar";
			this->bntcargar->Size = System::Drawing::Size(108, 50);
			this->bntcargar->TabIndex = 4;
			this->bntcargar->Text = L"Cargar Usuarios";
			this->bntcargar->UseVisualStyleBackColor = true;
			this->bntcargar->Click += gcnew System::EventHandler(this, &EliminarUsuarios::Bntcargar_Click);
			// 
			// btneliminar
			// 
			this->btneliminar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btneliminar->FlatAppearance->BorderSize = 0;
			this->btneliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btneliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btneliminar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btneliminar->Location = System::Drawing::Point(250, 0);
			this->btneliminar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btneliminar->Name = L"btneliminar";
			this->btneliminar->Size = System::Drawing::Size(108, 50);
			this->btneliminar->TabIndex = 3;
			this->btneliminar->Text = L"Eliminar Usuario";
			this->btneliminar->UseVisualStyleBackColor = true;
			this->btneliminar->Click += gcnew System::EventHandler(this, &EliminarUsuarios::Btneliminar_Click);
			// 
			// btncerrar
			// 
			this->btncerrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncerrar->FlatAppearance->BorderSize = 0;
			this->btncerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncerrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncerrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btncerrar->Location = System::Drawing::Point(374, 1);
			this->btncerrar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btncerrar->Name = L"btncerrar";
			this->btncerrar->Size = System::Drawing::Size(108, 48);
			this->btncerrar->TabIndex = 2;
			this->btncerrar->Text = L"Cerrar";
			this->btncerrar->UseVisualStyleBackColor = true;
			this->btncerrar->Click += gcnew System::EventHandler(this, &EliminarUsuarios::Btncerrar_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->btncerrar);
			this->panel2->Controls->Add(this->btneliminar);
			this->panel2->Controls->Add(this->bntcargar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 154);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(485, 48);
			this->panel2->TabIndex = 2;
			// 
			// EliminarUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(485, 202);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"EliminarUsuarios";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ELIMINAR USUARIO";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Btncerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		if (e->RowIndex >= 0)
		{
			DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];
			txtid->Text = row->Cells["id"]->Value->ToString();
			txtnombre->Text = row->Cells["nombre"]->Value->ToString();
			txtusuario->Text = row->Cells["usuario"]->Value->ToString();



		}
	
	}
	private: System::Void Bntcargar_Click(System::Object^ sender, System::EventArgs^ e) {
		txtid->Clear();
		txtnombre->Clear();
		txtusuario->Clear();

		MySqlCommand^ conncmd = gcnew MySqlCommand("Select id, nombre, usuario from usuarios ; ", conn);
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
		catch (Exception^e)
		{
			MessageBox::Show(e->Message);
		}
	}
	private: System::Void Btneliminar_Click(System::Object^ sender, System::EventArgs^ e) {

		
		MySqlCommand^ conncmd = gcnew MySqlCommand("Delete from usuarios Where id='" + this->txtid->Text + "' ;", conn);
		MySqlDataReader^ datareader;

		try
		{
			conn->Open();
			datareader = conncmd->ExecuteReader();
			MessageBox::Show("Cambio ejecutado con exito");
			while (datareader->Read())
			{

			}
			{

				txtid->Clear();
				txtnombre->Clear();
				txtusuario->Clear();



			}

		}
		catch (Exception^e)
		{
			MessageBox::Show(e->Message);


		}
	}
	private: System::Void Txtid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		txtid->Enabled = false;
	}
private: System::Void Txtnombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtnombre->Enabled = false;
}
private: System::Void Txtusuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtusuario->Enabled = false;
}
};
}

