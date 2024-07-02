#pragma once

#include "Movie.h"
#include "User.h"

namespace cinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for AdminSide
	/// </summary>
	public ref class AdminSide : public System::Windows::Forms::Form
	{
	public:
		AdminSide(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			nameUser->Text = user->email;
			LoadMoviesIntoComboBox();
			LoadUserIntoComboBox();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminSide()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ nameUser;
	protected:
	private: System::Windows::Forms::Label^ Lname;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_FilmDelete;


	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_UserDelete;
	private: System::Windows::Forms::Button^ btn_makeAdmin;
	private: System::Windows::Forms::CheckBox^ checkBoxAdmin;





	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ cbActFillmDel;

	private: System::Windows::Forms::ComboBox^ cbAboutUs;
	private: System::Windows::Forms::TextBox^ tbActFillmAdd;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPrice;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nameUser = (gcnew System::Windows::Forms::Label());
			this->Lname = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_FilmDelete = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_UserDelete = (gcnew System::Windows::Forms::Button());
			this->btn_makeAdmin = (gcnew System::Windows::Forms::Button());
			this->checkBoxAdmin = (gcnew System::Windows::Forms::CheckBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->cbActFillmDel = (gcnew System::Windows::Forms::ComboBox());
			this->cbAboutUs = (gcnew System::Windows::Forms::ComboBox());
			this->tbActFillmAdd = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPrice = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// nameUser
			// 
			this->nameUser->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameUser->Location = System::Drawing::Point(73, 9);
			this->nameUser->Name = L"nameUser";
			this->nameUser->Size = System::Drawing::Size(279, 21);
			this->nameUser->TabIndex = 3;
			this->nameUser->Text = L"-";
			// 
			// Lname
			// 
			this->Lname->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Lname->Location = System::Drawing::Point(12, 9);
			this->Lname->Name = L"Lname";
			this->Lname->Size = System::Drawing::Size(65, 23);
			this->Lname->TabIndex = 2;
			this->Lname->Text = L"Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(8, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Action with a film";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(7, 283);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 21);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Info about Users";
			// 
			// btn_FilmDelete
			// 
			this->btn_FilmDelete->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->btn_FilmDelete->Location = System::Drawing::Point(9, 212);
			this->btn_FilmDelete->Name = L"btn_FilmDelete";
			this->btn_FilmDelete->Size = System::Drawing::Size(340, 34);
			this->btn_FilmDelete->TabIndex = 6;
			this->btn_FilmDelete->Text = L"delete";
			this->btn_FilmDelete->UseVisualStyleBackColor = true;
			this->btn_FilmDelete->Click += gcnew System::EventHandler(this, &AdminSide::btn_FilmDelete_Click);
			// 
			// btn_add
			// 
			this->btn_add->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->btn_add->Location = System::Drawing::Point(153, 114);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(196, 34);
			this->btn_add->TabIndex = 7;
			this->btn_add->Text = L"add";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &AdminSide::btn_add_Click);
			// 
			// btn_UserDelete
			// 
			this->btn_UserDelete->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->btn_UserDelete->Location = System::Drawing::Point(9, 372);
			this->btn_UserDelete->Name = L"btn_UserDelete";
			this->btn_UserDelete->Size = System::Drawing::Size(134, 34);
			this->btn_UserDelete->TabIndex = 8;
			this->btn_UserDelete->Text = L"delete";
			this->btn_UserDelete->UseVisualStyleBackColor = true;
			this->btn_UserDelete->Click += gcnew System::EventHandler(this, &AdminSide::btn_UserDelete_Click);
			// 
			// btn_makeAdmin
			// 
			this->btn_makeAdmin->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->btn_makeAdmin->Location = System::Drawing::Point(153, 372);
			this->btn_makeAdmin->Name = L"btn_makeAdmin";
			this->btn_makeAdmin->Size = System::Drawing::Size(199, 34);
			this->btn_makeAdmin->TabIndex = 10;
			this->btn_makeAdmin->Text = L"make an admin";
			this->btn_makeAdmin->UseVisualStyleBackColor = true;
			this->btn_makeAdmin->Click += gcnew System::EventHandler(this, &AdminSide::btn_makeAdmin_Click);
			// 
			// checkBoxAdmin
			// 
			this->checkBoxAdmin->AutoSize = true;
			this->checkBoxAdmin->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->checkBoxAdmin->Location = System::Drawing::Point(263, 283);
			this->checkBoxAdmin->Name = L"checkBoxAdmin";
			this->checkBoxAdmin->Size = System::Drawing::Size(89, 25);
			this->checkBoxAdmin->TabIndex = 11;
			this->checkBoxAdmin->Text = L"admin";
			this->checkBoxAdmin->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(9, 425);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(340, 34);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Exit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdminSide::button6_Click);
			// 
			// cbActFillmDel
			// 
			this->cbActFillmDel->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbActFillmDel->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->cbActFillmDel->FormattingEnabled = true;
			this->cbActFillmDel->Location = System::Drawing::Point(9, 165);
			this->cbActFillmDel->Name = L"cbActFillmDel";
			this->cbActFillmDel->Size = System::Drawing::Size(340, 29);
			this->cbActFillmDel->TabIndex = 13;
			this->cbActFillmDel->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminSide::cbActFillmDel_SelectedIndexChanged);
			// 
			// cbAboutUs
			// 
			this->cbAboutUs->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbAboutUs->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->cbAboutUs->FormattingEnabled = true;
			this->cbAboutUs->Location = System::Drawing::Point(10, 326);
			this->cbAboutUs->Name = L"cbAboutUs";
			this->cbAboutUs->Size = System::Drawing::Size(340, 29);
			this->cbAboutUs->TabIndex = 14;
			this->cbAboutUs->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminSide::cbAboutUs_SelectedIndexChanged);
			// 
			// tbActFillmAdd
			// 
			this->tbActFillmAdd->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbActFillmAdd->Location = System::Drawing::Point(11, 80);
			this->tbActFillmAdd->Name = L"tbActFillmAdd";
			this->tbActFillmAdd->Size = System::Drawing::Size(338, 28);
			this->tbActFillmAdd->TabIndex = 15;
			this->tbActFillmAdd->TextChanged += gcnew System::EventHandler(this, &AdminSide::tbActFillmAdd_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(8, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 21);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Price:";
			// 
			// tbPrice
			// 
			this->tbPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbPrice->Location = System::Drawing::Point(86, 114);
			this->tbPrice->Multiline = true;
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(57, 34);
			this->tbPrice->TabIndex = 17;
			// 
			// AdminSide
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 477);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbActFillmAdd);
			this->Controls->Add(this->cbAboutUs);
			this->Controls->Add(this->cbActFillmDel);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->checkBoxAdmin);
			this->Controls->Add(this->btn_makeAdmin);
			this->Controls->Add(this->btn_UserDelete);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_FilmDelete);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nameUser);
			this->Controls->Add(this->Lname);
			this->Name = L"AdminSide";
			this->Text = L"AdminSide";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
		public: Movie^ movie = nullptr;
private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ FileName = tbActFillmAdd->Text;
	String^ FilmPrice = tbPrice->Text;
	int count = 30;

	if (FileName->Length == 0) {
		MessageBox::Show("Please enter name for Movie", "One or more empty fields", MessageBoxButtons::OK);
		return;
	}

	if (FilmPrice->Length == 0) {
		MessageBox::Show("Please enter price for Movie", "One or more empty fields", MessageBoxButtons::OK);
		return;
	}

	try
	{
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO [Cinema] (Name,price, count) VALUES (@Name,@price, @count)";


		SqlCommand command(sqlQuery, % sqlConn);

		command.Parameters->AddWithValue("@Name", FileName);
		command.Parameters->AddWithValue("@price", FilmPrice);
		command.Parameters->AddWithValue("@count", count);


		command.ExecuteNonQuery();
		movie = gcnew Movie;
		movie->Name = Name;
		movie-> count = count;

		MessageBox::Show("You add a new movie", "Add Film", MessageBoxButtons::OK);
		cbActFillmDel->Refresh();
		tbActFillmAdd->Clear();
		sqlConn.Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to add new movie" + ex->Message, "Add Error", MessageBoxButtons::OK);
	}

}
private: System::Void cbActFillmDel_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	String^ selectedMovie = cbActFillmDel->SelectedItem->ToString();
	
};

private: void LoadMoviesIntoComboBox()
{
	try
	{
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		String^ sqlQuery = "SELECT Name FROM [Cinema]";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		SqlDataReader^ reader = command->ExecuteReader();

		while (reader->Read())
		{
			cbActFillmDel->Items->Add(reader["Name"]->ToString());
		}



		reader->Close();
		sqlConn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to load movies: " + ex->Message, "Error", MessageBoxButtons::OK);
	}
}
	private: System::Void btn_FilmDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			String^ movie_name = cbActFillmDel->Text->ToString();
			String^ sqlQuery = "DELETE FROM Cinema WHERE Name = @name_movie";

			SqlCommand command(sqlQuery, sqlConn);
			command.Parameters->AddWithValue("@name_movie", movie_name);

			command.ExecuteNonQuery();
	
			String^ selectedItem = cbActFillmDel->SelectedItem != nullptr ? cbActFillmDel->SelectedItem->ToString() : "";

			MessageBox::Show("You are delete a movie: " + movie_name, "Add Film", MessageBoxButtons::OK);
			cbActFillmDel->Items->Remove(selectedItem);
			cbActFillmDel->Refresh();
			sqlConn->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to delete movie: " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}
private: System::Void cbAboutUs_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	

}


private: void LoadUserIntoComboBox()
{
	try
	{
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		String^ sqlQuery = "SELECT Email FROM [User] WHERE isAdmin = 0";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		SqlDataReader^ reader = command->ExecuteReader();

		while (reader->Read())
		{
			cbAboutUs->Items->Add(reader["Email"]->ToString());
		}
		
		reader->Close();
		sqlConn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to load movies: " + ex->Message, "Error", MessageBoxButtons::OK);
	}
}

private: System::Void btn_UserDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		String^ email = cbAboutUs->Text->ToString();
		String^ sqlQuery = "DELETE FROM [User] WHERE Email = @email";

		SqlCommand command(sqlQuery, sqlConn);
		command.Parameters->AddWithValue("@email", email);

		command.ExecuteNonQuery();

		String^ selectedItem = cbAboutUs->SelectedItem != nullptr ? cbAboutUs->SelectedItem->ToString() : "";

		MessageBox::Show("You are delete a user: " + email, "Add Film", MessageBoxButtons::OK);
		cbAboutUs->Items->Remove(selectedItem);
		cbAboutUs->Refresh();
		sqlConn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to delete movie: " + ex->Message, "Error", MessageBoxButtons::OK);
	}
}

	private: System::Void btn_makeAdmin_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		String^ email = cbAboutUs->Text->ToString();
		bool isAdmin = checkBoxAdmin->Checked;
		if (isAdmin) {
		

		String^ sqlQuery = "UPDATE [User] SET isAdmin = @isAdmin WHERE Email = @email AND isAdmin = 0";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

		String^ selectedItem = cbAboutUs->SelectedItem != nullptr ? cbAboutUs->SelectedItem->ToString() : "";


		try {
			String^ sqlQuery = "UPDATE [User] SET isAdmin = @isAdmin WHERE Email = @email";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

			command->Parameters->AddWithValue("@isAdmin", isAdmin);
			command->Parameters->AddWithValue("@email", email);

			command->ExecuteNonQuery();

			MessageBox::Show("You made admin for user: " + email, "Add new admin", MessageBoxButtons::OK);

			// Видалення вибраного елемента з ComboBox
			String^ selectedItem = cbAboutUs->SelectedItem != nullptr ? cbAboutUs->SelectedItem->ToString() : "";
			cbAboutUs->Items->Remove(selectedItem);
			cbAboutUs->Refresh();
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error updating user: " + ex->Message, "Error", MessageBoxButtons::OK);
			sqlConn->Close(); // Закрити з'єднання в разі виникнення помилки
		}
	}
else {
			MessageBox::Show("You have to press the checkBox 'admin' to do user admin : " + email, "Add new admin", MessageBoxButtons::OK);;
	}

}

private: System::Void tbActFillmAdd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
