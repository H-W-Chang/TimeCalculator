#pragma once
#include <ctime>
#include <iostream>
#include "DateAndTime.h"

namespace TimeCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// MainForm 的摘要
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;












	private: System::Windows::Forms::Label^  label8;






	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button3;



	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(120, 61);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(0, 0, 20, 0);
			this->label1->Size = System::Drawing::Size(65, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Year";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(196, 61);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(0, 0, 7, 0);
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Month";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(272, 61);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 0, 20, 0);
			this->label3->Size = System::Drawing::Size(60, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Day";
			this->label3->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(348, 61);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(0, 0, 18, 0);
			this->label4->Size = System::Drawing::Size(65, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Hour";
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(424, 61);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(0, 0, 3, 0);
			this->label5->Size = System::Drawing::Size(65, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Minute";
			this->label5->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(500, 61);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(0, 0, 3, 0);
			this->label6->Size = System::Drawing::Size(65, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Second";
			this->label6->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->button1->Location = System::Drawing::Point(596, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Current Time";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(56, 216);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(0, 0, 3, 0);
			this->label8->Size = System::Drawing::Size(59, 20);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Result";
			this->label8->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->button2->Location = System::Drawing::Point(124, 265);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 33);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Calculate";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(124, 104);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(70, 25);
			this->numericUpDown1->TabIndex = 4;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(200, 104);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(70, 25);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(276, 104);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(70, 25);
			this->numericUpDown3->TabIndex = 4;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(352, 104);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(70, 25);
			this->numericUpDown4->TabIndex = 4;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(428, 104);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(70, 25);
			this->numericUpDown5->TabIndex = 4;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MainForm::numericUpDown5_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(504, 104);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(70, 25);
			this->numericUpDown6->TabIndex = 4;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(124, 155);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, System::Int32::MinValue });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(70, 25);
			this->numericUpDown7->TabIndex = 4;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(200, 155);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, System::Int32::MinValue });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(70, 25);
			this->numericUpDown8->TabIndex = 4;
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(276, 155);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, System::Int32::MinValue });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(70, 25);
			this->numericUpDown9->TabIndex = 4;
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(352, 155);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numericUpDown10->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, System::Int32::MinValue });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(70, 25);
			this->numericUpDown10->TabIndex = 4;
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(428, 155);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numericUpDown11->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, System::Int32::MinValue });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(70, 25);
			this->numericUpDown11->TabIndex = 4;
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(504, 155);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numericUpDown12->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, System::Int32::MinValue });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(70, 25);
			this->numericUpDown12->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 211);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 25);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(200, 211);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(70, 25);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(276, 211);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(70, 25);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(352, 211);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(70, 25);
			this->textBox4->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(428, 211);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(70, 25);
			this->textBox5->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(504, 211);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(70, 25);
			this->textBox6->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->button3->Location = System::Drawing::Point(276, 265);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 32);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Clear All";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(880, 439);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->numericUpDown12);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown11);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"Time Calculator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		DateAndTime date(numericUpDown1->Value, numericUpDown2->Value, numericUpDown3->Value,
			numericUpDown4->Value, numericUpDown5->Value, numericUpDown6->Value);
		int remainDay = date.calculateTime(Decimal::ToInt32(numericUpDown10->Value),
			Decimal::ToInt32(numericUpDown11->Value), Decimal::ToInt32(numericUpDown12->Value));
		date.calculateDate(Decimal::ToInt32(numericUpDown7->Value),
			Decimal::ToInt32(numericUpDown8->Value),
			Decimal::ToInt32(numericUpDown9->Value), remainDay);
		textBox1->Text = intToString(date.get("year"));
		textBox2->Text = intToString(date.get("month"));
		textBox3->Text = intToString(date.get("day"));
		textBox4->Text = intToString(date.get("hour"));
		textBox5->Text = intToString(date.get("minute"));
		textBox6->Text = intToString(date.get("second"));

	}

	private: String ^ intToString(int num) {
		String ^ str;
		str = System::Convert::ToString(num);
		return str;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		time_t timer;
		struct tm *t;
		time(&timer);
		t = localtime(&timer);
		numericUpDown1->Value = Convert::ToDecimal(t->tm_year + 1900);
		numericUpDown2->Value = Convert::ToDecimal(t->tm_mon + 1);
		numericUpDown3->Value = Convert::ToDecimal(t->tm_mday);
		numericUpDown4->Value = Convert::ToDecimal(t->tm_hour);
		numericUpDown5->Value = Convert::ToDecimal(t->tm_min);
		numericUpDown6->Value = Convert::ToDecimal(t->tm_sec);
	}

	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		numericUpDown1->Value = Convert::ToDecimal(0);
		numericUpDown2->Value = Convert::ToDecimal(1);
		numericUpDown3->Value = Convert::ToDecimal(1);
		numericUpDown4->Value = Convert::ToDecimal(0);
		numericUpDown5->Value = Convert::ToDecimal(0);
		numericUpDown6->Value = Convert::ToDecimal(0);
		numericUpDown7->Value = Convert::ToDecimal(0);
		numericUpDown8->Value = Convert::ToDecimal(0);
		numericUpDown9->Value = Convert::ToDecimal(0);
		numericUpDown10->Value = Convert::ToDecimal(0);
		numericUpDown11->Value = Convert::ToDecimal(0);
		numericUpDown12->Value = Convert::ToDecimal(0);
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
	}
	};
}
