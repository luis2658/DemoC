#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "Header.h"
#include <msclr\marshal_cppstd.h>


namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btnCreditos;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  txtUno;
	private: System::Windows::Forms::TextBox^  txtDos;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnProcesar;
	private: System::Windows::Forms::TextBox^  txtArchivo;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
				System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCreditos = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtUno = (gcnew System::Windows::Forms::TextBox());
			this->txtDos = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnProcesar = (gcnew System::Windows::Forms::Button());
			this->txtArchivo = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(154, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 33);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Encriptador General";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(17, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->btnCreditos);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->txtUno);
			this->groupBox1->Controls->Add(this->txtDos);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(17, 90);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(387, 270);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// btnCreditos
			// 
			this->btnCreditos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCreditos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreditos->ForeColor = System::Drawing::Color::DarkRed;
			this->btnCreditos->Location = System::Drawing::Point(290, 231);
			this->btnCreditos->Name = L"btnCreditos";
			this->btnCreditos->Size = System::Drawing::Size(80, 23);
			this->btnCreditos->TabIndex = 4;
			this->btnCreditos->Text = L"créditos";
			this->btnCreditos->UseVisualStyleBackColor = true;
			this->btnCreditos->Click += gcnew System::EventHandler(this, &MyForm::btnCreditos_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(243, 80);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(60, 65);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(80, 80);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(60, 65);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// txtUno
			// 
			this->txtUno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUno->Location = System::Drawing::Point(28, 28);
			this->txtUno->Name = L"txtUno";
			this->txtUno->Size = System::Drawing::Size(330, 26);
			this->txtUno->TabIndex = 1;
			this->txtUno->TextChanged += gcnew System::EventHandler(this, &MyForm::txtUno_TextChanged);
			// 
			// txtDos
			// 
			this->txtDos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDos->Location = System::Drawing::Point(28, 170);
			this->txtDos->Name = L"txtDos";
			this->txtDos->Size = System::Drawing::Size(330, 26);
			this->txtDos->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->btnProcesar);
			this->groupBox2->Controls->Add(this->txtArchivo);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Location = System::Drawing::Point(421, 90);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(148, 270);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(6, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre del Archivo:";
			// 
			// btnProcesar
			// 
			this->btnProcesar->BackColor = System::Drawing::Color::LightGray;
			this->btnProcesar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProcesar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnProcesar->Location = System::Drawing::Point(15, 146);
			this->btnProcesar->Name = L"btnProcesar";
			this->btnProcesar->Size = System::Drawing::Size(117, 35);
			this->btnProcesar->TabIndex = 1;
			this->btnProcesar->Text = L"PROCESAR";
			this->btnProcesar->UseVisualStyleBackColor = false;
			this->btnProcesar->Click += gcnew System::EventHandler(this, &MyForm::btnProcesar_Click);
			// 
			// txtArchivo
			// 
			this->txtArchivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtArchivo->Location = System::Drawing::Point(15, 93);
			this->txtArchivo->Name = L"txtArchivo";
			this->txtArchivo->Size = System::Drawing::Size(117, 22);
			this->txtArchivo->TabIndex = 0;
			this->txtArchivo->Text = L"Output";
			// 
			// MyForm
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(586, 377);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCreditos_Click(System::Object^  sender, System::EventArgs^  e) {

		MyForm2 ^formulario2 = gcnew MyForm2();
		formulario2->ShowDialog();
	}
private: System::Void btnProcesar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtArchivo->Text->Length > 0)
	{
		int n = Convert::ToInt32(txtArchivo->Text->Length);
		char* palabra = new char[n + 4];
		sprintf(palabra, "%s", txtArchivo->Text);
		palabra[n] = '.';
		palabra[n+1] = 't';
		palabra[n+2] = 'x';
		palabra[n+3] = 't';
		palabra[n+4] = '\0';

		guardarenarchivo2(palabra,n);
		
	}
	else
	{
		guardarenarchivo();
	}

	MyForm1 ^formulario1 = gcnew MyForm1();
	
	formulario1->ShowDialog();

}
private: System::Void txtUno_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	System::String^palabra = txtUno->Text;
	if (txtUno->Text->Length > 0) {
		txtDos->Text = "";

		msclr::interop::marshal_context context;
		string standardString = context.marshal_as<string>(palabra);
		char* palabra2 = encriptamiento(standardString);
		txtDos->Text = gcnew String(palabra2);
	}
	else
	{
		txtDos->Text = "";
	}

}
};
}
