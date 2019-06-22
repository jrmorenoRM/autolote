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
	/// Summary for PromedioFinal
	/// </summary>
	public ref class PromedioFinal : public System::Windows::Forms::Form
	{
	public:
		PromedioFinal(void)
		{
			String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
			MySqlConnection^ conn = gcnew MySqlConnection(connection);
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			MySqlCommand^ conncmd = gcnew MySqlCommand("Select * from resultadosexamenes inner join alumnos on resultadosexamenes.idalumno = alumnos.id ; ", conn);
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

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PromedioFinal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtrespetoalasnormasdetransito;
	private: System::Windows::Forms::TextBox^ txtcontroldecambios;
	private: System::Windows::Forms::TextBox^ txtcambiodecarriles;
	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::TextBox^ txtcontroldevelocidad;
	private: System::Windows::Forms::TextBox^ txtusodeespejos;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btncalcular;


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btncalcular = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(88, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Promedio Final";
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
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(327, 433);
			this->panel1->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 44);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(292, 101);
			this->dataGridView1->TabIndex = 25;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PromedioFinal::DataGridView1_CellContentClick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 16);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Control de cambios:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(14, 315);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 16);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Cambio entre carriles:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(10, 354);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(185, 16);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Respeto a las normas de transito:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 233);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 16);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Control de velocidad:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(14, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 16);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Id de alumno:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 16);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Uso de espejos:";
			// 
			// txtrespetoalasnormasdetransito
			// 
			this->txtrespetoalasnormasdetransito->Location = System::Drawing::Point(201, 350);
			this->txtrespetoalasnormasdetransito->Name = L"txtrespetoalasnormasdetransito";
			this->txtrespetoalasnormasdetransito->Size = System::Drawing::Size(103, 20);
			this->txtrespetoalasnormasdetransito->TabIndex = 18;
			this->txtrespetoalasnormasdetransito->TextChanged += gcnew System::EventHandler(this, &PromedioFinal::Txtrespetoalasnormasdetransito_TextChanged);
			// 
			// txtcontroldecambios
			// 
			this->txtcontroldecambios->Location = System::Drawing::Point(201, 272);
			this->txtcontroldecambios->Name = L"txtcontroldecambios";
			this->txtcontroldecambios->Size = System::Drawing::Size(103, 20);
			this->txtcontroldecambios->TabIndex = 17;
			this->txtcontroldecambios->TextChanged += gcnew System::EventHandler(this, &PromedioFinal::Txtcontroldecambios_TextChanged);
			// 
			// txtcambiodecarriles
			// 
			this->txtcambiodecarriles->Location = System::Drawing::Point(201, 311);
			this->txtcambiodecarriles->Name = L"txtcambiodecarriles";
			this->txtcambiodecarriles->Size = System::Drawing::Size(103, 20);
			this->txtcambiodecarriles->TabIndex = 16;
			this->txtcambiodecarriles->TextChanged += gcnew System::EventHandler(this, &PromedioFinal::Txtcambiodecarriles_TextChanged);
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(201, 158);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(103, 20);
			this->txtid->TabIndex = 13;
			this->txtid->TextChanged += gcnew System::EventHandler(this, &PromedioFinal::Txtid_TextChanged);
			// 
			// txtcontroldevelocidad
			// 
			this->txtcontroldevelocidad->Location = System::Drawing::Point(201, 229);
			this->txtcontroldevelocidad->Name = L"txtcontroldevelocidad";
			this->txtcontroldevelocidad->Size = System::Drawing::Size(103, 20);
			this->txtcontroldevelocidad->TabIndex = 15;
			this->txtcontroldevelocidad->TextChanged += gcnew System::EventHandler(this, &PromedioFinal::Txtcontroldevelocidad_TextChanged);
			// 
			// txtusodeespejos
			// 
			this->txtusodeespejos->Location = System::Drawing::Point(201, 191);
			this->txtusodeespejos->Name = L"txtusodeespejos";
			this->txtusodeespejos->Size = System::Drawing::Size(103, 20);
			this->txtusodeespejos->TabIndex = 14;
			this->txtusodeespejos->TextChanged += gcnew System::EventHandler(this, &PromedioFinal::Txtusodeespejos_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->btncalcular);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 383);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(327, 50);
			this->panel2->TabIndex = 1;
			// 
			// btncalcular
			// 
			this->btncalcular->FlatAppearance->BorderSize = 0;
			this->btncalcular->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncalcular->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncalcular->ForeColor = System::Drawing::Color::Snow;
			this->btncalcular->Location = System::Drawing::Point(92, 6);
			this->btncalcular->Name = L"btncalcular";
			this->btncalcular->Size = System::Drawing::Size(151, 41);
			this->btncalcular->TabIndex = 0;
			this->btncalcular->Text = L"CALCULAR PROMEDIO";
			this->btncalcular->UseVisualStyleBackColor = true;
			this->btncalcular->Click += gcnew System::EventHandler(this, &PromedioFinal::Btncalcular_Click);
			// 
			// PromedioFinal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(327, 433);
			this->Controls->Add(this->panel1);
			this->Name = L"PromedioFinal";
			this->Text = L"PromedioFinal";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Txtid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		txtid->Enabled = false;
	}
private: System::Void Txtusodeespejos_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtusodeespejos->Enabled = false;
}
private: System::Void Txtcontroldevelocidad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtcontroldevelocidad->Enabled = false;
}
private: System::Void Txtcontroldecambios_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtcontroldecambios->Enabled = false;
}
private: System::Void Txtcambiodecarriles_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtcambiodecarriles->Enabled = false;
}
private: System::Void Txtrespetoalasnormasdetransito_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtrespetoalasnormasdetransito->Enabled = false;
}
private: System::Void Btncalcular_Click(System::Object^ sender, System::EventArgs^ e) {
	double n1, n2, n3, n4, n5, nfinal;
	n1 = Convert::ToDouble(txtcambiodecarriles->Text);
	n2 = Convert::ToDouble(txtcontroldecambios->Text);
	n3 = Convert::ToDouble(txtcontroldevelocidad->Text);
	n4 = Convert::ToDouble(txtrespetoalasnormasdetransito->Text);
	n5 = Convert::ToDouble(txtusodeespejos->Text);

	nfinal = ((n1 + n2 + n3 + n4 + n5) / 5);
	MessageBox::Show("Promedio final es de: " + nfinal );
	String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
	MySqlConnection^ conn = gcnew MySqlConnection(connection);
	MySqlCommand^ conncmd = gcnew MySqlCommand("Update alumnos set promediofinal= '" + nfinal + "' Where id='" + this->txtid->Text + "' ;", conn);
	MySqlDataReader^ datareader;

	try
	{
		conn->Open();
		datareader = conncmd->ExecuteReader();
		while (datareader->Read())
		{

		}
		

	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message + e->StackTrace);
	}
	
	
}
private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	if (e->RowIndex >= 0)
	{
		DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];
		txtid->Text = row->Cells["id"]->Value->ToString();
		txtcambiodecarriles->Text = row->Cells["c_carriles"]->Value->ToString();
		txtcontroldecambios->Text = row->Cells["c_cambios"]->Value->ToString();
		txtcontroldevelocidad->Text = row->Cells["c_velocidad"]->Value->ToString();
		txtrespetoalasnormasdetransito->Text = row->Cells["respeto_normas"]->Value->ToString();
		txtusodeespejos->Text = row->Cells["u_espejo"]->Value->ToString();



	}
}
};
}
