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
	/// Resumen de EditarUsuarios
	/// </summary>
	public ref class EditarUsuarios : public System::Windows::Forms::Form
	{
		String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
		MySqlConnection^ conn = gcnew MySqlConnection(connection);
	public:
		EditarUsuarios(void)
		{
			InitializeComponent();
			txtid->Enabled = false;

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EditarUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnmodificar;
	private: System::Windows::Forms::Button^ btncargar;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtpass;
	private: System::Windows::Forms::TextBox^ txtusuario;
	private: System::Windows::Forms::TextBox^ txtnombre;
	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btncerrar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ txtpass2;

	private: System::Windows::Forms::Label^ label6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditarUsuarios::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btncerrar = (gcnew System::Windows::Forms::Button());
			this->btnmodificar = (gcnew System::Windows::Forms::Button());
			this->btncargar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtpass2 = (gcnew System::Windows::Forms::TextBox());
			this->txtpass = (gcnew System::Windows::Forms::TextBox());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->txtpass2);
			this->panel1->Controls->Add(this->txtpass);
			this->panel1->Controls->Add(this->txtusuario);
			this->panel1->Controls->Add(this->txtnombre);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->txtid);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(1, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(508, 217);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &EditarUsuarios::Panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->btncerrar);
			this->panel2->Controls->Add(this->btnmodificar);
			this->panel2->Controls->Add(this->btncargar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 180);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(508, 37);
			this->panel2->TabIndex = 25;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &EditarUsuarios::Panel2_Paint);
			// 
			// btncerrar
			// 
			this->btncerrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncerrar->FlatAppearance->BorderSize = 0;
			this->btncerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncerrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncerrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btncerrar->Location = System::Drawing::Point(366, -3);
			this->btncerrar->Name = L"btncerrar";
			this->btncerrar->Size = System::Drawing::Size(108, 37);
			this->btncerrar->TabIndex = 23;
			this->btncerrar->Text = L"Cerrar";
			this->btncerrar->UseVisualStyleBackColor = true;
			this->btncerrar->Click += gcnew System::EventHandler(this, &EditarUsuarios::Btncerrar_Click);
			// 
			// btnmodificar
			// 
			this->btnmodificar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnmodificar->FlatAppearance->BorderSize = 0;
			this->btnmodificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnmodificar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmodificar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnmodificar->Location = System::Drawing::Point(186, 6);
			this->btnmodificar->Name = L"btnmodificar";
			this->btnmodificar->Size = System::Drawing::Size(108, 28);
			this->btnmodificar->TabIndex = 22;
			this->btnmodificar->Text = L"Modificar Usuarios";
			this->btnmodificar->UseVisualStyleBackColor = true;
			this->btnmodificar->Click += gcnew System::EventHandler(this, &EditarUsuarios::Btnmodificar_Click);
			// 
			// btncargar
			// 
			this->btncargar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncargar->FlatAppearance->BorderSize = 0;
			this->btncargar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncargar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncargar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btncargar->Location = System::Drawing::Point(14, 3);
			this->btncargar->Name = L"btncargar";
			this->btncargar->Size = System::Drawing::Size(108, 31);
			this->btncargar->TabIndex = 21;
			this->btncargar->Text = L"Cargar Usuarios";
			this->btncargar->UseVisualStyleBackColor = true;
			this->btncargar->Click += gcnew System::EventHandler(this, &EditarUsuarios::Btncargar_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(236, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(266, 132);
			this->dataGridView1->TabIndex = 24;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EditarUsuarios::DataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(164, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 22);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Editor De Usuarios";
			// 
			// txtpass2
			// 
			this->txtpass2->Location = System::Drawing::Point(110, 153);
			this->txtpass2->Name = L"txtpass2";
			this->txtpass2->PasswordChar = '*';
			this->txtpass2->Size = System::Drawing::Size(116, 20);
			this->txtpass2->TabIndex = 18;
			this->txtpass2->TextChanged += gcnew System::EventHandler(this, &EditarUsuarios::TextBox1_TextChanged);
			// 
			// txtpass
			// 
			this->txtpass->Location = System::Drawing::Point(110, 122);
			this->txtpass->Name = L"txtpass";
			this->txtpass->PasswordChar = '*';
			this->txtpass->Size = System::Drawing::Size(116, 20);
			this->txtpass->TabIndex = 18;
			// 
			// txtusuario
			// 
			this->txtusuario->Location = System::Drawing::Point(110, 92);
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(116, 20);
			this->txtusuario->TabIndex = 17;
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(110, 67);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(116, 20);
			this->txtnombre->TabIndex = 16;
			this->txtnombre->TextChanged += gcnew System::EventHandler(this, &EditarUsuarios::Txtnombre_TextChanged);
			this->txtnombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EditarUsuarios::Txtnombre_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(11, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Repetir Password:";
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(110, 41);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(116, 20);
			this->txtid->TabIndex = 15;
			this->txtid->TextChanged += gcnew System::EventHandler(this, &EditarUsuarios::Txtid_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(11, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 16);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Password:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(10, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Usuario:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"ID:";
			// 
			// EditarUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 223);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditarUsuarios";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"EDITAR USUARIOS";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Btncargar_Click(System::Object^ sender, System::EventArgs^ e) {
		txtid->Clear();
		txtnombre->Clear();
		txtpass->Clear();
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
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}

	}
private: System::Void Txtid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
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
private: System::Void Btnmodificar_Click(System::Object^ sender, System::EventArgs^ e) {




	
	if (txtpass->Text == txtpass2->Text){
		try
		{
			MySqlCommand^ conncmd = gcnew MySqlCommand("Update usuarios set id= '" + this->txtid->Text + "',nombre='" + this->txtnombre->Text + "', usuario='" + this->txtusuario->Text + "',password='" + this->txtpass->Text + "' Where id='" + this->txtid->Text + "' ;", conn);
			MySqlDataReader^ datareader;
			conn->Open();
			datareader = conncmd->ExecuteReader();

			while (datareader->Read()) {}

			MessageBox::Show("Cambio ejecutado con exito");
			txtid->Clear();
			txtnombre->Clear();
			txtpass->Clear();
			txtusuario->Clear();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message + e->StackTrace);
		}
	}
	else {
		MessageBox::Show("Contrasenas no coinciden");
		txtpass->Clear();
		txtpass2->Clear();
	}
	
}
private: System::Void Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Txtnombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
		  private: System::Void validaciontexto(System::Windows::Forms::KeyPressEventArgs^ e, int n) {
			  switch (n)
			  {
			  case 1:
			  {
				  if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar))
				  {
					  e->Handled = true;
					  MessageBox::Show("Solo se aceptan letras", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				  }
				  break;
			  }

			  case 2:
			  {
				  if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar))
				  {
					  e->Handled = true;
					  MessageBox::Show("Solo se aceptan numeros", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				  }
				  break;
			  }

			  default:
				  break;
			  }
		  }
private: System::Void Txtnombre_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 1);
}
};
}
