#include<Windows.h>
#include"classes.h"
#include<fstream>
#include"MyForm3.h"
#include"patinet.h"
#include"searchpatinet.h"
#include"getpatsheet.h"
#include"testsearch.h"
using namespace std;

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
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::ComponentModel::IContainer^  components;






	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::MintCream;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(905, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(56, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Forte", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(372, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 26);
			this->label1->TabIndex = 5;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Forte", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(362, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 30);
			this->label2->TabIndex = 6;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Cornsilk;
			this->button2->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(79, 342);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(184, 67);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Add Patinet";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Cornsilk;
			this->button3->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(316, 342);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(184, 67);
			this->button3->TabIndex = 8;
			this->button3->Text = L"search about patinet";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Cornsilk;
			this->button4->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(540, 342);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(184, 67);
			this->button4->TabIndex = 9;
			this->button4->Text = L"search about test";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Cornsilk;
			this->button5->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(79, 475);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(184, 67);
			this->button5->TabIndex = 10;
			this->button5->Text = L"get a patinet sheet";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Cornsilk;
			this->button6->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(316, 475);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(184, 67);
			this->button6->TabIndex = 11;
			this->button6->Text = L"change to them2";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Forte", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(175, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 26);
			this->label3->TabIndex = 12;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm2::label3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(769, 596);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(180, 76);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Forte", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(273, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 26);
			this->label4->TabIndex = 14;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::label4_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm2::timer1_Tick);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(960, 672);
			this->ControlBox = false;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(976, 688);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(976, 688);
			this->Name = L"MyForm2";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
				
string a;
String ^filename ="textfile.txt";

StreamReader^ din= File::OpenText(filename);
String ^str;

str=din->ReadLine();
	label2->Text=str;
	din->Close();

			 }
	private: System::Void maskedTextBox1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
            String ^f="tests-name.txt";
			string s;
			String^ S;
			StreamWriter^ W=gcnew StreamWriter(f);
			for(int i=0 ;i<50;i++){
			s=te.getname(i);

			S=gcnew String (s.c_str());
			W->WriteLine(S);

			}
			W->Close();
			f="tests-num.txt";
			W=gcnew StreamWriter(f);
			for(int i=0 ;i<50;i++){
			s=te.getnum(i);
		
			S=gcnew String (s.c_str());
			W->WriteLine(S);

			}
            W->Close();
			f="tests-costs.txt";
			W=gcnew StreamWriter(f);
			for(int i=0 ;i<50;i++){
			s=te.getcost(i);
		
			S=gcnew String (s.c_str());
			W->WriteLine(S);

			}
            W->Close();
			f="pat-name.txt";
			W=gcnew StreamWriter(f);
			for(int i=0 ;i<50;i++){
			s=Pat.getname(i);
			S=gcnew String (s.c_str());
			W->WriteLine(S);

			}
			W->Close();
			f="Pat-pass.txt";
			W=gcnew StreamWriter(f);
			for(int i=0 ;i<50;i++){
			s=Pat.getpass(i);
		
			S=gcnew String (s.c_str());
			W->WriteLine(S);

			}
			W->Close();
             exit(0);
			 

			 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			 MyForm3 ^a=gcnew MyForm3();
			 a->Show();
			 MyForm2::Visible=false;

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 patinet ^d=gcnew patinet();
			 d->Show();

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 searchpatinet ^a=gcnew searchpatinet();
			 a->Show();


		 }
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dateTimePicker1_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 getpatsheet^ a=gcnew getpatsheet();
			 a->Show();

		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 						 MyForm2::Visible=false;

		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			 DateTime d=DateTime::Now;
	DateTime t=DateTime::Now;
	label3->Text=d.ToLongDateString();
  	label4->Text=t.ToLongTimeString();
	//textBox1->Text=t.ToLongTimeString();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 testsearch ^a= gcnew testsearch();
			 a->Show();

      
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
