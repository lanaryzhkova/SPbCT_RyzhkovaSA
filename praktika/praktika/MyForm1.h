#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <vector>
//#include "Vector.h"
#include <fstream>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <algorithm>
#include <string>
using namespace std;


namespace praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	static int values[15][15];

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	protected:

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(85, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Создать файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(65, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Заполнить файл числами";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(111, 119);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(125, 79);
			this->dataGridView1->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(63, 204);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 37);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Прибавить к числам гл. диагонали 3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(50, 247);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(186, 133);
			this->dataGridView2->TabIndex = 4;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 416);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//const char* fName = "massiv.txt";
		//ofstream out;
		//out.open(fName);
		//if (!out.is_open()) // если файл по каким-либо причинам не открыт или не создан.
		//{
		//	MessageBox::Show("Ошибка");
		//}
		//out.close();
		FILE* f = fopen("massiv.txt", "w");
		fclose(f);
	}
	public :
		void FillMassiv()
		   {
			   		srand(time(0));
					for (int i = 0; i < 10; i++)
					{
						for (int j = 0; j < 10; j++)
						{
							values[i][j] = rand()%10;
						}
					}
		   }
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->RowCount = 10;
		dataGridView1->ColumnCount = 10;
		srand(time(0));
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				values[i][j] = rand() % 10;
			}
		}
		FILE* f = fopen("massiv.txt", "w");
		fprintf(f, "Исходный массив:");
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				fprintf(f, "%d\t", values[i][j]);
				/*dataGridView1->Rows[j]->Cells[i]->Value = values[i][j];*/
			}
			fprintf(f, "\n");
		}
		fprintf(f, "\n");
		
fclose(f);

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView2->RowCount = 10;
		dataGridView2->ColumnCount = 10;
		FILE* f = fopen("massiv+3.txt", "w");

		for (int i = 0; i < 10; i++)
		{
			values[i][i] += 3;
		}
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				fprintf(f, "%d\t", values[i][j]);

				//dataGridView2->Rows[j]->Cells[i]->Value = values[i][j];

			}
			fprintf(f, "\n");
		}
		fclose(f);
	}

};
}
