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
		//Создается список, в который записываются значения всех textBox формы MyForm1
		property array<System::String^>^ InputValues
		{
			array<System::String^>^ get()
			{
				array<System::String^>^ values = gcnew array<System::String^>(8);
				values[1] = textBoxSurname->Text;
				values[2] = comboBoxMark->Text;
				values[3] = textBoxYear->Text;
				values[4] = comboBoxColor->Text;
				values[5] = textBoxNumber->Text;
				values[6] = textBoxTech->Text;
				values[7] = textBoxReg->Text;
				return values;
			}
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

	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	public: System::Windows::Forms::TextBox^ textBoxSurname;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	public: System::Windows::Forms::TextBox^ textBoxYear;

	public: System::Windows::Forms::TextBox^ textBoxNumber;
	public: System::Windows::Forms::TextBox^ textBoxReg;


















	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ textBoxTech;
	private: System::Windows::Forms::ComboBox^ comboBoxColor;
	private: System::Windows::Forms::ComboBox^ comboBoxMark;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxReg = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBoxTech = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBoxColor = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxMark = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Location = System::Drawing::Point(176, 56);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(210, 20);
			this->textBoxSurname->TabIndex = 2;
			this->textBoxSurname->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBoxSurname_TextChanged);
			this->textBoxSurname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_TextChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(27, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Фамилия владельца:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(118, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Марка:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(79, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Год выпуска:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(46, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Цвет автомобиля:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(35, 215);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Номер автомобиля:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(49, 255);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Дата техосмотра:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(10, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(160, 16);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Год регистрации в ГАИ:";
			// 
			// textBoxYear
			// 
			this->textBoxYear->Location = System::Drawing::Point(176, 137);
			this->textBoxYear->MaxLength = 4;
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(64, 20);
			this->textBoxYear->TabIndex = 11;
			this->textBoxYear->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBoxYear_TextChanged);
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNumber->Location = System::Drawing::Point(176, 215);
			this->textBoxNumber->MaxLength = 6;
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(100, 20);
			this->textBoxNumber->TabIndex = 13;
			this->textBoxNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBoxNumber_TextChanged);
			// 
			// textBoxReg
			// 
			this->textBoxReg->AccessibleName = L"";
			this->textBoxReg->Location = System::Drawing::Point(176, 287);
			this->textBoxReg->MaxLength = 4;
			this->textBoxReg->Name = L"textBoxReg";
			this->textBoxReg->Size = System::Drawing::Size(100, 20);
			this->textBoxReg->TabIndex = 15;
			this->textBoxReg->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBoxReg_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(208, 335);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(302, 335);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// textBoxTech
			// 
			this->textBoxTech->Location = System::Drawing::Point(176, 255);
			this->textBoxTech->Name = L"textBoxTech";
			this->textBoxTech->Size = System::Drawing::Size(125, 20);
			this->textBoxTech->TabIndex = 29;
			// 
			// comboBoxColor
			// 
			this->comboBoxColor->FormattingEnabled = true;
			this->comboBoxColor->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Черный", L"Белый", L"Синий", L"Красный",
					L"Оранжевый", L"Розовый", L"Зеленый", L"Желтый", L"Фиолетовый"
			});
			this->comboBoxColor->Location = System::Drawing::Point(176, 179);
			this->comboBoxColor->Name = L"comboBoxColor";
			this->comboBoxColor->Size = System::Drawing::Size(121, 21);
			this->comboBoxColor->TabIndex = 30;
			// 
			// comboBoxMark
			// 
			this->comboBoxMark->FormattingEnabled = true;
			this->comboBoxMark->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Toyota", L"Nissan", L"BMW", L"Mercedes-Benz",
					L"Chevrolet", L"Citroen", L"Dodge", L"Subaru", L"Mitsubishi", L"Mazda", L"Honda"
			});
			this->comboBoxMark->Location = System::Drawing::Point(176, 97);
			this->comboBoxMark->Name = L"comboBoxMark";
			this->comboBoxMark->Size = System::Drawing::Size(209, 21);
			this->comboBoxMark->TabIndex = 31;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(397, 364);
			this->Controls->Add(this->comboBoxMark);
			this->Controls->Add(this->comboBoxColor);
			this->Controls->Add(this->textBoxTech);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxReg);
			this->Controls->Add(this->textBoxNumber);
			this->Controls->Add(this->textBoxYear);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxSurname);
			this->Name = L"MyForm1";
			this->Text = L"Добавление владельца автомобиля";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		//При вводе textBoxSurname, если нажать enter, то каретка перенесется на textBoxMark
		if (e->KeyChar == (char)Keys::Enter) {
			comboBoxMark->Focus();
			e->Handled = true;
		}
		if (textBoxSurname->Text->Length > 0) {
			textBoxSurname->Text = textBoxSurname->Text->Substring(0, 1)->ToUpper() + textBoxSurname->Text->Substring(1);
			textBoxSurname->SelectionStart = textBoxSurname->Text->Length;
		}
		if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar) && e->KeyChar != '.') {
			e->Handled = true;
		}
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Ф.И.О.";
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		//При вводе textBoxTech, если нажать enter, то каретка перенесется на textBoxReg
		if (e->KeyChar == (char)Keys::Enter) {
			textBoxReg->Focus();
			e->Handled = true;
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Записываем значения всех textBox
	String^ surname = this->textBoxSurname->Text;
	String^ mark = this->comboBoxMark->Text;
	String^ year = this->textBoxYear->Text;
	String^ color = this->comboBoxColor->Text;
	String^ number = this->textBoxNumber->Text;
	String^ tech = this->textBoxTech->Text;
	String^ reg = this->textBoxReg->Text;


	//Если хотя бы 1 textBox не будет заполнен, то вылезет ошибка
	if (surname->Length == 0 || mark->Length == 0 || year->Length==0 || color->Length == 0 ||
		number->Length == 0 || tech->Length == 0 || reg->Length == 0)
	{
		MessageBox::Show("Заполните все поля", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	//Иначе идет проверка на то, все ли первые символы и все символы номера автомобиля в верхнем регистре
	else
	{
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBoxMark_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBoxMark, если нажать enter, то каретка перенесется на textBoxYear
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxYear->Focus();
		e->Handled = true;
	}
}
private: System::Void textBoxYear_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBoxYear, если нажать enter, то каретка перенесется на textBoxColor
	if (e->KeyChar == (char)Keys::Enter) {
		comboBoxColor->Focus();
		e->Handled = true;
	}
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
}
private: System::Void textBoxColor_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBoxColor, если нажать enter, то каретка перенесется на textBoxNumber
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxNumber->Focus();
		e->Handled = true;
	}
}
private: System::Void textBoxNumber_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBoxNumber, если нажать enter, то каретка перенесется на textBoxTech
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxTech->Focus();
		e->Handled = true;
	}

}
private: System::Void textBoxTech_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBoxTech, если нажать enter, то каретка перенесется на textBoxReg
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxReg->Focus();
		e->Handled = true;
	}
}
private: System::Void textBoxReg_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBoxReg, если нажать enter, то каретка перенесется на button1
	if (e->KeyChar == (char)Keys::Enter) {
		button1->Focus();
		e->Handled = true;
	}
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
}
private: System::Void textBoxSurname_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
