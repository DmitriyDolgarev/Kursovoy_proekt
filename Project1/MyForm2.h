#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ textBox1;

	public: System::Windows::Forms::TextBox^ textBox3;

	public: System::Windows::Forms::TextBox^ textBox5;

	public: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button1;
	public:
	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::DateTimePicker^ textBox6;
	public: System::Windows::Forms::ComboBox^ comboBoxMark;
	public: System::Windows::Forms::ComboBox^ comboBoxColor;
	public:


















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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBoxMark = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxColor = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(109, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Фамилия";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(126, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Марка";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(90, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Год выпуска";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(54, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Цвет автомобиля";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(43, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Номер автомобиля";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(57, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Дата техосмотра";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(18, 186);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Год регистрации в ГАИ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(181, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(181, 78);
			this->textBox3->MaxLength = 4;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox3_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox5->Location = System::Drawing::Point(181, 130);
			this->textBox5->MaxLength = 6;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(109, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox5_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(181, 182);
			this->textBox7->MaxLength = 4;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(129, 20);
			this->textBox7->TabIndex = 13;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox7_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(164, 224);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Редактировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 224);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(181, 156);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(129, 20);
			this->textBox6->TabIndex = 16;
			this->textBox6->ValueChanged += gcnew System::EventHandler(this, &MyForm2::textBox6_ValueChanged);
			// 
			// comboBoxMark
			// 
			this->comboBoxMark->FormattingEnabled = true;
			this->comboBoxMark->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Toyota", L"Nissan", L"BMW", L"Mercedes-Benz",
					L"Chevrolet", L"Citroen", L"Dodge", L"Subaru", L"Mitsubishi", L"Mazda", L"Honda"
			});
			this->comboBoxMark->Location = System::Drawing::Point(181, 52);
			this->comboBoxMark->Name = L"comboBoxMark";
			this->comboBoxMark->Size = System::Drawing::Size(173, 21);
			this->comboBoxMark->TabIndex = 17;
			// 
			// comboBoxColor
			// 
			this->comboBoxColor->FormattingEnabled = true;
			this->comboBoxColor->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Черный", L"Белый", L"Синий", L"Красный",
					L"Оранжевый", L"Розовый", L"Зеленый", L"Желтый", L"Фиолетовый"
			});
			this->comboBoxColor->Location = System::Drawing::Point(181, 104);
			this->comboBoxColor->Name = L"comboBoxColor";
			this->comboBoxColor->Size = System::Drawing::Size(121, 21);
			this->comboBoxColor->TabIndex = 18;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(382, 257);
			this->Controls->Add(this->comboBoxColor);
			this->Controls->Add(this->comboBoxMark);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"Редактирование";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Записываются значения всех textBox формы
	String^ Surname = this->textBox1->Text;
	String^ Mark = this->comboBoxMark->Text;
	String^ Year = this->textBox3->Text;
	String^ Color = this->comboBoxColor->Text;
	String^ Number = this->textBox5->Text;
	String^ Tech = this->textBox6->Text;
	String^ Reg = this->textBox7->Text;

	//Если хотя бы 1 textBox будет не заполнен, то будет ошибка
	if (Surname->Length == 0 || Mark->Length == 0 || Year->Length == 0 || Color->Length == 0 ||
		Number->Length == 0 || Tech->Length == 0 || Reg->Length == 0)
	{
		MessageBox::Show("Заполните все поля", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBox1, если нажать enter, то каретка перенесется на textBox2
	if (e->KeyChar == (char)Keys::Enter) {
		comboBoxMark->Focus();
		e->Handled = true;
	}
	if (textBox1->Text->Length > 0) {
		textBox1->Text = textBox1->Text->Substring(0, 1)->ToUpper() + textBox1->Text->Substring(1);
		textBox1->SelectionStart = textBox1->Text->Length;
	}
	if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBox2, если нажать enter, то каретка перенесется на textBox3
	if (e->KeyChar == (char)Keys::Enter) {
		textBox3->Focus();
		e->Handled = true;
	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBox3, если нажать enter, то каретка перенесется на textBox4
	if (e->KeyChar == (char)Keys::Enter) {
		comboBoxColor->Focus();
		e->Handled = true;
	}
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBox4, если нажать enter, то каретка перенесется на textBox5
	if (e->KeyChar == (char)Keys::Enter) {
		textBox5->Focus();
		e->Handled = true;
	}
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBox5, если нажать enter, то каретка перенесется на textBox6
	if (e->KeyChar == (char)Keys::Enter) {
		textBox6->Focus();
		e->Handled = true;
	}
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBox6, если нажать enter, то каретка перенесется на textBox7
	if (e->KeyChar == (char)Keys::Enter) {
		textBox7->Focus();
		e->Handled = true;
	}
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBox7, если нажать enter, то каретка перенесется на button1
	if (e->KeyChar == (char)Keys::Enter) {
		button1->Focus();
		e->Handled = true;
	}
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
}
private: System::Void textBox6_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
