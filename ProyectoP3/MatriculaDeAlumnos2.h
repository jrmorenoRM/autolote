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
	/// Summary for MatriculaDeAlumnos2
	/// </summary>
	public ref class MatriculaDeAlumnos2 : public System::Windows::Forms::Form
	{
	public:
		MatriculaDeAlumnos2(void)
		{
			InitializeComponent();
			Fillcombomaestro();
			FillcomboCarro();
			lista();
//***********************(*;******************************************************************************************************************************************************

			String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
			MySqlConnection^ conn = gcnew MySqlConnection(connection);
			MySqlCommand^ conncmd = gcnew MySqlCommand("Select id, nombre, apellido from alumnos ; ", conn);
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
				MessageBox::Show(e->Message + e->StackTrace);
			}
//***********************************************************************************************************************************************************			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MatriculaDeAlumnos2()
		{
			if (components)
			{
				delete components;
			}
		}
		String^ fechaclase;
		String^ res;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ combohoras;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ combocarro;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ combomaestro;
	private: System::Windows::Forms::TextBox^ txtid;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnmatriculafinal;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btncerrar;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnmatriculafinal = (gcnew System::Windows::Forms::Button());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->combocarro = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->combomaestro = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->combohoras = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btncerrar = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->txtid);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->combocarro);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->combomaestro);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->combohoras);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(3, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(531, 428);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MatriculaDeAlumnos2::Panel1_Paint);
			// 
			// btnmatriculafinal
			// 
			this->btnmatriculafinal->FlatAppearance->BorderSize = 0;
			this->btnmatriculafinal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnmatriculafinal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnmatriculafinal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnmatriculafinal->Location = System::Drawing::Point(61, 9);
			this->btnmatriculafinal->Name = L"btnmatriculafinal";
			this->btnmatriculafinal->Size = System::Drawing::Size(179, 29);
			this->btnmatriculafinal->TabIndex = 16;
			this->btnmatriculafinal->Text = L"MATRICULAR";
			this->btnmatriculafinal->UseVisualStyleBackColor = true;
			this->btnmatriculafinal->Click += gcnew System::EventHandler(this, &MatriculaDeAlumnos2::Btnmatriculafinal_Click);
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(9, 66);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(72, 20);
			this->txtid->TabIndex = 15;
			this->txtid->TextChanged += gcnew System::EventHandler(this, &MatriculaDeAlumnos2::Txtid_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(9, 47);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"ID Alumno:";
			this->label7->Click += gcnew System::EventHandler(this, &MatriculaDeAlumnos2::Label7_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(214, 47);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(305, 348);
			this->dataGridView1->TabIndex = 13;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MatriculaDeAlumnos2::DataGridView1_CellContentClick);
			// 
			// combocarro
			// 
			this->combocarro->FormattingEnabled = true;
			this->combocarro->Location = System::Drawing::Point(9, 315);
			this->combocarro->Name = L"combocarro";
			this->combocarro->Size = System::Drawing::Size(183, 21);
			this->combocarro->TabIndex = 12;
			this->combocarro->Text = L"Vehiculos";
			this->combocarro->SelectedIndexChanged += gcnew System::EventHandler(this, &MatriculaDeAlumnos2::Combocarro_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(10, 285);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Seleccionar Vehiculo:";
			// 
			// combomaestro
			// 
			this->combomaestro->FormattingEnabled = true;
			this->combomaestro->Location = System::Drawing::Point(9, 248);
			this->combomaestro->Name = L"combomaestro";
			this->combomaestro->Size = System::Drawing::Size(183, 21);
			this->combomaestro->TabIndex = 10;
			this->combomaestro->Text = L"Maestros";
			this->combomaestro->SelectedIndexChanged += gcnew System::EventHandler(this, &MatriculaDeAlumnos2::Combomaestro_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(10, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Seleccionar Maestro:";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(76, 377);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(42, 20);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"No";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MatriculaDeAlumnos2::CheckBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(26, 377);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(35, 20);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Si";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MatriculaDeAlumnos2::CheckBox1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(10, 346);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"¿Experiencia al volante\?";
			// 
			// combohoras
			// 
			this->combohoras->FormattingEnabled = true;
			this->combohoras->Location = System::Drawing::Point(9, 179);
			this->combohoras->Name = L"combohoras";
			this->combohoras->Size = System::Drawing::Size(183, 21);
			this->combohoras->TabIndex = 5;
			this->combohoras->Text = L"Horario";
			this->combohoras->SelectedIndexChanged += gcnew System::EventHandler(this, &MatriculaDeAlumnos2::ComboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(10, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Seleccionar Hora:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Seleccionar Dia:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(9, 123);
			this->dateTimePicker1->MaxDate = System::DateTime(2019, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2019, 6, 15, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(183, 20);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->Value = System::DateTime(2019, 6, 15, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MatriculaDeAlumnos2::DateTimePicker1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(114, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(282, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"FORMULARIO DE MATRICULA ";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->btncerrar);
			this->panel2->Controls->Add(this->btnmatriculafinal);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 401);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(534, 50);
			this->panel2->TabIndex = 1;
			// 
			// btncerrar
			// 
			this->btncerrar->FlatAppearance->BorderSize = 0;
			this->btncerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncerrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btncerrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btncerrar->Location = System::Drawing::Point(294, 9);
			this->btncerrar->Name = L"btncerrar";
			this->btncerrar->Size = System::Drawing::Size(179, 29);
			this->btncerrar->TabIndex = 16;
			this->btncerrar->Text = L"CERRAR";
			this->btncerrar->UseVisualStyleBackColor = true;
			this->btncerrar->Click += gcnew System::EventHandler(this, &MatriculaDeAlumnos2::Btnmatriculafinal_Click);
			// 
			// MatriculaDeAlumnos2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 451);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MatriculaDeAlumnos2";
			this->Text = L"MatriculaDeAlumnos2";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		


	}
	private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ comh = combohoras->Text;
		
		
		
	}
private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	

	if (e->RowIndex >= 0)
	{
		DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];
		txtid->Text = row->Cells["id"]->Value->ToString();
		



	}
}
private: System::Void Btnmatriculafinal_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	String^ fechaclase = dateTimePicker1->Text;
	
	String^ v_cadena_conexion = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";


	MySqlConnection^ v_conexion_validador = gcnew MySqlConnection(v_cadena_conexion);
	v_conexion_validador->Open();

	MySqlCommand^ v_comando_validador = gcnew MySqlCommand("SELECT COUNT(*) FROM matricula_alumnos WHERE Fecha='" +dateTimePicker1->Text+"' AND maestro='" + combomaestro->Text + "' AND hora='" + combohoras->Text +"';", v_conexion_validador);
	MySqlCommand^ v_comando_validadorr = gcnew MySqlCommand("SELECT COUNT(*) FROM matricula_alumnos WHERE vehiculo='" + combocarro->Text + "' AND Fecha='" + dateTimePicker1->Text + "' AND hora='" + combohoras->Text + "';", v_conexion_validador);


	
	try
	{
		if (v_conexion_validador->State != ConnectionState::Open)
		{
			v_conexion_validador->Open();
		}
		
		int v_validador = Convert::ToInt32(v_comando_validador->ExecuteScalar()); //validar si existen registrros
		int v_validadorr = Convert::ToInt32(v_comando_validadorr->ExecuteScalar()); //validar si existen registrros
		
		
		if(v_validador == 1){
			MessageBox::Show("Este catedratico esta una clase a esta hora el mismo dia, favor seleccionar otro horario u otro catedratico");
			return;

		}
		else if(v_validadorr == 1) {
			MessageBox::Show("El vehiculo ya esta asignado en este horario, favor seleccione uno nuevo");
			return;

		}
		else {

			
			MySqlCommand^ v_comando_insert = gcnew MySqlCommand("insert into matricula_alumnos  (idalumno, Fecha, hora, maestro, vehiculo, experienciaConducir ) values ('" + this->txtid->Text + "', '" + this->dateTimePicker1->Text + "','" + this->combohoras->Text + "', '" + this->combomaestro->Text + "','" + combocarro->Text +  "', '" +res + "' ) ; ", v_conexion_validador);
			MySqlCommand^ v_comando_insert2 = gcnew MySqlCommand("insert into resultadosexamenes  (idalumno ) values ('" + this->txtid->Text + "' ) ; ", v_conexion_validador);

			
			if (v_conexion_validador->State != ConnectionState::Open)
			{
				v_conexion_validador->Open();
			}
			v_comando_insert->ExecuteNonQuery();
			v_comando_insert2->ExecuteNonQuery();

			v_conexion_validador->Close();
			
		
		}
		MessageBox::Show("La matricula se a completado");
		
	
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}
private: System::Void Combomaestro_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ combom = combomaestro->Text;

}

		 private: void lista(void) {

			 ArrayList^ horario = gcnew ArrayList();
			 
			 horario->Add("8:00 am");
			 horario->Add("10:00 am");
			 horario->Add("12:00 pm");
			 horario->Add("2:00 pm");
			 horario->Add("4:00 pm");
			 horario->Add("6:00 pm");


			 combohoras->DataSource = horario;
			 combohoras->SelectedIndex = 0;


			
			
		 }

		 private: void Fillcombomaestro(void) {


			 String^ combomc = combomaestro->Text;
			 String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
			 MySqlConnection^ conn = gcnew MySqlConnection(connection);
			 MySqlCommand^ conncmd = gcnew MySqlCommand("select * from maestros ;", conn);
			 MySqlDataReader^ datareader;

			 try
			 {
				 conn->Open();
				 datareader = conncmd->ExecuteReader();
				 while (datareader->Read())
				 {
					 String^ mode;
					 mode = datareader->GetString("nombre");
					 combomaestro->Items->Add(mode);
				 }


			 }
			 catch (Exception^ e)
			 {
				 MessageBox::Show(e->Message + e->StackTrace);
			 }
}
private: System::Void Combocarro_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ combov = combocarro->Text;

}

		 private: void FillcomboCarro(void) {


			 String^ combocc = combocarro->Text;
			 String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
			 MySqlConnection^ conn = gcnew MySqlConnection(connection);
			 MySqlCommand^ conncmd = gcnew MySqlCommand("select * from modelos ;", conn);
			 MySqlDataReader^ datareader;

			 try
			 {
				 conn->Open();
				 datareader = conncmd->ExecuteReader();
				 while (datareader->Read())
				 {
					 String^ mode;
					 mode = datareader->GetString("modelo");
					 combocarro->Items->Add(mode);
				 }


			 }
			 catch (Exception^ e)
			 {
				 MessageBox::Show(e->Message + e->StackTrace);
			 }

}
private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	res = "SI";
}
private: System::Void CheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	res = "NO";
}
private: System::Void Txtid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtid->Enabled = false;
}
private: System::Void Label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
