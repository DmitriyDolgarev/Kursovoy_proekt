#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "cstring"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::InteropServices;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			Thread^ t = gcnew Thread(gcnew ThreadStart(this, &MyForm::StartForm));
			t->Start();
			Thread::Sleep(3000);
			t->Abort();
		}
		void StartForm()
		{
			Project1::MyForm6 form;
			Application::Run(% form);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редакторToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ поискToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ заданиеToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;










	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ сортировкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ отАДоЯToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ отЯДоАToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ поНомеруToolStripMenuItem;








	private: System::Windows::Forms::ToolStripMenuItem^ владельцаАвтомобиляToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ самогоСтарогоАвтомобиляToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ самойПопулярнойМаркиАвтомобиляToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сформироватьСписокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::ToolStripMenuItem^ какИзменятьДанныеТаблицыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавлениеВладельцаАвтомобиляToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалениеИнформацииОВладельцеАвтомобиляToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редактированиеИнформацииОВладельцеАвтомобиляToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сортировкаToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ какНаходитьИнформациюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ владельцаАвтомобиляToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ самыйСтарыйАвтомобильToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ маркуСамогоПопулярногоАвтомобиляToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ какСформироватьСписокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
private: System::Windows::Forms::ToolStripButton^ toolStripButton6;























	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->редактироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редакторToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отАДоЯToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отЯДоАToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поНомеруToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поискToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->владельцаАвтомобиляToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->самогоСтарогоАвтомобиляToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->самойПопулярнойМаркиАвтомобиляToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сформироватьСписокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->какИзменятьДанныеТаблицыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавлениеВладельцаАвтомобиляToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалениеИнформацииОВладельцеАвтомобиляToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактированиеИнформацииОВладельцеАвтомобиляToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->какНаходитьИнформациюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->владельцаАвтомобиляToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->самыйСтарыйАвтомобильToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->маркуСамогоПопулярногоАвтомобиляToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->какСформироватьСписокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заданиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->редактироватьToolStripMenuItem,
					this->удалитьToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(155, 48);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			// 
			// редактироватьToolStripMenuItem
			// 
			this->редактироватьToolStripMenuItem->Name = L"редактироватьToolStripMenuItem";
			this->редактироватьToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->редактироватьToolStripMenuItem->Text = L"Редактировать";
			this->редактироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::редактироватьToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem1
			// 
			this->удалитьToolStripMenuItem1->Name = L"удалитьToolStripMenuItem1";
			this->удалитьToolStripMenuItem1->Size = System::Drawing::Size(154, 22);
			this->удалитьToolStripMenuItem1->Text = L"Удалить";
			this->удалитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::удалитьToolStripMenuItem1_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->файлToolStripMenuItem,
					this->редакторToolStripMenuItem, this->поискToolStripMenuItem, this->сформироватьСписокToolStripMenuItem, this->справкаToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(896, 24);
			this->menuStrip2->TabIndex = 3;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->сохранитьToolStripMenuItem,
					this->сохранитьКакToolStripMenuItem, this->открытьToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Enabled = false;
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Enabled = false;
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьКакToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// редакторToolStripMenuItem
			// 
			this->редакторToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->добавитьToolStripMenuItem,
					this->редактироватьToolStripMenuItem1, this->удалитьToolStripMenuItem, this->сортировкаToolStripMenuItem
			});
			this->редакторToolStripMenuItem->Name = L"редакторToolStripMenuItem";
			this->редакторToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->редакторToolStripMenuItem->Text = L"Правка";
			// 
			// добавитьToolStripMenuItem
			// 
			this->добавитьToolStripMenuItem->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->добавитьToolStripMenuItem->Name = L"добавитьToolStripMenuItem";
			this->добавитьToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->добавитьToolStripMenuItem->Text = L"Добавить";
			this->добавитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::добавитьToolStripMenuItem_Click);
			// 
			// редактироватьToolStripMenuItem1
			// 
			this->редактироватьToolStripMenuItem1->Enabled = false;
			this->редактироватьToolStripMenuItem1->Name = L"редактироватьToolStripMenuItem1";
			this->редактироватьToolStripMenuItem1->Size = System::Drawing::Size(154, 22);
			this->редактироватьToolStripMenuItem1->Text = L"Редактировать";
			this->редактироватьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::редактироватьToolStripMenuItem1_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Enabled = false;
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::удалитьToolStripMenuItem_Click);
			// 
			// сортировкаToolStripMenuItem
			// 
			this->сортировкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->отАДоЯToolStripMenuItem,
					this->отЯДоАToolStripMenuItem, this->поНомеруToolStripMenuItem
			});
			this->сортировкаToolStripMenuItem->Enabled = false;
			this->сортировкаToolStripMenuItem->Name = L"сортировкаToolStripMenuItem";
			this->сортировкаToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->сортировкаToolStripMenuItem->Text = L"Сортировка";
			// 
			// отАДоЯToolStripMenuItem
			// 
			this->отАДоЯToolStripMenuItem->Name = L"отАДоЯToolStripMenuItem";
			this->отАДоЯToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->отАДоЯToolStripMenuItem->Text = L"От А до Я";
			this->отАДоЯToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::отАДоЯToolStripMenuItem_Click);
			// 
			// отЯДоАToolStripMenuItem
			// 
			this->отЯДоАToolStripMenuItem->Name = L"отЯДоАToolStripMenuItem";
			this->отЯДоАToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->отЯДоАToolStripMenuItem->Text = L"От Я до А";
			this->отЯДоАToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::отЯДоАToolStripMenuItem_Click);
			// 
			// поНомеруToolStripMenuItem
			// 
			this->поНомеруToolStripMenuItem->Name = L"поНомеруToolStripMenuItem";
			this->поНомеруToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->поНомеруToolStripMenuItem->Text = L"Убрать сортировку";
			this->поНомеруToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::поНомеруToolStripMenuItem_Click);
			// 
			// поискToolStripMenuItem
			// 
			this->поискToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->владельцаАвтомобиляToolStripMenuItem,
					this->самогоСтарогоАвтомобиляToolStripMenuItem, this->самойПопулярнойМаркиАвтомобиляToolStripMenuItem
			});
			this->поискToolStripMenuItem->Name = L"поискToolStripMenuItem";
			this->поискToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->поискToolStripMenuItem->Text = L"Поиск";
			// 
			// владельцаАвтомобиляToolStripMenuItem
			// 
			this->владельцаАвтомобиляToolStripMenuItem->Enabled = false;
			this->владельцаАвтомобиляToolStripMenuItem->Name = L"владельцаАвтомобиляToolStripMenuItem";
			this->владельцаАвтомобиляToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->владельцаАвтомобиляToolStripMenuItem->Text = L"Владельца автомобиля";
			this->владельцаАвтомобиляToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::владельцаАвтомобиляToolStripMenuItem_Click);
			// 
			// самогоСтарогоАвтомобиляToolStripMenuItem
			// 
			this->самогоСтарогоАвтомобиляToolStripMenuItem->Enabled = false;
			this->самогоСтарогоАвтомобиляToolStripMenuItem->Name = L"самогоСтарогоАвтомобиляToolStripMenuItem";
			this->самогоСтарогоАвтомобиляToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->самогоСтарогоАвтомобиляToolStripMenuItem->Text = L"Самого старого автомобиля";
			this->самогоСтарогоАвтомобиляToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::самогоСтарогоАвтомобиляToolStripMenuItem_Click);
			// 
			// самойПопулярнойМаркиАвтомобиляToolStripMenuItem
			// 
			this->самойПопулярнойМаркиАвтомобиляToolStripMenuItem->Enabled = false;
			this->самойПопулярнойМаркиАвтомобиляToolStripMenuItem->Name = L"самойПопулярнойМаркиАвтомобиляToolStripMenuItem";
			this->самойПопулярнойМаркиАвтомобиляToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->самойПопулярнойМаркиАвтомобиляToolStripMenuItem->Text = L"Самой популярной марки автомобиля";
			this->самойПопулярнойМаркиАвтомобиляToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::самойПопулярнойМаркиАвтомобиляToolStripMenuItem_Click);
			// 
			// сформироватьСписокToolStripMenuItem
			// 
			this->сформироватьСписокToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem,
					this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem
			});
			this->сформироватьСписокToolStripMenuItem->Name = L"сформироватьСписокToolStripMenuItem";
			this->сформироватьСписокToolStripMenuItem->Size = System::Drawing::Size(154, 20);
			this->сформироватьСписокToolStripMenuItem->Text = L"Сформировать список...";
			// 
			// автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem
			// 
			this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem->Enabled = false;
			this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem->Name = L"автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem";
			this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem->Size = System::Drawing::Size(409, 22);
			this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem->Text = L"Автомобилей, зарегистрированных не ранее заданного года";
			this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem_Click);
			// 
			// владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem
			// 
			this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem->Enabled = false;
			this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem->Name = L"владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem";
			this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem->Size = System::Drawing::Size(409, 22);
			this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem->Text = L"Владельцев, просрочивших техосмотр более чем на год";
			this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->какИзменятьДанныеТаблицыToolStripMenuItem,
					this->какНаходитьИнформациюToolStripMenuItem, this->какСформироватьСписокToolStripMenuItem
			});
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// какИзменятьДанныеТаблицыToolStripMenuItem
			// 
			this->какИзменятьДанныеТаблицыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->добавлениеВладельцаАвтомобиляToolStripMenuItem,
					this->удалениеИнформацииОВладельцеАвтомобиляToolStripMenuItem, this->редактированиеИнформацииОВладельцеАвтомобиляToolStripMenuItem,
					this->сортировкаToolStripMenuItem1
			});
			this->какИзменятьДанныеТаблицыToolStripMenuItem->Name = L"какИзменятьДанныеТаблицыToolStripMenuItem";
			this->какИзменятьДанныеТаблицыToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->какИзменятьДанныеТаблицыToolStripMenuItem->Text = L"Как изменять данные таблицы\?";
			// 
			// добавлениеВладельцаАвтомобиляToolStripMenuItem
			// 
			this->добавлениеВладельцаАвтомобиляToolStripMenuItem->Name = L"добавлениеВладельцаАвтомобиляToolStripMenuItem";
			this->добавлениеВладельцаАвтомобиляToolStripMenuItem->Size = System::Drawing::Size(379, 22);
			this->добавлениеВладельцаАвтомобиляToolStripMenuItem->Text = L"Добавление владельца автомобиля";
			this->добавлениеВладельцаАвтомобиляToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::добавлениеВладельцаАвтомобиляToolStripMenuItem_Click);
			// 
			// удалениеИнформацииОВладельцеАвтомобиляToolStripMenuItem
			// 
			this->удалениеИнформацииОВладельцеАвтомобиляToolStripMenuItem->Name = L"удалениеИнформацииОВладельцеАвтомобиляToolStripMenuItem";
			this->удалениеИнформацииОВладельцеАвтомобиляToolStripMenuItem->Size = System::Drawing::Size(379, 22);
			this->удалениеИнформацииОВладельцеАвтомобиляToolStripMenuItem->Text = L"Удаление информации о владельце автомобиля";
			this->удалениеИнформацииОВладельцеАвтомобиляToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::удалениеИнформацииОВладельцеАвтомобиляToolStripMenuItem_Click);
			// 
			// редактированиеИнформацииОВладельцеАвтомобиляToolStripMenuItem
			// 
			this->редактированиеИнформацииОВладельцеАвтомобиляToolStripMenuItem->Name = L"редактированиеИнформацииОВладельцеАвтомобиляToolStripMenuItem";
			this->редактированиеИнформацииОВладельцеАвтомобиляToolStripMenuItem->Size = System::Drawing::Size(379, 22);
			this->редактированиеИнформацииОВладельцеАвтомобиляToolStripMenuItem->Text = L"Редактирование информации о владельце автомобиля";
			this->редактированиеИнформацииОВладельцеАвтомобиляToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::редактированиеИнформацииОВладельцеАвтомобиляToolStripMenuItem_Click);
			// 
			// сортировкаToolStripMenuItem1
			// 
			this->сортировкаToolStripMenuItem1->Name = L"сортировкаToolStripMenuItem1";
			this->сортировкаToolStripMenuItem1->Size = System::Drawing::Size(379, 22);
			this->сортировкаToolStripMenuItem1->Text = L"Сортировка";
			this->сортировкаToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::сортировкаToolStripMenuItem1_Click);
			// 
			// какНаходитьИнформациюToolStripMenuItem
			// 
			this->какНаходитьИнформациюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->владельцаАвтомобиляToolStripMenuItem1,
					this->самыйСтарыйАвтомобильToolStripMenuItem, this->маркуСамогоПопулярногоАвтомобиляToolStripMenuItem
			});
			this->какНаходитьИнформациюToolStripMenuItem->Name = L"какНаходитьИнформациюToolStripMenuItem";
			this->какНаходитьИнформациюToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->какНаходитьИнформациюToolStripMenuItem->Text = L"Как находить...";
			// 
			// владельцаАвтомобиляToolStripMenuItem1
			// 
			this->владельцаАвтомобиляToolStripMenuItem1->Name = L"владельцаАвтомобиляToolStripMenuItem1";
			this->владельцаАвтомобиляToolStripMenuItem1->Size = System::Drawing::Size(299, 22);
			this->владельцаАвтомобиляToolStripMenuItem1->Text = L"Владельца автомобиля";
			this->владельцаАвтомобиляToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::владельцаАвтомобиляToolStripMenuItem1_Click);
			// 
			// самыйСтарыйАвтомобильToolStripMenuItem
			// 
			this->самыйСтарыйАвтомобильToolStripMenuItem->Name = L"самыйСтарыйАвтомобильToolStripMenuItem";
			this->самыйСтарыйАвтомобильToolStripMenuItem->Size = System::Drawing::Size(299, 22);
			this->самыйСтарыйАвтомобильToolStripMenuItem->Text = L"Самый старый автомобиль";
			this->самыйСтарыйАвтомобильToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::самыйСтарыйАвтомобильToolStripMenuItem_Click);
			// 
			// маркуСамогоПопулярногоАвтомобиляToolStripMenuItem
			// 
			this->маркуСамогоПопулярногоАвтомобиляToolStripMenuItem->Name = L"маркуСамогоПопулярногоАвтомобиляToolStripMenuItem";
			this->маркуСамогоПопулярногоАвтомобиляToolStripMenuItem->Size = System::Drawing::Size(299, 22);
			this->маркуСамогоПопулярногоАвтомобиляToolStripMenuItem->Text = L"Марку самого популярного автомобиля";
			this->маркуСамогоПопулярногоАвтомобиляToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::маркуСамогоПопулярногоАвтомобиляToolStripMenuItem_Click);
			// 
			// какСформироватьСписокToolStripMenuItem
			// 
			this->какСформироватьСписокToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem1,
					this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem1
			});
			this->какСформироватьСписокToolStripMenuItem->Name = L"какСформироватьСписокToolStripMenuItem";
			this->какСформироватьСписокToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->какСформироватьСписокToolStripMenuItem->Text = L"Как сформировать список...";
			// 
			// автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem1
			// 
			this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem1->Name = L"автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem1";
			this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem1->Size = System::Drawing::Size(409, 22);
			this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem1->Text = L"Автомобилей, зарегистрированных не ранее заданного года";
			this->автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem1_Click);
			// 
			// владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem1
			// 
			this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem1->Name = L"владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem1";
			this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem1->Size = System::Drawing::Size(409, 22);
			this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem1->Text = L"Владельцев, просрочивших техосмотр более чем на год";
			this->владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem1_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оПрограммеToolStripMenuItem1,
					this->заданиеToolStripMenuItem
			});
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// оПрограммеToolStripMenuItem1
			// 
			this->оПрограммеToolStripMenuItem1->Name = L"оПрограммеToolStripMenuItem1";
			this->оПрограммеToolStripMenuItem1->Size = System::Drawing::Size(149, 22);
			this->оПрограммеToolStripMenuItem1->Text = L"О программе";
			this->оПрограммеToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem1_Click);
			// 
			// заданиеToolStripMenuItem
			// 
			this->заданиеToolStripMenuItem->Name = L"заданиеToolStripMenuItem";
			this->заданиеToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->заданиеToolStripMenuItem->Text = L"Задание";
			this->заданиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::заданиеToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 52);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(896, 336);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellValueChanged);
			this->dataGridView1->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MyForm::dataGridView1_RowsAdded);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"№";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Фамилия владельца";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 120;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Марка";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Год выпуска";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 140;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Цвет автомобиля";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Номер автомобиля";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Дата техосмотра";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 180;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Год регистрации в ГАИ";
			this->Column8->Name = L"Column8";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripButton4, this->toolStripButton6, this->toolStripButton5
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(896, 25);
			this->toolStrip1->TabIndex = 5;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Enabled = false;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"Сохранить";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Enabled = false;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"Сохранить как";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"Открыть";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"Добавить";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Enabled = false;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"Редактировать";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Enabled = false;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(23, 22);
			this->toolStripButton5->Text = L"Поиск владельца";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(896, 393);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip2);
			this->Name = L"MyForm";
			this->Text = L"ГАИ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MainForm_Closing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//При нажатии кнопки показывается форма MyForm1
		MyForm1^ addDriver = gcnew MyForm1;
		addDriver->Show();
	}
	private: System::Void заданиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//При нажатии кнопки появляется сообщение с текстом
		MessageBox::Show(L"Написать программу «Справочная ГАИ». Структура исходных записей: марка, год выпуска, цвет и номер автомобиля, год регистрации в ГАИ, фамиллия владельца, дата техосмотра. В результате работы программы сформировать список автомобилей, зарегистрированных не ранее заданного года, а также список владельцев, просрочивших техосмотр более чем на год.Определить владельца самого старого автомобиля и самую популярную марку автомобиля.Организовать поиск владельца автомобиля по цвету, марке и первой букве номера автомашины.", L"Задание", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
public:
	bool changing=false;
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Если в базе данных произощли изменения то при выходе из приложения появится сообщение, предупреждающее о том, что есть несохраненные данные
	if (changing == true)
	{
		if (MessageBox::Show("Вы точно хотите выйти? Есть несохраненные данные.", "Выход", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	//Иначе появится сообщение подтверждения выхода из приложения
	else
	{
		auto result = MessageBox::Show(L"Вы точно хотите выйти из приложения?", L"Выход из приложения", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
}
private: System::Void добавитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//При нажатии кнопки откроется форма MyForm1
	MyForm1^ addDriver = gcnew MyForm1;
	addDriver->Show();
	addDriver->Visible = false;
	//Если результат диалога= ОК, то значения, введенные в MyForm1 перенесутся в dataGridView1
	if (addDriver->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->Rows->Add(addDriver->InputValues);
	}
	changing = true;
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private:
	String^ currentFileName;
private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "Binary files (*.bin)|*.bin";
	saveFileDialog->Title = "Save data to binary file";

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		currentFileName = saveFileDialog->FileName;
		SaveDataToFile(currentFileName);
	}
	changing = false;
}
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(currentFileName))
	{
		SaveDataToFile(currentFileName);
		changing = false;
	}
	else
	{
		MessageBox::Show("Прежде чем использовать 'Сохранить', сохраните файл при помощи 'Сохранит как'.", "Файл не выбран", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
	private: System::Void SaveDataToFile(String^ filename)
	{
		FileStream^ fs = gcnew FileStream(filename, FileMode::Create);
		BinaryWriter^ bw = gcnew BinaryWriter(fs);

		for (int i = 0; i < dataGridView1->Rows->Count; i++)
		{
			for (int j = 0; j < dataGridView1->Columns->Count; j++)
			{
				if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr)
				{
					String^ value = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
					bw->Write(value);
				}
			}
		}
	}
private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Title = "Open binary file";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ fileName = openFileDialog->FileName;
		currentFileName = fileName;
		FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
		BinaryReader^ br = gcnew BinaryReader(fs);

		// Загрузка данных из бинарного файла в DataGridView
		int i = 0;
		while (br->PeekChar() != -1) {
			if (i >= dataGridView1->Rows->Count) {
				dataGridView1->Rows->Add();
			}
			for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				String^ value = br->ReadString();
				dataGridView1->Rows[i]->Cells[j]->Value = value;
			}
			i++;
		}

		br->Close();
		fs->Close();
	}
}
private: System::Void dataGridView1_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
	//Нумерация строк
	for (int i = 0; i < e->RowCount; i++) {
		int rowIndex = e->RowIndex + i;
		this->dataGridView1->Rows[rowIndex]->Cells[0]->Value = (rowIndex + 1).ToString();
	}
}
private: System::Void удалитьToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Для удаления берется индекс выделенной строки
	if (dataGridView1->SelectedCells->Count > 0) {
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
		if (MessageBox::Show("Вы действительно хотите удалить владельца " + dataGridView1->Rows[rowIndex]->Cells[1]->Value->ToString() + "?", "Подтверждение удаления", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
			dataGridView1->Rows->RemoveAt(rowIndex);
		}
	}
	changing = true;
}
private: System::Void отАДоЯToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Для сортировки берется столбец с фамилией- Column2
	dataGridView1->Sort(dataGridView1->Columns["Column2"], ListSortDirection::Ascending);
}
private: System::Void отЯДоАToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Column2"], ListSortDirection::Descending);
}
private: System::Void редактироватьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//При нажатии кнопки открывается форма MyForm2
	MyForm2^ redaktDriver = gcnew MyForm2;
	redaktDriver->Show();
	//Берутся индексы выделенной строки
	int rowind = dataGridView1->SelectedCells[0]->RowIndex;
	int colind = dataGridView1->SelectedCells[0]->ColumnIndex;

	int i = 0;
	//В цикле рассматриваются все строки, и, когда попадается нужная, берутся ее значения и заносятся во все textBox в MyForm2
	for each (DataGridViewRow ^ row in dataGridView1->Rows)
	{
		if (i == rowind)
		{
			redaktDriver->textBox1->Text = row->Cells[1]->Value->ToString();
			redaktDriver->comboBoxMark->Text = row->Cells[2]->Value->ToString();
			redaktDriver->textBox3->Text = row->Cells[3]->Value->ToString();
			redaktDriver->comboBoxColor->Text = row->Cells[4]->Value->ToString();
			redaktDriver->textBox5->Text = row->Cells[5]->Value->ToString();
			redaktDriver->textBox6->Text = row->Cells[6]->Value->ToString();
			redaktDriver->textBox7->Text = row->Cells[7]->Value->ToString();
		}
		i++;
	}
	//При открытии формы во всех textBox уже будет записаны текущие значения строки, после нажатия кнопки в MyForm2 значения всех textBox перезапишутся в строку таблицы
	redaktDriver->Visible = false;
	if (redaktDriver->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->Rows[rowind]->Cells[1]->Value = redaktDriver->textBox1->Text;
		dataGridView1->Rows[rowind]->Cells[2]->Value = redaktDriver->comboBoxMark->Text;
		dataGridView1->Rows[rowind]->Cells[3]->Value = redaktDriver->textBox3->Text;
		dataGridView1->Rows[rowind]->Cells[4]->Value = redaktDriver->comboBoxColor->Text;
		dataGridView1->Rows[rowind]->Cells[5]->Value = redaktDriver->textBox5->Text;
		dataGridView1->Rows[rowind]->Cells[6]->Value = redaktDriver->textBox6->Text;
		dataGridView1->Rows[rowind]->Cells[7]->Value = redaktDriver->textBox7->Text;
	}
	changing = true;
}
private: System::Void поНомеруToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//В случае использования сортировки по фамилии, для того чтобы восстановить список, можно сделать сортировку по возрастанию по номеру строки
	dataGridView1->Sort(dataGridView1->Columns["Column1"], ListSortDirection::Ascending);
}
private: System::Void самогоСтарогоАвтомобиляToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Minsurname;
	int Minyear = 2024;
	int i = 0, rowind;

	//Рассматривается каждая строка таблицы
	for each (DataGridViewRow ^ row in dataGridView1->Rows)
	{
		//Значения года выпуска автомобиля из таблицы конвертируется в тип int для того, чтобы можно было сравнивать его с Minyear
		int year = Convert::ToInt32(row->Cells[3]->Value);
		//Если year < Minyear, то Minyear = year, и фамилия владельца записывается в Minsurname
		if (year < Minyear)
		{
			Minyear = year;
			Minsurname = row->Cells[1]->Value->ToString();
			rowind = i;
		}
		i++;
	}

	MessageBox::Show("Владелец самого старого автомобиля: " + Minsurname, "Владелец найден!", MessageBoxButtons::OK);
	dataGridView1->Rows[rowind]->Selected = true;
}
private: System::Void самойПопулярнойМаркиАвтомобиляToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	// создаем словарь для подсчета количества повторений слов
	Dictionary<String^, int>^ Marks = gcnew Dictionary<String^, int>();

	// проходим по всем строкам и добавляем слова в словарь
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		String^ mark = dataGridView1->Rows[i]->Cells[2]->Value->ToString(); // получаем значение ячейки со словом
		if (Marks->ContainsKey(mark))
			Marks[mark]++; // если слово уже есть в словаре, увеличиваем его количество на 1
		else
			Marks->Add(mark, 1); // если слова еще нет в словаре, добавляем его с количеством 1
	}

	// ищем слово с максимальным количеством повторений
	String^ mostPopularMark;
	int maxCount = 0;
	for each (KeyValuePair<String^, int> ^ pair in Marks)
	{
		if (pair->Value > maxCount)
		{
			mostPopularMark = pair->Key;
			maxCount = pair->Value;
		}
	}

	// выводим результат
	MessageBox::Show("Самая популярная марка автомобилей: " + mostPopularMark, "Самая популярная марка.", MessageBoxButtons::OK);
}
private: System::Void владельцаАвтомобиляToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Открывается форма поиска владельца автомобиля- MyForm3
	MyForm3^ findDriver = gcnew MyForm3;
	findDriver->Show();

	findDriver->Visible = false;
	if (findDriver->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//Записываются значения из всех textBox формы MyForm3
		String^ Color = findDriver->comboBox1->Text;
		String^ Mark = findDriver->comboBox2->Text;
		String^ Firstsymbol = findDriver->textBox3->Text;

		bool col = false, m = false, num = false;
		int ans = 0;
		//Рассматривается каждая строка таблицы, если значения из textBox являются частью или полностью совпадают со значениями из таблицы,
		//то эта строка выделяется
		for (int i = 0; i < dataGridView1->Rows->Count; i++)
		{
			String^ color = dataGridView1->Rows[i]->Cells[4]->Value->ToString();
			String^ mark= dataGridView1->Rows[i]->Cells[2]->Value->ToString();
			String^ number = dataGridView1->Rows[i]->Cells[5]->Value->ToString();
			col = false;
			m = false;
			num = false;

			char* cch = (char*)(void*)Marshal::StringToHGlobalAnsi(color);
			char* Cch = (char*)(void*)Marshal::StringToHGlobalAnsi(Color);

			char* mch = (char*)(void*)Marshal::StringToHGlobalAnsi(mark);
			char* Mch = (char*)(void*)Marshal::StringToHGlobalAnsi(Mark);

			char* nch = (char*)(void*)Marshal::StringToHGlobalAnsi(number);
			char* Nch = (char*)(void*)Marshal::StringToHGlobalAnsi(Firstsymbol);

			if (strstr(cch, Cch)==cch)
			{
				col = true;
			}
			if (strstr(mch, Mch) == mch)
			{
				m = true;
			}
			if (strstr(nch, Nch) == nch)
			{
				num = true;
			}
			if (col == true && m == true && num == true)
			{
				ans++;
				dataGridView1->Rows[i]->Selected = true;
			}
		}

		if (ans == 1)
		{
			MessageBox::Show("Владелец найден!", "Поиск", MessageBoxButtons::OK);
		}
		else if (ans > 1)
		{
			MessageBox::Show("Найдено "+ans+" владельцев.", "Поиск", MessageBoxButtons::OK);
		}
		else
		{
			MessageBox::Show("Владелец не найден.", "Поиск", MessageBoxButtons::OK);
		}
	}
}
private: System::Void автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Открывается форма ввода года регистрации- MyForm5 и форма получившегося списка автомобилей- MyForm4
	MyForm5^ Cars = gcnew MyForm5;
	MyForm4^ Spisok = gcnew MyForm4;
	Cars->Show();
	Cars->Visible = false;
	if (Cars->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		int year = Convert::ToInt32(Cars->textBox1->Text);
		int k = 0;
		//Рассматриваются все строки таблицы главной формы, если год регистрации определенной строки больше или равен значению textBox из формы MyForm5,
		//то значения столбцов этой строки записываются в список и он добавляется в таблицу в MyForm4
		for (int i = 0; i < dataGridView1->Rows->Count; i++)
		{
			int RegYear = Convert::ToInt32(dataGridView1->Rows[i]->Cells[7]->Value);

			if (RegYear >= year)
			{
				array<Object^>^ values = gcnew array<Object^>(dataGridView1->Columns->Count);
				for (int j = 0; j < dataGridView1->Columns->Count; j++)
				{
					values[j] = dataGridView1->Rows[i]->Cells[j]->Value;
				}
				Spisok->AddRow(values);
				k++;
			}
		}
		if (k == 0)
		{
			MessageBox::Show("Ниодного владельца не найдено.", "Не найдено", MessageBoxButtons::OK);
		}
		else
		{
			Spisok->Show();
		}
	}
}
private: System::Void владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Открывается форма получившегося списка- MyForm4
	MyForm4^ Owners = gcnew MyForm4;
	Owners->Text = "Список владельцев, просрочивших техосмотр более чем на год.";
	//Записывается дата в настоящем времени
	DateTime Datenow = DateTime::Now;

	int k = 0;
	//Рассматривается каждая строка таблицы главной формы
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		//Записывается значение даты регистрации
		DateTime Datetech = Convert::ToDateTime(dataGridView1->Rows[i]->Cells[6]->Value);
		//Разница во времени
		int time = Datenow.Year - Datetech.Year;

		if (Datenow<Datetech.AddYears(time)) {
			time--;
		}
		//Если разница во времени больше 1 года, то столбцы строки записываются в список, и он добавляется в таблицу формы MyForm4
		if (time > 1) {
			array<Object^>^ Values = gcnew array<Object^>(dataGridView1->Columns->Count);
			for (int j = 0; j < dataGridView1->Columns->Count; j++)
			{
				Values[j] = dataGridView1->Rows[i]->Cells[j]->Value;
			}
			Owners->AddRow(Values);
			k++;
		}
	}
	if (k == 0)
	{
		MessageBox::Show("Ниодного владельца не найдено", "Не найдено", MessageBoxButtons::OK);
	}
	else
	{
		Owners->Show();
	}
}
private: System::Void редактироватьToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	//При нажатии кнопки открывается форма MyForm2
	MyForm2^ redaktDriver = gcnew MyForm2;
	redaktDriver->Show();
	//Берутся индексы выделенной строки
	int rowind = dataGridView1->SelectedCells[0]->RowIndex;
	int colind = dataGridView1->SelectedCells[0]->ColumnIndex;

	int i = 0;
	//В цикле рассматриваются все строки, и, когда попадается нужная, берутся ее значения и заносятся во все textBox в MyForm2
	for each (DataGridViewRow ^ row in dataGridView1->Rows)
	{
		if (i == rowind)
		{
			redaktDriver->textBox1->Text = row->Cells[1]->Value->ToString();
			redaktDriver->comboBoxMark->Text = row->Cells[2]->Value->ToString();
			redaktDriver->textBox3->Text = row->Cells[3]->Value->ToString();
			redaktDriver->comboBoxColor->Text = row->Cells[4]->Value->ToString();
			redaktDriver->textBox5->Text = row->Cells[5]->Value->ToString();
			redaktDriver->textBox6->Text = row->Cells[6]->Value->ToString();
			redaktDriver->textBox7->Text = row->Cells[7]->Value->ToString();
		}
		i++;
	}
	redaktDriver->Visible = false;
	//При открытии формы во всех textBox уже будет записаны текущие значения строки, после нажатия кнопки в MyForm2 значения всех textBox перезапишутся в строку таблицы
	if (redaktDriver->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->Rows[rowind]->Cells[1]->Value = redaktDriver->textBox1->Text;
		dataGridView1->Rows[rowind]->Cells[2]->Value = redaktDriver->comboBoxMark->Text;
		dataGridView1->Rows[rowind]->Cells[3]->Value = redaktDriver->textBox3->Text;
		dataGridView1->Rows[rowind]->Cells[4]->Value = redaktDriver->comboBoxColor->Text;
		dataGridView1->Rows[rowind]->Cells[5]->Value = redaktDriver->textBox5->Text;
		dataGridView1->Rows[rowind]->Cells[6]->Value = redaktDriver->textBox6->Text;
		dataGridView1->Rows[rowind]->Cells[7]->Value = redaktDriver->textBox7->Text;
	}
	changing = true;
}
private: System::Void удалитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedCells->Count > 0) {
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
		if (MessageBox::Show("Вы действительно хотите удалить владельца " + dataGridView1->Rows[rowIndex]->Cells[1]->Value->ToString() + "?", "Подтверждение удаления", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
			dataGridView1->Rows->RemoveAt(rowIndex);
		}
	}
	changing = true;
}
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//Если в главной форме нет строк, то функциональные будут недоступны
	if (dataGridView1->Rows->Count == 0) {
		редактироватьToolStripMenuItem1->Enabled = false;
		удалитьToolStripMenuItem->Enabled = false;
		сортировкаToolStripMenuItem->Enabled = false;
		сохранитьToolStripMenuItem->Enabled = false;
		сохранитьКакToolStripMenuItem->Enabled = false;
		владельцаАвтомобиляToolStripMenuItem->Enabled = false;
		самогоСтарогоАвтомобиляToolStripMenuItem->Enabled = false;
		самойПопулярнойМаркиАвтомобиляToolStripMenuItem->Enabled = false;
		автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem->Enabled = false;
		владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem->Enabled = false;
		toolStripButton1->Enabled = false;
		toolStripButton2->Enabled = false;
		toolStripButton5->Enabled = false;
		toolStripButton6->Enabled = false;
	}
	else {
		редактироватьToolStripMenuItem1->Enabled = true;
		удалитьToolStripMenuItem->Enabled = true;
		сортировкаToolStripMenuItem->Enabled = true;
		сохранитьToolStripMenuItem->Enabled = true;
		сохранитьКакToolStripMenuItem->Enabled = true;
		владельцаАвтомобиляToolStripMenuItem->Enabled = true;
		самогоСтарогоАвтомобиляToolStripMenuItem->Enabled = true;
		самойПопулярнойМаркиАвтомобиляToolStripMenuItem->Enabled = true;
		автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem->Enabled = true;
		владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem->Enabled = true;
		toolStripButton1->Enabled = true;
		toolStripButton2->Enabled = true;
		toolStripButton5->Enabled = true;
		toolStripButton6->Enabled = true;
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Closing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//Если в базе данных будут изменения и пользователь захочет выйти без сохранения, то вылезет сообщение с предупреждением
	if (changing == true)
	{
		if (MessageBox::Show("Вы точно хотите выйти? Есть несохраненные данные.", "Выход", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
	}
	else
	{
		auto result = MessageBox::Show(L"Вы точно хотите выйти из приложения?", L"Выход из приложения", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
	}
}
//Справка
private: System::Void добавлениеВладельцаАвтомобиляToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Для добавления нового владельца автомобиля нужно: \n1) В меню нажмите кнопку Правка->Добавить, и вылезет форма заполнения владельца автомобиля; \n2) Заполните все поля и нажмите кнопку Добавить;", "Добавление владельца автомобиля", MessageBoxButtons::OK);
}
private: System::Void удалениеИнформацииОВладельцеАвтомобиляToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Для удаления информации о владельце автомобиля нужно: \n1) Выделите элемент строки таблицы, которую хотите удалить; \n2) В меню нажмите на Правка->Удалить или ПРКМ->Удалить;", "Удаление информации о владельце автомобиля", MessageBoxButtons::OK);
}
private: System::Void редактированиеИнформацииОВладельцеАвтомобиляToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Для редактирования информации о владельце автомобиля нужно: \n1) Выделите элемент строки таблицы, которую хотите редактировать; \n2) В меню нажмите на Правка->Редактировать или ПРКМ->Редактировать;", "Редактирование информации о владельце автомобиля", MessageBoxButtons::OK);
}
private: System::Void сортировкаToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Для сортировки строк таблицы нужно: \n1) В меню нажать на Правка->Сортировка; \n2) Для сортировки в алфавитном порядке выберите От А до Я, наоборот- От Я до А;\n3) Чтобы убрать сортировку нажать кнопку Убрать сортировку", "Сортировка", MessageBoxButtons::OK);
}
private: System::Void владельцаАвтомобиляToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Для поиска владельца автомобиля нужно: \n1) В меню нажать на Поиск->Владельца автомобиля и появится форма поиска владельца автомобиля; \n2) Ввести цвет автомобиля, его марку и первый символ номера;\n3) Нажать кнопку Поиск", "Поиск владельца автомобиля", MessageBoxButtons::OK);
}
private: System::Void самыйСтарыйАвтомобильToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Для поиска самого старого автомобиля нужно: \n1) В меню нажать на Поиск->Самого старого автомобиля; ", "Поиск самого старого автомобиля", MessageBoxButtons::OK);

}
private: System::Void маркуСамогоПопулярногоАвтомобиляToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Для поиска самой популярной марки автомобилей нужно: \n1) В меню нажать на Поиск->Самой популярной марки автомобилей;", "Поиск самой популярной марки автомобилей", MessageBoxButtons::OK);

}
private: System::Void автомобилейЗарегистрированныхНеРанееЗаданногоГодаToolStripMenuItem1_Click(System::Object^ sender,
	System::EventArgs^ e) {
	MessageBox::Show("Для формирования списка автомобилей, зарегистрированных не ранее заданного года, нужно: \n1) В меню нажать на Сформировать список...->Автомобилей, зарегистрированных не ранее заданного года; \n2) Появится новая форма, где нужно ввести год регистрации, по которому вы хотите сформировать список; \n3) При нажатии кнопки Создать список появится список автомобилей, зарегистрированных не ранее заданного года;", "Формирование списка", MessageBoxButtons::OK);
}
private: System::Void владельцевПросрочившихТехосмотрБолееЧемНаГодToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Для формирования списка владельцев, просрочивших техосмотр более чем на год, нужно: \n1) В меню нажать на Сформировать список...->Владельцев, просрочивших техосмотр более чем на год;", "Формирование списка", MessageBoxButtons::OK);

}
private: System::Void оПрограммеToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Разработчик:\nФИО: Долгарев Дмитрий Сергеевич\nГруппа: ИСТб-22-1\n\nГод разработки: 2023\nВерсия 1.0\nЛицензия: отсутствует", "О программе", MessageBoxButtons::OK);
}
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(currentFileName))
	{
		SaveDataToFile(currentFileName);
		changing = false;
	}
	else
	{
		MessageBox::Show("Прежде чем использовать 'Сохранить', сохраните файл при помощи 'Сохранит как'.", "Файл не выбран", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "Binary files (*.bin)|*.bin";
	saveFileDialog->Title = "Save data to binary file";

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		currentFileName = saveFileDialog->FileName;
		SaveDataToFile(currentFileName);
	}
	changing = false;
}
private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Title = "Open binary file";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ fileName = openFileDialog->FileName;
		currentFileName = fileName;
		FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
		BinaryReader^ br = gcnew BinaryReader(fs);

		// Загрузка данных из бинарного файла в DataGridView
		int i = 0;
		while (br->PeekChar() != -1) {
			if (i >= dataGridView1->Rows->Count) {
				dataGridView1->Rows->Add();
			}
			for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				String^ value = br->ReadString();
				dataGridView1->Rows[i]->Cells[j]->Value = value;
			}
			i++;
		}

		br->Close();
		fs->Close();
	}
}
private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	//При нажатии кнопки откроется форма MyForm1
	MyForm1^ addDriver = gcnew MyForm1;
	addDriver->Show();
	addDriver->Visible = false;
	//Если результат диалога= ОК, то значения, введенные в MyForm1 перенесутся в dataGridView1
	if (addDriver->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->Rows->Add(addDriver->InputValues);
	}
	changing = true;
}
private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	//При нажатии кнопки открывается форма MyForm2
	MyForm2^ redaktDriver = gcnew MyForm2;
	redaktDriver->Show();
	//Берутся индексы выделенной строки
	int rowind = dataGridView1->SelectedCells[0]->RowIndex;
	int colind = dataGridView1->SelectedCells[0]->ColumnIndex;

	int i = 0;
	//В цикле рассматриваются все строки, и, когда попадается нужная, берутся ее значения и заносятся во все textBox в MyForm2
	for each (DataGridViewRow ^ row in dataGridView1->Rows)
	{
		if (i == rowind)
		{
			redaktDriver->textBox1->Text = row->Cells[1]->Value->ToString();
			redaktDriver->comboBoxMark->Text = row->Cells[2]->Value->ToString();
			redaktDriver->textBox3->Text = row->Cells[3]->Value->ToString();
			redaktDriver->comboBoxColor->Text = row->Cells[4]->Value->ToString();
			redaktDriver->textBox5->Text = row->Cells[5]->Value->ToString();
			redaktDriver->textBox6->Text = row->Cells[6]->Value->ToString();
			redaktDriver->textBox7->Text = row->Cells[7]->Value->ToString();
		}
		i++;
	}
	redaktDriver->Visible = false;
	//При открытии формы во всех textBox уже будет записаны текущие значения строки, после нажатия кнопки в MyForm2 значения всех textBox перезапишутся в строку таблицы
	if (redaktDriver->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->Rows[rowind]->Cells[1]->Value = redaktDriver->textBox1->Text;
		dataGridView1->Rows[rowind]->Cells[2]->Value = redaktDriver->comboBoxMark->Text;
		dataGridView1->Rows[rowind]->Cells[3]->Value = redaktDriver->textBox3->Text;
		dataGridView1->Rows[rowind]->Cells[4]->Value = redaktDriver->comboBoxColor->Text;
		dataGridView1->Rows[rowind]->Cells[5]->Value = redaktDriver->textBox5->Text;
		dataGridView1->Rows[rowind]->Cells[6]->Value = redaktDriver->textBox6->Text;
		dataGridView1->Rows[rowind]->Cells[7]->Value = redaktDriver->textBox7->Text;
	}
	changing = true;
}
private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	//Открывается форма поиска владельца автомобиля- MyForm3
	MyForm3^ findDriver = gcnew MyForm3;
	findDriver->Show();

	findDriver->Visible = false;
	if (findDriver->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//Записываются значения из всех textBox формы MyForm3
		String^ Color = findDriver->comboBox1->Text;
		String^ Mark = findDriver->comboBox2->Text;
		String^ Firstsymbol = findDriver->textBox3->Text;

		bool col = false, m = false, num = false;
		int ans = 0;
		//Рассматривается каждая строка таблицы, если значения из textBox являются частью или полностью совпадают со значениями из таблицы,
		//то эта строка выделяется
		for (int i = 0; i < dataGridView1->Rows->Count; i++)
		{
			String^ color = dataGridView1->Rows[i]->Cells[4]->Value->ToString();
			String^ mark = dataGridView1->Rows[i]->Cells[2]->Value->ToString();
			String^ number = dataGridView1->Rows[i]->Cells[5]->Value->ToString();
			col = false;
			m = false;
			num = false;

			char* cch = (char*)(void*)Marshal::StringToHGlobalAnsi(color);
			char* Cch = (char*)(void*)Marshal::StringToHGlobalAnsi(Color);

			char* mch = (char*)(void*)Marshal::StringToHGlobalAnsi(mark);
			char* Mch = (char*)(void*)Marshal::StringToHGlobalAnsi(Mark);

			char* nch = (char*)(void*)Marshal::StringToHGlobalAnsi(number);
			char* Nch = (char*)(void*)Marshal::StringToHGlobalAnsi(Firstsymbol);

			if (strstr(cch, Cch) == cch)
			{
				col = true;
			}
			if (strstr(mch, Mch) == mch)
			{
				m = true;
			}
			if (strstr(nch, Nch) == nch)
			{
				num = true;
			}
			if (col == true && m == true && num == true)
			{
				ans++;
				dataGridView1->Rows[i]->Selected = true;
			}
		}

		if (ans == 1)
		{
			MessageBox::Show("Владелец найден!", "Поиск", MessageBoxButtons::OK);
		}
		else if (ans > 1)
		{
			MessageBox::Show("Найдено " + ans + " владельцев.", "Поиск", MessageBoxButtons::OK);
		}
		else
		{
			MessageBox::Show("Владелец не найден.", "Поиск", MessageBoxButtons::OK);
		}
	}
}
};
}
