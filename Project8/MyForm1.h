#include<Windows.h>
#include"MyForm2.h"
#include"classes.h"
#include"PatForm.h"
#include<string>
using namespace System::IO;

#pragma once
namespace Project8  {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::MintCream;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(904, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(56, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Centaur", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(401, 512);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(207, 32);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(59, 631);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 30);
			this->textBox1->TabIndex = 5;
			this->textBox1->UseSystemPasswordChar = true;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(751, 629);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 30);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(433, 600);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 46);
			this->button1->TabIndex = 7;
			this->button1->Text = L"login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkCyan;
			this->label1->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(356, 568);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(0, 22);
			this->label1->TabIndex = 8;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(348, 512);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(36, 32);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox2_Click_1);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(960, 672);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(976, 688);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(976, 688);
			this->Name = L"MyForm1";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				

			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

    
			o.open("tests-name.txt",ios::trunc);
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<te.getname(i)<<endl;

			}
			o.close();

			///////////////////
			o.open("tests-num.txt",ios::trunc);
			o.clear();
			
			
			for(int i=0 ;i<50;i++){
			o<<te.getnum(i)<<endl;

			}
			o.close();

			///////////
			o.open("tests-costs.txt",ios::trunc);
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<te.getcost(i)<<endl;

			}
			o.close();
			/////////////
			o.open("tests-result.txt",ios::trunc);
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<te.getres(i)<<endl;

			}
			o.close();
			////////////////////
			o.open("pat-name.txt",ios::trunc);
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<Pat.getname(i)<<endl;

		}
			o.close();
			//////////////
			o.open("Pat-pass.txt",ios::trunc);
			
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<Pat.getpass(i)<<endl;

			}
			o.close();
			///////////////
			
			o.open("Pat-Age.txt",ios::trunc);
			
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<Pat.getAge(i)<<endl;

			}
			o.close();
			///////////////
			
			o.open("Weidth.txt",ios::trunc);
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<Pat.getWeight(i)<<endl;

			}
			o.close();
			///////////////

			
			o.open("Pat-Doc.txt",ios::trunc);
				o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<Pat.getDoctor(i)<<endl;

			}
			o.close();
			///////////////
             exit(0);
			 			 }
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
			
			 comboBox1->Items->Insert(0,"User");
			 comboBox1->Items->Insert(1,"Patinet");
			  ///////////////////////////////////
			



		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			  label1->Text="   ";
			 
			 StreamWriter ^ sw=gcnew StreamWriter("textfile.txt");
			 sw->WriteLine(textBox2->Text);
			 sw->Close();
			
             ///cheek login
			 if(comboBox1->SelectedItem->Equals("User"))
			 {
				
				
				 if(us.comp_name(marshal_as<std::string>(textBox2->Text))&&us.comp_pass(marshal_as<std::string>(textBox1->Text))){
					if(us.getindex_name(marshal_as<std::string>(textBox2->Text))==us.getindex_pass(marshal_as<std::string>(textBox1->Text)))
				 {
					 MyForm2 ^c=gcnew MyForm2();
			 c->Show();
			 

			 }
				 }

			 


			 else
				 label1->Text="invild user name or password";

			 }
			 ////check2
			  else if(comboBox1->SelectedItem->Equals("Patinet"))
			 {
				
				
				 if(Pat.comp_name(marshal_as<std::string>(textBox2->Text))&&Pat.comp_pass(marshal_as<std::string>(textBox1->Text))){
					if(Pat.getindex_name(marshal_as<std::string>(textBox2->Text))==Pat.getindex_pass(marshal_as<std::string>(textBox1->Text)))
				 {
					 PatForm ^c=gcnew PatForm();
			           c->Show();
			 

			 }
				 }

			 


			 else
				 label1->Text="invild user name or password";

			 }

            
			 else
				 label1->Text="invild user name or password";
        








		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 


		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 MyForm1^a=gcnew MyForm1();
		    MyForm1::Visible=false;
			
		      a->Show();
			 

		 }
};
}
