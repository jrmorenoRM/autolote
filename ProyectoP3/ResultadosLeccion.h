#pragma once
using namespace MySql::Data::MySqlClient;
#include "PromedioFinal.h"
namespace ProyectoP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ResultadosLeccion
	/// </summary>
	public ref class ResultadosLeccion : public System::Windows::Forms::Form
	{

		String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
		MySqlConnection^ conn = gcnew MySqlConnection(connection);

	public:
		ResultadosLeccion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			MySqlCommand^ conncmd = gcnew MySqlCommand("Select id, nombre, apellido, Fecha, hora, maestro from alumnos inner join matricula_alumnos on alumnos.id = matricula_alumnos.idalumno ; ", conn);
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
				sda->Update(dbdataset);}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
		
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ResultadosLeccion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ txtcontroldecambios;
	private: System::Windows::Forms::TextBox^ txtcambiodecarriles;
	protected:


	private: System::Windows::Forms::TextBox^ txtcontroldevelocidad;

	private: System::Windows::Forms::TextBox^ txtusodeespejos;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtrespetoalasnormasdetransito;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btningresar;
	private: System::Windows::Forms::Button^ btncerrar;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ResultadosLeccion::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtrespetoalasnormasdetransito = (gcnew System::Windows::Forms::TextBox());
			this->txtcontroldecambios = (gcnew System::Windows::Forms::TextBox());
			this->txtcambiodecarriles = (gcnew System::Windows::Forms::TextBox());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->txtcontroldevelocidad = (gcnew System::Windows::Forms::TextBox());
			this->txtusodeespejos = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btningresar = (gcnew System::Windows::Forms::Button());
			this->btncerrar = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->txtrespetoalasnormasdetransito);
			this->panel1->Controls->Add(this->txtcontroldecambios);
			this->panel1->Controls->Add(this->txtcambiodecarriles);
			this->panel1->Controls->Add(this->txtid);
			this->panel1->Controls->Add(this->txtcontroldevelocidad);
			this->panel1->Controls->Add(this->txtusodeespejos);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(391, 457);
			this->panel1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 34);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(367, 129);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ResultadosLeccion::DataGridView1_CellContentClick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 303);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Control de cambios:";
			this->label6->Click += gcnew System::EventHandler(this, &ResultadosLeccion::Label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(14, 342);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Cambio entre carriles:";
			this->label5->Click += gcnew System::EventHandler(this, &ResultadosLeccion::Label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(10, 381);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(185, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Respeto a las normas de transito:";
			this->label4->Click += gcnew System::EventHandler(this, &ResultadosLeccion::Label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Control de velocidad:";
			this->label3->Click += gcnew System::EventHandler(this, &ResultadosLeccion::Label3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(14, 189);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Id de alumno:";
			this->label7->Click += gcnew System::EventHandler(this, &ResultadosLeccion::Label7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Uso de espejos:";
			this->label2->Click += gcnew System::EventHandler(this, &ResultadosLeccion::Label2_Click);
			// 
			// txtrespetoalasnormasdetransito
			// 
			this->txtrespetoalasnormasdetransito->Location = System::Drawing::Point(201, 377);
			this->txtrespetoalasnormasdetransito->Name = L"txtrespetoalasnormasdetransito";
			this->txtrespetoalasnormasdetransito->Size = System::Drawing::Size(178, 20);
			this->txtrespetoalasnormasdetransito->TabIndex = 6;
			this->txtrespetoalasnormasdetransito->TextChanged += gcnew System::EventHandler(this, &ResultadosLeccion::TextBox5_TextChanged);
			this->txtrespetoalasnormasdetransito->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ResultadosLeccion::Txtrespetoalasnormasdetransito_KeyPress);
			// 
			// txtcontroldecambios
			// 
			this->txtcontroldecambios->Location = System::Drawing::Point(201, 299);
			this->txtcontroldecambios->Name = L"txtcontroldecambios";
			this->txtcontroldecambios->Size = System::Drawing::Size(178, 20);
			this->txtcontroldecambios->TabIndex = 5;
			this->txtcontroldecambios->TextChanged += gcnew System::EventHandler(this, &ResultadosLeccion::Txtcontroldecambios_TextChanged);
			this->txtcontroldecambios->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ResultadosLeccion::Txtcontroldecambios_KeyPress);
			// 
			// txtcambiodecarriles
			// 
			this->txtcambiodecarriles->Location = System::Drawing::Point(201, 338);
			this->txtcambiodecarriles->Name = L"txtcambiodecarriles";
			this->txtcambiodecarriles->Size = System::Drawing::Size(178, 20);
			this->txtcambiodecarriles->TabIndex = 4;
			this->txtcambiodecarriles->TextChanged += gcnew System::EventHandler(this, &ResultadosLeccion::Txtcambiodecarriles_TextChanged);
			this->txtcambiodecarriles->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ResultadosLeccion::Txtcambiodecarriles_KeyPress);
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(201, 185);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(178, 20);
			this->txtid->TabIndex = 2;
			this->txtid->TextChanged += gcnew System::EventHandler(this, &ResultadosLeccion::TextBox6_TextChanged);
			// 
			// txtcontroldevelocidad
			// 
			this->txtcontroldevelocidad->Location = System::Drawing::Point(201, 256);
			this->txtcontroldevelocidad->Name = L"txtcontroldevelocidad";
			this->txtcontroldevelocidad->Size = System::Drawing::Size(178, 20);
			this->txtcontroldevelocidad->TabIndex = 3;
			this->txtcontroldevelocidad->TextChanged += gcnew System::EventHandler(this, &ResultadosLeccion::Txtcontroldevelocidad_TextChanged);
			this->txtcontroldevelocidad->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ResultadosLeccion::Txtcontroldevelocidad_KeyPress);
			// 
			// txtusodeespejos
			// 
			this->txtusodeespejos->Location = System::Drawing::Point(201, 218);
			this->txtusodeespejos->Name = L"txtusodeespejos";
			this->txtusodeespejos->Size = System::Drawing::Size(178, 20);
			this->txtusodeespejos->TabIndex = 2;
			this->txtusodeespejos->TextChanged += gcnew System::EventHandler(this, &ResultadosLeccion::Txtusodeespejos_TextChanged);
			this->txtusodeespejos->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ResultadosLeccion::Txtusodeespejos_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"INGRESO DE NOTAS";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::DodgerBlue;
			this->flowLayoutPanel1->Controls->Add(this->btningresar);
			this->flowLayoutPanel1->Controls->Add(this->btncerrar);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 407);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(391, 50);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// btningresar
			// 
			this->btningresar->FlatAppearance->BorderSize = 0;
			this->btningresar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btningresar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btningresar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btningresar->Location = System::Drawing::Point(3, 3);
			this->btningresar->Name = L"btningresar";
			this->btningresar->Size = System::Drawing::Size(192, 44);
			this->btningresar->TabIndex = 0;
			this->btningresar->Text = L"INGRESAR NOTAS";
			this->btningresar->UseVisualStyleBackColor = true;
			this->btningresar->Click += gcnew System::EventHandler(this, &ResultadosLeccion::Btningresar_Click);
			// 
			// btncerrar
			// 
			this->btncerrar->FlatAppearance->BorderSize = 0;
			this->btncerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncerrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncerrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btncerrar->Location = System::Drawing::Point(201, 3);
			this->btncerrar->Name = L"btncerrar";
			this->btncerrar->Size = System::Drawing::Size(187, 44);
			this->btncerrar->TabIndex = 0;
			this->btncerrar->Text = L"CERRAR";
			this->btncerrar->UseVisualStyleBackColor = true;
			this->btncerrar->Click += gcnew System::EventHandler(this, &ResultadosLeccion::Btncerrar_Click);
			// 
			// ResultadosLeccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 457);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ResultadosLeccion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"INGRESO DE NOTAS";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtid->Enabled = false;
}
private: System::Void Label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtcambiodecarriles_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtcontroldecambios_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtcontroldevelocidad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtusodeespejos_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0)
	{
		DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];
		txtid->Text = row->Cells["id"]->Value->ToString();
	}

}
private: System::Void Btningresar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MySqlCommand^ conncmd = gcnew MySqlCommand("insert into resultadosexamenes (idalumno, u_espejo, c_velocidad, c_cambios, c_carriles, respeto_normas) values ('" + this->txtid->Text + "' , '" + this->txtusodeespejos->Text + "'  , '" + this->txtcontroldevelocidad->Text + "' , '" + this->txtcontroldecambios->Text + "' , '" + this->txtcambiodecarriles->Text + "'  , '" + this->txtrespetoalasnormasdetransito->Text + "' ) ;", conn);
	MySqlDataReader^ datareader;

	try
	{
		conn->Open();
		datareader = conncmd->ExecuteReader();
		while (datareader->Read())
		{

		}
		MessageBox::Show("Notas ingresadas");
		PromedioFinal^ promediof = gcnew PromedioFinal();
		promediof->Show();
		this->Close();
		

	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message + e->StackTrace);
	}
}
private: System::Void Btncerrar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void validaciontexto(System::Windows::Forms::KeyPressEventArgs^ e, int n){
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

private: System::Void Txtrespetoalasnormasdetransito_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 2);
}
private: System::Void Txtcambiodecarriles_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 2);
}
private: System::Void Txtcontroldecambios_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 2);
}
private: System::Void Txtcontroldevelocidad_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 2);
}
private: System::Void Txtusodeespejos_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 2);
}
};
}
