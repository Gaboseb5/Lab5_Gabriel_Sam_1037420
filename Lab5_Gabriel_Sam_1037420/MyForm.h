#pragma once
#include<iostream>
#include<ctime>
namespace Lab5GabrielSam1037420 {

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
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txttam;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ txtmostrararreglo;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtnumabuscar;
	private: System::Windows::Forms::Button^ txtbuscar;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ txtmos;
	private: System::Windows::Forms::Button^ txtlimpiar;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txttam = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtmostrararreglo = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtnumabuscar = (gcnew System::Windows::Forms::TextBox());
			this->txtbuscar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtmos = (gcnew System::Windows::Forms::RichTextBox());
			this->txtlimpiar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->Location = System::Drawing::Point(219, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txttam
			// 
			this->txttam->Location = System::Drawing::Point(219, 30);
			this->txttam->Name = L"txttam";
			this->txttam->Size = System::Drawing::Size(100, 22);
			this->txttam->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingrese el tamaño del arreglo";
			// 
			// txtmostrararreglo
			// 
			this->txtmostrararreglo->BackColor = System::Drawing::Color::Silver;
			this->txtmostrararreglo->Location = System::Drawing::Point(15, 100);
			this->txtmostrararreglo->Name = L"txtmostrararreglo";
			this->txtmostrararreglo->Size = System::Drawing::Size(190, 390);
			this->txtmostrararreglo->TabIndex = 3;
			this->txtmostrararreglo->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(37, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Números generados";
			// 
			// txtnumabuscar
			// 
			this->txtnumabuscar->Location = System::Drawing::Point(720, 100);
			this->txtnumabuscar->Name = L"txtnumabuscar";
			this->txtnumabuscar->Size = System::Drawing::Size(100, 22);
			this->txtnumabuscar->TabIndex = 5;
			// 
			// txtbuscar
			// 
			this->txtbuscar->BackColor = System::Drawing::Color::Gray;
			this->txtbuscar->Location = System::Drawing::Point(720, 128);
			this->txtbuscar->Name = L"txtbuscar";
			this->txtbuscar->Size = System::Drawing::Size(101, 28);
			this->txtbuscar->TabIndex = 6;
			this->txtbuscar->Text = L"Buscar";
			this->txtbuscar->UseVisualStyleBackColor = false;
			this->txtbuscar->Click += gcnew System::EventHandler(this, &MyForm::txtbuscar_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(597, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Número a buscar";
			// 
			// txtmos
			// 
			this->txtmos->BackColor = System::Drawing::Color::Silver;
			this->txtmos->Location = System::Drawing::Point(309, 205);
			this->txtmos->Name = L"txtmos";
			this->txtmos->Size = System::Drawing::Size(511, 219);
			this->txtmos->TabIndex = 8;
			this->txtmos->Text = L"";
			// 
			// txtlimpiar
			// 
			this->txtlimpiar->BackColor = System::Drawing::Color::Gray;
			this->txtlimpiar->Location = System::Drawing::Point(309, 450);
			this->txtlimpiar->Name = L"txtlimpiar";
			this->txtlimpiar->Size = System::Drawing::Size(502, 40);
			this->txtlimpiar->TabIndex = 9;
			this->txtlimpiar->Text = L"Limpiar todo";
			this->txtlimpiar->UseVisualStyleBackColor = false;
			this->txtlimpiar->Click += gcnew System::EventHandler(this, &MyForm::txtlimpiar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(861, 517);
			this->Controls->Add(this->txtlimpiar);
			this->Controls->Add(this->txtmos);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtbuscar);
			this->Controls->Add(this->txtnumabuscar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtmostrararreglo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txttam);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Búsqueda de un número";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int* arr = new int[10000000];
		Random r;
		clock_t t;
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		
		for (int i = 0; i < Convert::ToInt32(txttam->Text); i++) {

			arr[i] = r.Next(1, 101);
		}
		txtmostrararreglo->Text = " ";
		for (int i = 0; i < Convert::ToInt32(txttam->Text); i++) {

			txtmostrararreglo->Text = txtmostrararreglo->Text + "\n Número =" + arr[i];
			
		}
		t = clock();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void txtbuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int dato,i,inf=0,sup=Convert::ToInt32(txttam->Text),mitad;
		char band = 'F';
		
		dato = Convert::ToInt32(txtnumabuscar->Text);
		
			//Busqueda secuencial

			for (i = 0; i < Convert::ToInt32(txttam->Text); i++) {
				t = clock() - t;
				arr[i];
				if (arr[i] == dato) {
					txtmos->Text = txtmos->Text + "Valor en la posicion (Sec): " + (i)+" en un tiempo de: " + float(t) / CLOCKS_PER_SEC + " segundos";
				}

			}

			//busqueda binaria
			while (inf <= sup) {
				t = clock() - t;
				mitad = (inf + sup) / 2;

				if (arr[mitad] == dato) {
					band = 'V';
					break;
				}
				if (arr[mitad] > dato) {
					sup = mitad;
					mitad = (inf + sup) / 2;
				}
				if (arr[mitad] < dato) {
					inf = mitad;
					mitad = (inf + sup) / 2;
				}
			}

			if (band == 'V') {

				txtmos->Text = txtmos->Text + "\nValor en la pasicion (BIN): " + mitad + " en un tiempo de : " + float(t) / CLOCKS_PER_SEC + " segundos";
			}


			//busqueda hash//
			int vec[100];
			for (int i = 0; i < Convert::ToInt32(txttam->Text); i++) {
				t = clock() - t;
				vec[arr[i] % 100] = arr[i];

			}

			txtmos->Text = txtmos->Text + "\nValor en la pasicion (Hash): " + BusquedaHash(vec, 100, dato) + " en un tiempo de : " + float(t) / CLOCKS_PER_SEC + " segundos";
		
		
	}
		   int BusquedaHash(int arreglo[], int count, int value) {

			   if (arreglo[value % count] == value)
				   return (value % count);
			   else
				   return -1;
		   }

private: System::Void txtlimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	txtmostrararreglo->Clear();
	txttam->Clear();
	txtmos->Clear();
	txtnumabuscar->Clear();
}
};
}
