#pragma once
#include <iostream>
#include <map>
#include <msclr\marshal_cppstd.h>
#include <boost/tokenizer.hpp>

namespace TodoList {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  dateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  neuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  speichernToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ladenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuLoadCat;

	private: System::Windows::Forms::ToolStripMenuItem^  alleKategorienToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  schließenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hilfeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::String^ fullPath = "p:\\MyApplications\\TodoList\\categories\\";
		System::String^ path;
		TextBox^ addTodos;
		TextBox^ catName;

	private: System::Windows::Forms::ToolStripMenuItem^  todosHinzufügenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kategorieHinzufügenToolStripMenuItem;
	private: System::Windows::Forms::Panel^  todoPanel;
	private: System::Windows::Forms::Panel^  addPanel;
	private: System::Windows::Forms::ToolStripMenuItem^  beendenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  löschenToolStripMenuItem;


			 unsigned int numberTodos;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->neuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->todosHinzufügenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kategorieHinzufügenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->speichernToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ladenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuLoadCat = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alleKategorienToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->löschenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->schließenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->beendenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hilfeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->todoPanel = (gcnew System::Windows::Forms::Panel());
			this->addPanel = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->dateToolStripMenuItem,
					this->hilfeToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1205, 27);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// dateToolStripMenuItem
			// 
			this->dateToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->neuToolStripMenuItem,
					this->speichernToolStripMenuItem, this->ladenToolStripMenuItem, this->löschenToolStripMenuItem, this->schließenToolStripMenuItem,
					this->beendenToolStripMenuItem
			});
			this->dateToolStripMenuItem->Name = L"dateToolStripMenuItem";
			this->dateToolStripMenuItem->Size = System::Drawing::Size(53, 23);
			this->dateToolStripMenuItem->Text = L"Datei";
			// 
			// neuToolStripMenuItem
			// 
			this->neuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->todosHinzufügenToolStripMenuItem,
					this->kategorieHinzufügenToolStripMenuItem
			});
			this->neuToolStripMenuItem->Name = L"neuToolStripMenuItem";
			this->neuToolStripMenuItem->Size = System::Drawing::Size(250, 24);
			this->neuToolStripMenuItem->Text = L"Neu";
			// 
			// todosHinzufügenToolStripMenuItem
			// 
			this->todosHinzufügenToolStripMenuItem->Name = L"todosHinzufügenToolStripMenuItem";
			this->todosHinzufügenToolStripMenuItem->ShortcutKeyDisplayString = L"Strg+N";
			this->todosHinzufügenToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->todosHinzufügenToolStripMenuItem->Size = System::Drawing::Size(359, 24);
			this->todosHinzufügenToolStripMenuItem->Text = L"Todos hinzufügen";
			this->todosHinzufügenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::todosHinzufügenToolStripMenuItem_Click);
			// 
			// kategorieHinzufügenToolStripMenuItem
			// 
			this->kategorieHinzufügenToolStripMenuItem->Name = L"kategorieHinzufügenToolStripMenuItem";
			this->kategorieHinzufügenToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::N));
			this->kategorieHinzufügenToolStripMenuItem->Size = System::Drawing::Size(359, 24);
			this->kategorieHinzufügenToolStripMenuItem->Text = L"Kategorie hinzufügen";
			this->kategorieHinzufügenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::kategorieHinzufügenToolStripMenuItem_Click);
			// 
			// speichernToolStripMenuItem
			// 
			this->speichernToolStripMenuItem->Name = L"speichernToolStripMenuItem";
			this->speichernToolStripMenuItem->ShortcutKeyDisplayString = L"Strg+S";
			this->speichernToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->speichernToolStripMenuItem->Size = System::Drawing::Size(250, 24);
			this->speichernToolStripMenuItem->Text = L"Speichern";
			this->speichernToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::speichernToolStripMenuItem_Click);
			// 
			// ladenToolStripMenuItem
			// 
			this->ladenToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuLoadCat,
					this->alleKategorienToolStripMenuItem
			});
			this->ladenToolStripMenuItem->Name = L"ladenToolStripMenuItem";
			this->ladenToolStripMenuItem->Size = System::Drawing::Size(250, 24);
			this->ladenToolStripMenuItem->Text = L"Laden";
			// 
			// menuLoadCat
			// 
			this->menuLoadCat->Name = L"menuLoadCat";
			this->menuLoadCat->RightToLeftAutoMirrorImage = true;
			this->menuLoadCat->ShortcutKeyDisplayString = L"Strg+O";
			this->menuLoadCat->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->menuLoadCat->Size = System::Drawing::Size(244, 24);
			this->menuLoadCat->Text = L"einzelne Kategorie";
			this->menuLoadCat->Click += gcnew System::EventHandler(this, &MyForm::menuLoadCat_Click);
			// 
			// alleKategorienToolStripMenuItem
			// 
			this->alleKategorienToolStripMenuItem->Enabled = false;
			this->alleKategorienToolStripMenuItem->Name = L"alleKategorienToolStripMenuItem";
			this->alleKategorienToolStripMenuItem->Size = System::Drawing::Size(244, 24);
			this->alleKategorienToolStripMenuItem->Text = L"alle Kategorien";
			// 
			// löschenToolStripMenuItem
			// 
			this->löschenToolStripMenuItem->Name = L"löschenToolStripMenuItem";
			this->löschenToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Delete));
			this->löschenToolStripMenuItem->Size = System::Drawing::Size(250, 24);
			this->löschenToolStripMenuItem->Text = L"Löschen";
			this->löschenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::löschenToolStripMenuItem_Click);
			// 
			// schließenToolStripMenuItem
			// 
			this->schließenToolStripMenuItem->Name = L"schließenToolStripMenuItem";
			this->schließenToolStripMenuItem->ShortcutKeyDisplayString = L"Strg+Leerzeichen";
			this->schließenToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Space));
			this->schließenToolStripMenuItem->Size = System::Drawing::Size(250, 24);
			this->schließenToolStripMenuItem->Text = L"Schließen";
			this->schließenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::schließenToolStripMenuItem_Click);
			// 
			// beendenToolStripMenuItem
			// 
			this->beendenToolStripMenuItem->Name = L"beendenToolStripMenuItem";
			this->beendenToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::End));
			this->beendenToolStripMenuItem->Size = System::Drawing::Size(250, 24);
			this->beendenToolStripMenuItem->Text = L"Beenden";
			this->beendenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::beendenToolStripMenuItem_Click);
			// 
			// hilfeToolStripMenuItem
			// 
			this->hilfeToolStripMenuItem->Enabled = false;
			this->hilfeToolStripMenuItem->Name = L"hilfeToolStripMenuItem";
			this->hilfeToolStripMenuItem->Size = System::Drawing::Size(48, 23);
			this->hilfeToolStripMenuItem->Text = L"Hilfe";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Enabled = false;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(59, 23);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// todoPanel
			// 
			this->todoPanel->AutoScroll = true;
			this->todoPanel->Location = System::Drawing::Point(6, 40);
			this->todoPanel->Name = L"todoPanel";
			this->todoPanel->Size = System::Drawing::Size(587, 429);
			this->todoPanel->TabIndex = 1;
			// 
			// addPanel
			// 
			this->addPanel->Location = System::Drawing::Point(605, 40);
			this->addPanel->Name = L"addPanel";
			this->addPanel->Size = System::Drawing::Size(590, 428);
			this->addPanel->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1205, 474);
			this->Controls->Add(this->addPanel);
			this->Controls->Add(this->todoPanel);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1221, 513);
			this->MinimumSize = System::Drawing::Size(1221, 513);
			this->Name = L"MyForm";
			this->Text = L"Todo-List";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void menuLoadCat_Click(System::Object^  sender, System::EventArgs^  e) {
		this->closeAll();

		System::IO::Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		openFileDialog1->InitialDirectory = fullPath;
		openFileDialog1->Filter = "All files (*.*)|*.*|category files (*.category)|*.category";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( (myStream = openFileDialog1->OpenFile()) != nullptr )
			{
				myStream->Close();
				path = openFileDialog1->FileName;
				
				System::IO::FileStream^ categoryFile = gcnew System::IO::FileStream( path, System::IO::FileMode::Open );
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader( categoryFile );
				CheckBox^ box;
				numberTodos = 0;

				while( sr->Peek() >= 0 )
				{
					numberTodos++;
					box = gcnew CheckBox();
					box->Name = numberTodos.ToString();
					box->Text = sr->ReadLine();
					box->AutoSize = true;
					box->Location = Point( 10, numberTodos * 30 );
					this->todoPanel->Controls->Add( box );
				}

				sr->Close();
			}
		}
	}
private: System::Void schließenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->addPanel->Controls->Clear();
	this->todoPanel->Controls->Clear();
	path = nullptr;
}
private: System::Void speichernToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if ( System::IO::File::Exists( path ) )
	{
		System::IO::File::Delete( path );
	}

	System::IO::FileStream^ saveFile = System::IO::File::Create( path );
	std::map<unsigned int, std::string> todos;

	for ( unsigned int i = 1; i <= numberTodos; ++i )
	{
		String^ name = i.ToString();
		CheckBox^ box = dynamic_cast<CheckBox^>( this->todoPanel->Controls->Find( name, true )[0] );
		if ( !box->Checked )
		{
			String^ text = box->Text + "\n";
			todos.insert( std::pair<unsigned int, std::string>( i, msclr::interop::marshal_as<std::string>( text ) ) );
		}
	}

	for ( std::map<unsigned int, std::string>::iterator iter = todos.begin(); iter != todos.end(); ++iter )
	{
		array<Byte>^info = (gcnew System::Text::UTF8Encoding(true))->GetBytes( gcnew String( (iter->second).c_str() ) );
		saveFile->Write(info, 0, info->Length);
	}

	saveFile->Close();

	this->todoPanel->Controls->Clear();
	this->loadCat();
}

private: System::Void loadCat()
{
	System::IO::FileStream^ categoryFile = gcnew System::IO::FileStream( path, System::IO::FileMode::Open );
	System::IO::StreamReader^ sr = gcnew System::IO::StreamReader( categoryFile );
	CheckBox^ box;
	numberTodos = 0;

	while ( sr->Peek() >= 0 )
	{
		numberTodos++;
		box = gcnew CheckBox();
		box->Name = numberTodos.ToString();
		box->Text = sr->ReadLine();
		box->AutoSize = true;
		box->Location = Point( 10, numberTodos * 30 );
		this->todoPanel->Controls->Add( box );
	}

	sr->Close();
}
private: System::Void todosHinzufügenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	addTodos = gcnew TextBox();
	addTodos->Multiline = true;
	addTodos->MinimumSize = System::Drawing::Size( 500, 100 );
	this->addPanel->Controls->Add( addTodos );
	
	Button^ addButton = gcnew Button();
	addButton->Text = "Hinzufügen";
	addButton->Size = System::Drawing::Size( 100,50 );
	addButton->Location = System::Drawing::Point( 0, 150 );
	this->addPanel->Controls->Add( addButton );

	addButton->Click += gcnew System::EventHandler( this, &MyForm::addTodos_Click );
}

private: System::Void addTodos_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string todos = msclr::interop::marshal_as<std::string, String^>(this->addTodos->Text);
	typedef boost::tokenizer<boost::char_separator<char>> tokenizer;
	boost::char_separator<char> sep{ "\n" };
	tokenizer tok{ todos, sep };

	System::IO::StreamWriter^ sw;

	if( path != nullptr )
		sw = System::IO::File::AppendText( path );
	else
	{
		System::IO::Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		openFileDialog1->InitialDirectory = fullPath;
		openFileDialog1->Filter = "All files (*.*)|*.*|category files (*.category)|*.category";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if ( ( myStream = openFileDialog1->OpenFile() ) != nullptr )
			{
				myStream->Close();
				path = openFileDialog1->FileName;

				sw = System::IO::File::AppendText( path );
			}
		}
	}

	unsigned int i = 0;

	for (const auto& t : tok)
	{
		if (i == 0)
			sw->Write( "\n" );

		sw->Write(msclr::interop::marshal_as<String^, std::string>(t));
		++i;
	}

	sw->Close();

	this->loadCat();
	this->addPanel->Controls->Clear();
}
private: System::Void beendenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	TodoList::MyForm::Close();
}
private: System::Void löschenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (path != nullptr)
	{
		// Initializing the MessageBox
		String^ message = "Möchtest du die Kategorie wirklich löschen?";
		String^ caption = "Kategorie löschen";
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		System::Windows::Forms::DialogResult result;

		// Display MessageBox
		result = MessageBox::Show(this, message, caption, buttons);

		// Deleting file if "Yes"
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			this->addPanel->Controls->Clear();
			this->todoPanel->Controls->Clear();

			if (System::IO::File::Exists(path))
			{
				System::IO::File::Delete(path);
			}

			path = nullptr;
		}
	}
}
private: System::Void kategorieHinzufügenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	catName = gcnew TextBox;
	catName->Width = 200;
	catName->Location = System::Drawing::Point( 5, 5 );
	this->addPanel->Controls->Add( catName );

	Button^ addCat = gcnew Button;
	addCat->Text = "Erstellen";
	addCat->Location = System::Drawing::Point( 5, 30 );
	addCat->Click += gcnew System::EventHandler( this, &MyForm::addCat );
	this->addPanel->Controls->Add( addCat );
}
private: System::Void addCat(System::Object^ sender, System::EventArgs^ e) {
	String^ filePath = fullPath + this->catName->Text + ".category";

	if (! System::IO::File::Exists( filePath ) )
	{
		System::IO::FileStream^ f = System::IO::File::Create( filePath );
		f->Close();
	}

	this->addPanel->Controls->Clear();
	this->todoPanel->Controls->Clear();
	path = nullptr;
}
private: System::Void closeAll() {
	this->addPanel->Controls->Clear();
	this->todoPanel->Controls->Clear();
	path = nullptr;
}
};
}
