#include<windows.h>
#include"messege1.h"
#include<msclr\marshal_cppstd.h>
using namespace msclr::interop;

using namespace System::IO;
#pragma once

namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for patinet
	/// </summary>
	public ref class patinet : public System::Windows::Forms::Form
	{
	public:
		patinet(void)
		{
			InitializeComponent();
			timer1->Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~patinet()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(patinet::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(97, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Patinet Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cooper Std Black", 18, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(97, 235);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 36);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &patinet::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cooper Std Black", 18, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(101, 326);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 36);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(116, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Patinet Age";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cooper Std Black", 18, System::Drawing::FontStyle::Bold));
			this->textBox3->Location = System::Drawing::Point(97, 433);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(148, 36);
			this->textBox3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Location = System::Drawing::Point(97, 399);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Patinet Weidth";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Cooper Std Black", 18, System::Drawing::FontStyle::Bold));
			this->textBox4->Location = System::Drawing::Point(304, 235);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 36);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &patinet::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Location = System::Drawing::Point(304, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 22);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Patinet ph.number";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Cooper Std Black", 18, System::Drawing::FontStyle::Bold));
			this->textBox5->Location = System::Drawing::Point(304, 326);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(148, 36);
			this->textBox5->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label6->Location = System::Drawing::Point(304, 292);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(180, 22);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Patinet Addreass";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Cooper Std Black", 18, System::Drawing::FontStyle::Bold));
			this->textBox6->Location = System::Drawing::Point(304, 433);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(148, 36);
			this->textBox6->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label7->Location = System::Drawing::Point(304, 399);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(154, 22);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Doctor\'s Name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label8->Location = System::Drawing::Point(545, 201);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 22);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Famly\'s test";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Forte", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(549, 235);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(153, 29);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &patinet::comboBox1_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label9->Location = System::Drawing::Point(545, 292);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 22);
			this->label9->TabIndex = 15;
			this->label9->Text = L" test name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(837, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(56, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &patinet::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->button1->Location = System::Drawing::Point(763, 484);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 66);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &patinet::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Forte", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(549, 326);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(153, 29);
			this->comboBox2->TabIndex = 19;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &patinet::comboBox2_SelectedIndexChanged_1);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label10->Location = System::Drawing::Point(545, 399);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(99, 22);
			this->label10->TabIndex = 20;
			this->label10->Text = L" test cost";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Cooper Std Black", 18, System::Drawing::FontStyle::Bold));
			this->textBox7->Location = System::Drawing::Point(549, 433);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(148, 36);
			this->textBox7->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12.75F, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::Coral;
			this->label11->Location = System::Drawing::Point(678, 156);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 21);
			this->label11->TabIndex = 22;
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label11->Click += gcnew System::EventHandler(this, &patinet::label11_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &patinet::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12.75F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Coral;
			this->label1->Location = System::Drawing::Point(76, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 21);
			this->label1->TabIndex = 23;
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// patinet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(905, 562);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->MaximizeBox = false;
			this->Name = L"patinet";
			this->RightToLeftLayout = true;
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &patinet::patinet_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

				 patinet::Visible=false;


  			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			





		 
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ filename;
			 StreamReader ^din;
			 String^ st;

			 if(comboBox1->SelectedItem->Equals("Heamatology"))
			 {
				 filename="Heamatology.txt";
			     din=File::OpenText(filename);
				 comboBox2->Items->Clear();
				 for(int i=0;;i++){
					 st=din->ReadLine();

					 comboBox2->Items->Insert(i,st);

					 if(din->EndOfStream)
						 break;
				 }
				 din->Close();
             }
			 
			 else if (comboBox1->SelectedItem->Equals("BIOCHEMISTRY")){
				  comboBox2->Items->Clear();
				  filename="BIOCHEMISTRY.txt";
				  din=File::OpenText(filename);
				  comboBox2->Items->Clear();

				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }


			 }

		 	 
			 else if (comboBox1->SelectedItem->Equals("BIOCHEMISTRY")){
				  comboBox2->Items->Clear();
				  filename="BIOCHEMISTRY.txt";
				  din=File::OpenText(filename);
				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }	 
			 }

			 else if (comboBox1->SelectedItem->Equals("HORMON")){
				  comboBox2->Items->Clear();
				  filename="HORMON.txt";
				  din=File::OpenText(filename);
				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }
                			 din->Close();

			 }
			 ////////////////////
			 
			 else if (comboBox1->SelectedItem->Equals("MICROBIOLOGY")){
				  comboBox2->Items->Clear();
				  filename="MICROBIOLOGY.txt";
				  din=File::OpenText(filename);
				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }
              			 din->Close();

			 }
			 //////////////////////
			 else if (comboBox1->SelectedItem->Equals("SEROLOGY")){
				  comboBox2->Items->Clear();
				  filename="SEROLOGY.txt";
				  din=File::OpenText(filename);
				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }
              			 din->Close();

			 }
			 //////////////////////////////
			 else if (comboBox1->SelectedItem->Equals("MICROBIOLOGY")){
				  comboBox2->Items->Clear();
				  filename="MICROBIOLOGY.txt";
				  din=File::OpenText(filename);
				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }
              			 din->Close();

			 }
			 //////////////////////
			 else if (comboBox1->SelectedItem->Equals("BODY FLUID")){
				  comboBox2->Items->Clear();
				  filename="BODY FLUID.txt";
				  din=File::OpenText(filename);
				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }
              			 din->Close();

			 }
			////////////////////////
			  else if (comboBox1->SelectedItem->Equals("BLOOD TRANSFUSION")){
				  comboBox2->Items->Clear();
				  filename="BLOOD TRANSFUSION.txt";
				  din=File::OpenText(filename);
				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }
              			 din->Close();

			 }
			  ///////////////////////
			  else if (comboBox1->SelectedItem->Equals("TUMOR MARKERS")){
				  comboBox2->Items->Clear();
				  filename="TUMOR MARKERS.txt";
				  din=File::OpenText(filename);
				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }
              			 din->Close();

			 }
			//////////////////////
			  else if (comboBox1->SelectedItem->Equals("IMMUNOLOGY")){
				  comboBox2->Items->Clear();
				  filename="IMMUNOLOGY.txt";
				  din=File::OpenText(filename);
				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }
              			 din->Close();

			 }
			  /////////////////////
			  else if (comboBox1->SelectedItem->Equals("INFECTIOS DISEASE(ELISA)")){
				  comboBox2->Items->Clear();
				  filename="INFECTIOS DISEASE(ELISA).txt";
				  din=File::OpenText(filename);
				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }
              			 din->Close();

			 }
			  ////////////////////////////
			    else if (comboBox1->SelectedItem->Equals("ROUTINE TEST")){
				  comboBox2->Items->Clear();
				  filename="ROUTINE TEST.txt";
				  din=File::OpenText(filename);
				  for(int i=0;;i++){
				  
					 st=din->ReadLine();

			     comboBox2->Items->Insert(i,st);

				 
					 if(din->EndOfStream)
						 break;
				

			 }
              			 din->Close();

			 }
				////////////////////


		 }
private: System::Void patinet_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			  comboBox1->Items->Insert(0,"Heamatology");
			 comboBox1->Items->Insert(1,"BIOCHEMISTRY");
		     comboBox1->Items->Insert(2,"HORMON");
			 comboBox1->Items->Insert(3,"MICROBIOLOGY");
			 comboBox1->Items->Insert(4,"SEROLOGY");
			 comboBox1->Items->Insert(5,"BODY FLUID");
			 comboBox1->Items->Insert(6,"BLOOD TRANSFUSION");
			 comboBox1->Items->Insert(7,"TUMOR MARKERS");
			 comboBox1->Items->Insert(8,"IMMUNOLOGY");
			 comboBox1->Items->Insert(9,"INFECTIOS DISEASE(ELISA)");
			 comboBox1->Items->Insert(10,"ROUTINE TEST");
		
		 }


private: System::Void comboBox2_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {

			 if(comboBox1->SelectedIndex==0)
				 textBox7->Text="5 $ ";
			 if(comboBox1->SelectedIndex==1)
				 textBox7->Text="10 $ ";
			 if(comboBox1->SelectedIndex==2)
				 textBox7->Text="15 $ ";
			 else if(comboBox1->SelectedIndex==3)
				 textBox7->Text="20 $ ";
			 else if(comboBox1->SelectedIndex==4)
				 textBox7->Text="25 $ ";
			 else if(comboBox1->SelectedIndex==5)
				 textBox7->Text="10 $ ";
			 else if(comboBox1->SelectedIndex==6)
				 textBox7->Text="14 $ ";
			 else if(comboBox1->SelectedIndex==7)
				 textBox7->Text="15 $ ";
			 else  if(comboBox1->SelectedIndex==8)
				 textBox7->Text="20 $ ";
			 else if(comboBox1->SelectedIndex==9)
				 textBox7->Text="10 $ ";
			 else if(comboBox1->SelectedIndex==10)
				 textBox7->Text="10 $ ";

		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ file1="pat-sheet.txt";
			 StreamWriter^ s =gcnew StreamWriter(file1);

			 s->WriteLine(textBox1->Text);
			 Pat.setname(marshal_as<std::string>(textBox1->Text),Pnc++);
		
			 s->WriteLine(textBox2->Text);
			 Pat.setAge(marshal_as<std::string>(textBox2->Text),Pac++);
			 s->WriteLine(textBox3->Text);
		Pat.setweidth(marshal_as<std::string>(textBox3->Text),Pwc++);
			 s->WriteLine(textBox4->Text);
			 Pat.setpass(marshal_as<std::string>(textBox4->Text),Ppc++);
		
			 s->WriteLine(textBox5->Text);
		Pat.setAddreass(marshal_as<std::string>(textBox5->Text));
			 s->WriteLine(textBox6->Text);
		Pat.setDoctor(marshal_as<std::string>(textBox6->Text),Pdc++);
			 s->WriteLine(textBox7->Text);
		te.setcost(marshal_as<std::string>(textBox7->Text),tcc++);
			 s->WriteLine(comboBox2->SelectedItem);
		te.setname(marshal_as<std::string>(comboBox2->Text),tnc++);
			 s->WriteLine(label11->Text);
			 te.setnum(marshal_as<std::string>(label1->Text),tnuc++);
			 s->Close();
			 messege1^a=gcnew messege1();
			 a->Show();
			 textBox1->Text="  ";
			 textBox2->Text="  ";
			 textBox3->Text="  ";
			 textBox4->Text="  ";
			 textBox5->Text="  ";
			 textBox6->Text="  ";
			 textBox7->Text="  ";




		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 			 label11->Text=DateTime::Now.ToLongDateString();
	                      label1->Text=DateTime::Now.ToLongTimeString();

		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
