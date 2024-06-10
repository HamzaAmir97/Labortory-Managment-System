#include<Windows.h>
#include"MyForm1.h"

#include"classes.h"
using namespace std;
using namespace System :: IO;
//ifstream infile;

 namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^  progressBar1;

	protected: 





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::Fuchsia;
			this->progressBar1->Location = System::Drawing::Point(138, 518);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(427, 47);
			this->progressBar1->TabIndex = 0;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(766, 660);
			this->ControlBox = false;
			this->Controls->Add(this->progressBar1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeftLayout = true;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
				 private: System::Void pictureBox1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
	private: System::Void MyForm_Shown(System::Object^  sender, System::EventArgs^  e) {

				  for(int i=0;i<100;i++){
					 Sleep(100);
					 progressBar1->Value=i;


				 }

				   
					 MyForm1 ^a=gcnew MyForm1();
					 a->Show();
				
				 				 MyForm::Visible=false;

				 
				 }
	
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
         
		string s;
			

			infile.open("tests-name.txt");
				infile>>s;

			if(!s.empty()){
			tnc=0;
			while(!infile.eof()){
			
			te.setname(s,tnc++);
				infile>>s;

			
			
			}
			infile.close();
			}
		
			infile.open("tests-num.txt");
				infile>>s;

			if(!s.empty()){
			tnuc=0;
			
			while(!infile.eof()){
			
			te.setnum(s,tnuc++);

				infile>>s;

			
			}
			infile.close();


			}
			
			infile.open("tests-costs.txt");
				infile>>s;

			if(!s.empty()){
			tcc=0;
			while(!infile.eof()){
		
			te.setcost(s,tcc++);
				infile>>s;

			
			}
			infile.close();
			}

			
			
			infile.open("tests-result.txt");
			infile>>s;
			if(!s.empty()){
				trec=0;
			while(!infile.eof()){
			
			te.setres(s,trec++);

			infile>>s;
			
			}
			infile.close();
			}
			////////////////////
			infile.open("pat-name.txt");
			infile>>s;

			if(!s.empty()){
			Pnc=0;
			while(!infile.eof()){
			
			Pat.setname(s,Pnc++);
			infile>>s;
			
			
			}
			infile.close();

			}

			infile.open("Pat-pass.txt");
			infile>>s;

			if(!s.empty()){
				Ppc=0;
			while(!infile.eof()){
			Pat.setpass(s,Ppc++);
			infile>>s;

			
			
			}
			infile.close();
			}
			
			infile.open("Pat-Age.txt");
			infile>>s;

			if(!s.empty()){
				Pac=0;
			
			while(!infile.eof()){
			
			Pat.setAge(s,Pac++);

			infile>>s;

			
			}
			infile.close();

			}
			
			infile.open("Weidth.txt");

			infile>>s;

			if(!s.empty()){
				Pwc=0;
			
			while(!infile.eof()){
			
			Pat.setweidth(s,Pwc++);
			infile>>s;

			
			
			}
			infile.close();

			}

		
				
			//////////////////////
			/////////////////////

			String ^S ;
			StreamReader ^ sr= File::OpenText("u-names.txt");
			
			  while(!sr->EndOfStream){
				S =sr->ReadLine();
			s=marshal_as<std::string>(S);
						us.setname(s);

			}
			  
		      sr= File::OpenText("u-pass.txt");

			  
			  while(!sr->EndOfStream){
				S =sr->ReadLine();
			s=marshal_as<std::string>(S);
						us.setpass(s);

			}
		/*	infile.open("users.txt");
		
			if(!infile.eof()){
			
			
			while(!infile.eof()){
			infile>>s;
			us.setname(s);

			
			
			}
			infile.close();
			
	}
			/////readpass
			

			infile.open("u-pass.txt");
		
			if(!infile.eof()){
			
			
			while(!infile.eof()){
			infile>>s;
			us.setpass(s);

			
			
			}
			infile.close();
		
			}
				*/	
			/////////////////////
			////////////////////

			 }
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

};
}
