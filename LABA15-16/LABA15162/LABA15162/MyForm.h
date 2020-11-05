#pragma once

namespace LABA15162 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  Km;
	private: System::Windows::Forms::TextBox^  Gaz;
	private: System::Windows::Forms::TextBox^  PriceGaz;
	private: System::Windows::Forms::TextBox^  Price;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  CountTravel;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Km = (gcnew System::Windows::Forms::TextBox());
			this->Gaz = (gcnew System::Windows::Forms::TextBox());
			this->PriceGaz = (gcnew System::Windows::Forms::TextBox());
			this->Price = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->CountTravel = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 148);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Km
			// 
			this->Km->Location = System::Drawing::Point(239, 10);
			this->Km->Name = L"Km";
			this->Km->Size = System::Drawing::Size(100, 20);
			this->Km->TabIndex = 1;
			// 
			// Gaz
			// 
			this->Gaz->Location = System::Drawing::Point(191, 42);
			this->Gaz->Name = L"Gaz";
			this->Gaz->Size = System::Drawing::Size(100, 20);
			this->Gaz->TabIndex = 2;
			// 
			// PriceGaz
			// 
			this->PriceGaz->Location = System::Drawing::Point(107, 68);
			this->PriceGaz->Name = L"PriceGaz";
			this->PriceGaz->Size = System::Drawing::Size(100, 20);
			this->PriceGaz->TabIndex = 3;
			// 
			// Price
			// 
			this->Price->Location = System::Drawing::Point(250, 124);
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(100, 20);
			this->Price->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Кол-во пройденных километров:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Расход бензина на 100км:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Цена бензина:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(247, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Цена поездки";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 18);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Кол-во поездок:";
			// 
			// CountTravel
			// 
			this->CountTravel->Location = System::Drawing::Point(124, 92);
			this->CountTravel->Name = L"CountTravel";
			this->CountTravel->Size = System::Drawing::Size(100, 20);
			this->CountTravel->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(87, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Пример";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 306);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->CountTravel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Price);
			this->Controls->Add(this->PriceGaz);
			this->Controls->Add(this->Gaz);
			this->Controls->Add(this->Km);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			double km, pricegaz, gaz, price, counttravel;
			km = Convert::ToDouble(Km->Text);
			gaz = Convert::ToDouble(Gaz->Text);
			pricegaz = Convert::ToDouble(PriceGaz->Text);
			if (CountTravel->Text == "")
				counttravel = 1;
			else
				counttravel = Convert::ToDouble(CountTravel->Text);
			gaz = gaz / 100;
			price = gaz * km * pricegaz * counttravel;
			Price->Text = price.ToString("n");
		}
		catch (System::FormatException^ex) {
			MessageBox::Show("Заполните все поля.", "Ошибка!",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	double km = 240, pricegaz = 16.5, gaz = 8.4, price, counttravel = 1;
	Km->Text = km.ToString();
	PriceGaz->Text = pricegaz.ToString("n");
	Gaz->Text = gaz.ToString("n");
	gaz = gaz / 100;
	price = gaz * km * pricegaz * counttravel;
	Price->Text = price.ToString("n");
}
};
}
