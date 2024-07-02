#pragma once

#include "User.h"
#include "Movie.h"
#include "UserUI.h"



namespace cinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MainForm
	/// </summary>
	
	

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:

		User^ currentUser = gcnew User();

		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			currentUser->email = user->email;

			nameUser->Text = user->email;
			LoadMoviesIntoComboBox();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Lname;
	private: System::Windows::Forms::Label^ nameUser;


	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ cbActFillmUser;
	private: System::Windows::Forms::Button^ btn_check;



	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ FinSumPriceL;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ LPrice;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DomainUpDown^ tbCount;
	private: System::Windows::Forms::Label^ placeleftL;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Lname = (gcnew System::Windows::Forms::Label());
			this->nameUser = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->cbActFillmUser = (gcnew System::Windows::Forms::ComboBox());
			this->btn_check = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->FinSumPriceL = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->LPrice = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbCount = (gcnew System::Windows::Forms::DomainUpDown());
			this->placeleftL = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Lname
			// 
			this->Lname->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Lname->Location = System::Drawing::Point(12, 11);
			this->Lname->Name = L"Lname";
			this->Lname->Size = System::Drawing::Size(65, 23);
			this->Lname->TabIndex = 0;
			this->Lname->Text = L"Name:";
			// 
			// nameUser
			// 
			this->nameUser->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameUser->Location = System::Drawing::Point(73, 11);
			this->nameUser->Name = L"nameUser";
			this->nameUser->Size = System::Drawing::Size(279, 21);
			this->nameUser->TabIndex = 1;
			this->nameUser->Text = L"-";
			this->nameUser->Click += gcnew System::EventHandler(this, &MainForm::nameUser_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Day: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Time: ";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Choose film:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"9:00", L"11:45", L"14:30", L"17:15", L"20:00" });
			this->comboBox1->Location = System::Drawing::Point(94, 216);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(72, 24);
			this->comboBox1->TabIndex = 6;
			// 
			// cbActFillmUser
			// 
			this->cbActFillmUser->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbActFillmUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbActFillmUser->FormattingEnabled = true;
			this->cbActFillmUser->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->cbActFillmUser->Location = System::Drawing::Point(16, 96);
			this->cbActFillmUser->Name = L"cbActFillmUser";
			this->cbActFillmUser->Size = System::Drawing::Size(333, 33);
			this->cbActFillmUser->TabIndex = 7;
			this->cbActFillmUser->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::cbActFillmUser_SelectedIndexChanged);
			// 
			// btn_check
			// 
			this->btn_check->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_check->Location = System::Drawing::Point(125, 384);
			this->btn_check->Name = L"btn_check";
			this->btn_check->Size = System::Drawing::Size(224, 40);
			this->btn_check->TabIndex = 8;
			this->btn_check->Text = L"Check my ticket";
			this->btn_check->UseVisualStyleBackColor = true;
			this->btn_check->Click += gcnew System::EventHandler(this, &MainForm::btn_check_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnExit->Location = System::Drawing::Point(19, 384);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(103, 40);
			this->btnExit->TabIndex = 9;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MainForm::btnExit_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Monday", L"Tuesday", L"Wensday", L"Thursday",
					L"Friday", L"Saturday", L"Sunday"
			});
			this->comboBox3->Location = System::Drawing::Point(91, 175);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(160, 24);
			this->comboBox3->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(16, 336);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(333, 42);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Take a ticket";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(197, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 21);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Count:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(198, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"place left:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(12, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 21);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Price:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(12, 286);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(142, 21);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Final sum: ";
			// 
			// FinSumPriceL
			// 
			this->FinSumPriceL->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->FinSumPriceL->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FinSumPriceL->Location = System::Drawing::Point(139, 286);
			this->FinSumPriceL->Name = L"FinSumPriceL";
			this->FinSumPriceL->Size = System::Drawing::Size(72, 21);
			this->FinSumPriceL->TabIndex = 20;
			this->FinSumPriceL->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->label12->Location = System::Drawing::Point(208, 286);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 21);
			this->label12->TabIndex = 21;
			this->label12->Text = L"$";
			// 
			// LPrice
			// 
			this->LPrice->AutoSize = true;
			this->LPrice->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->LPrice->Location = System::Drawing::Point(90, 141);
			this->LPrice->Name = L"LPrice";
			this->LPrice->Size = System::Drawing::Size(22, 21);
			this->LPrice->TabIndex = 22;
			this->LPrice->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(144, 141);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 21);
			this->label6->TabIndex = 23;
			this->label6->Text = L"$";
			// 
			// tbCount
			// 
			this->tbCount->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbCount->Items->Add(L"30");
			this->tbCount->Items->Add(L"29");
			this->tbCount->Items->Add(L"28");
			this->tbCount->Items->Add(L"27");
			this->tbCount->Items->Add(L"26");
			this->tbCount->Items->Add(L"25");
			this->tbCount->Items->Add(L"24");
			this->tbCount->Items->Add(L"23");
			this->tbCount->Items->Add(L"22");
			this->tbCount->Items->Add(L"21");
			this->tbCount->Items->Add(L"20");
			this->tbCount->Items->Add(L"19");
			this->tbCount->Items->Add(L"18");
			this->tbCount->Items->Add(L"17");
			this->tbCount->Items->Add(L"16");
			this->tbCount->Items->Add(L"15");
			this->tbCount->Items->Add(L"14");
			this->tbCount->Items->Add(L"13");
			this->tbCount->Items->Add(L"12");
			this->tbCount->Items->Add(L"11");
			this->tbCount->Items->Add(L"10");
			this->tbCount->Items->Add(L"9");
			this->tbCount->Items->Add(L"8");
			this->tbCount->Items->Add(L"7");
			this->tbCount->Items->Add(L"6");
			this->tbCount->Items->Add(L"5");
			this->tbCount->Items->Add(L"4");
			this->tbCount->Items->Add(L"3");
			this->tbCount->Items->Add(L"2");
			this->tbCount->Items->Add(L"1");
			this->tbCount->Location = System::Drawing::Point(285, 213);
			this->tbCount->Name = L"tbCount";
			this->tbCount->ReadOnly = true;
			this->tbCount->Size = System::Drawing::Size(47, 28);
			this->tbCount->TabIndex = 24;
			this->tbCount->Text = L"1";
			// 
			// placeleftL
			// 
			this->placeleftL->AutoSize = true;
			this->placeleftL->Font = (gcnew System::Drawing::Font(L"MS Gothic", 9.75F, System::Drawing::FontStyle::Bold));
			this->placeleftL->Location = System::Drawing::Point(299, 255);
			this->placeleftL->Name = L"placeleftL";
			this->placeleftL->Size = System::Drawing::Size(15, 13);
			this->placeleftL->TabIndex = 25;
			this->placeleftL->Text = L"0";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 436);
			this->Controls->Add(this->placeleftL);
			this->Controls->Add(this->tbCount);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->LPrice);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->FinSumPriceL);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btn_check);
			this->Controls->Add(this->cbActFillmUser);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nameUser);
			this->Controls->Add(this->Lname);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

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
				cbActFillmUser->Items->Add(reader["Name"]->ToString());
			}

			reader->Close();
			sqlConn->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to load movies: " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}
	private: void UpdateFinSumPrice() {
		String^ selectedMovie = cbActFillmUser->SelectedItem->ToString();

		if (selectedMovie == " ") {
			tbCount->Enabled = "False";
		}
		else {
			tbCount->Enabled = "True";
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			String^ sqlQuery = "SELECT price,count FROM [Cinema] WHERE Name = @selectedMovie";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
			command->Parameters->AddWithValue("@selectedMovie", selectedMovie);
			SqlDataReader^ reader = command->ExecuteReader();

			Decimal price = 0; // Ціна фільму
			int count = 0;
			if (reader->Read()) {
				price = Convert::ToDecimal(reader["price"]); // Зчитуємо ціну як Decimal
				LPrice->Text = price.ToString(); // Відображаємо ціну

				count = Convert::ToInt32(reader["count"]);
				placeleftL->Text = count.ToString();
			}
			else {
				MessageBox::Show("No data found for the selected movie.", "Info", MessageBoxButtons::OK);
			}

			reader->Close();
			sqlConn->Close();



			// Конвертуємо кількість місць у числовий тип (Int64)
			Int64 countPlaces = Convert::ToInt64(tbCount->Text);


			// Обчислюємо фінальну суму і встановлюємо текст
			Decimal finSumPrice = price * countPlaces;
			FinSumPriceL->Text = finSumPrice.ToString();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to load data: " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void cbActFillmUser_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		UpdateFinSumPrice();
	}

	private: System::Void tbCount_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdateFinSumPrice();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = cbActFillmUser->SelectedItem->ToString();
		String^ email = nameUser->Text;
		String^ day = comboBox3->Text;
		String^ time = comboBox1->Text;
		int all_count = Convert::ToInt32(placeleftL->Text);
		if (day == " ") {
			MessageBox::Show("select the day");
			return;
		}
		if (time == " ") {
			MessageBox::Show("select the time");
			return;
		}
		int count = Convert::ToInt32(tbCount->Text);
		int new_count = all_count - count;
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			String^ sqlQuery = "INSERT INTO [booking] (name, email, day, time, count) VALUES (@name, @email, @day, @time, @count)";
			SqlCommand command(sqlQuery, sqlConn);
			
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@day", day);
			command.Parameters->AddWithValue("@time", time);
			command.Parameters->AddWithValue("@count", count);

			command.ExecuteNonQuery();
			sqlConn->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to load data: " + ex->Message, "Error", MessageBoxButtons::OK);
		}

		String^ selectedMovie = cbActFillmUser->SelectedItem->ToString();

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			String^ sqlQuery = "UPDATE [Cinema] SET count = @count WHERE Name = @selectedMovie";
			SqlCommand command(sqlQuery, sqlConn);

			command.Parameters->AddWithValue("@count", new_count);
			command.Parameters->AddWithValue("@selectedMovie", selectedMovie);

			command.ExecuteNonQuery();
			sqlConn->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to load data: " + ex->Message, "Error", MessageBoxButtons::OK);
		}

		MessageBox::Show("You are take a ticket for movie: " + name + "on " + day, "booking", MessageBoxButtons::OK);
	}


private: System::Void btn_check_Click(System::Object^ sender, System::EventArgs^ e) {

	UserUI^ userCheck = gcnew UserUI(currentUser);
	userCheck->ShowDialog();

}
private: System::Void nameUser_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
};