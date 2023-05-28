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
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
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


	public: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::ComboBox^ comboBox1;
	public: System::Windows::Forms::ComboBox^ comboBox2;
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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Цвет автомобиля: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Марка автомобиля: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Первый символ номера автомобиля: ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(217, 86);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(42, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm3::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(103, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Поиск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(184, 124);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Черный", L"Белый", L"Синий", L"Красный", L"Оранжевый",
					L"Розовый", L"Зеленый", L"Желтый", L"Фиолетовый"
			});
			this->comboBox1->Location = System::Drawing::Point(120, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(139, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Toyota", L"Nissan", L"BMW", L"Mercedes-Benz",
					L"Chevrolet", L"Citroen", L"Dodge", L"Subaru", L"Mitsubishi", L"Mazda", L"Honda"
			});
			this->comboBox2->Location = System::Drawing::Point(120, 56);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(139, 21);
			this->comboBox2->TabIndex = 9;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(278, 159);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm3";
			this->Text = L"Поиск владельца ";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Записываются значения всех textBox
	String^ Color = this->comboBox1->Text;;
	String^ Mark=this->comboBox2->Text;
	String^ Firstsymbol=this->textBox3->Text;

	//Если хотя бы 1 textBox будет не заполнен, то будет ошибка
	if (Color->Length == 0 || Mark->Length == 0 || Firstsymbol->Length == 0)
	{
		MessageBox::Show("Заполните все поля!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	//Иначе идет проверка на то, все ли первые символы и все символы номера автомобиля в верхнем регистре
	else
	{
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//При вводе textBox1, если нажать enter, то каретка перенесется на textBox2
	if (e->KeyChar == (char)Keys::Enter) {
		comboBox2->Focus();
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
	//При вводе textBox3, если нажать enter, то каретка перенесется на button1
	if (e->KeyChar == (char)Keys::Enter) {
		button1->Focus();
		e->Handled = true;
	}
	if (textBox3->Text->Length > 0) {
		textBox3->Text = textBox3->Text->Substring(0, 1)->ToUpper() + textBox3->Text->Substring(1);
		textBox3->SelectionStart = textBox3->Text->Length;
	}
	if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}
}
private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
