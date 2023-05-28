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
	/// ������ ��� MyForm
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
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;










	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;








	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������������������������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������������������������ToolStripMenuItem1;
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
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������������������������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������������������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->�������������ToolStripMenuItem,
					this->�������ToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(155, 48);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->�������������ToolStripMenuItem->Text = L"�������������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem1
			// 
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
			this->�������ToolStripMenuItem1->Size = System::Drawing::Size(154, 22);
			this->�������ToolStripMenuItem1->Text = L"�������";
			this->�������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem1_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->����ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->�����ToolStripMenuItem, this->������������������ToolStripMenuItem, this->�������ToolStripMenuItem,
					this->����������ToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(896, 24);
			this->menuStrip2->TabIndex = 3;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->���������ToolStripMenuItem,
					this->������������ToolStripMenuItem, this->�������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Enabled = false;
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Enabled = false;
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->������������ToolStripMenuItem->Text = L"��������� ���";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->��������ToolStripMenuItem,
					this->�������������ToolStripMenuItem1, this->�������ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->��������ToolStripMenuItem->Text = L"������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem1
			// 
			this->�������������ToolStripMenuItem1->Enabled = false;
			this->�������������ToolStripMenuItem1->Name = L"�������������ToolStripMenuItem1";
			this->�������������ToolStripMenuItem1->Size = System::Drawing::Size(154, 22);
			this->�������������ToolStripMenuItem1->Text = L"�������������";
			this->�������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Enabled = false;
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->������ToolStripMenuItem,
					this->������ToolStripMenuItem, this->��������ToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Enabled = false;
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->������ToolStripMenuItem->Text = L"�� � �� �";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->������ToolStripMenuItem->Text = L"�� � �� �";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->��������ToolStripMenuItem->Text = L"������ ����������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������������������ToolStripMenuItem,
					this->�����������������������ToolStripMenuItem, this->������������������������������ToolStripMenuItem
			});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Enabled = false;
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->�������������������ToolStripMenuItem->Text = L"��������� ����������";
			this->�������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������������ToolStripMenuItem_Click);
			// 
			// �����������������������ToolStripMenuItem
			// 
			this->�����������������������ToolStripMenuItem->Enabled = false;
			this->�����������������������ToolStripMenuItem->Name = L"�����������������������ToolStripMenuItem";
			this->�����������������������ToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->�����������������������ToolStripMenuItem->Text = L"������ ������� ����������";
			this->�����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������������������ToolStripMenuItem_Click);
			// 
			// ������������������������������ToolStripMenuItem
			// 
			this->������������������������������ToolStripMenuItem->Enabled = false;
			this->������������������������������ToolStripMenuItem->Name = L"������������������������������ToolStripMenuItem";
			this->������������������������������ToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->������������������������������ToolStripMenuItem->Text = L"����� ���������� ����� ����������";
			this->������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������������������ToolStripMenuItem_Click);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������������������������������������������ToolStripMenuItem,
					this->��������������������������������������������ToolStripMenuItem
			});
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(154, 20);
			this->������������������ToolStripMenuItem->Text = L"������������ ������...";
			// 
			// �������������������������������������������������ToolStripMenuItem
			// 
			this->�������������������������������������������������ToolStripMenuItem->Enabled = false;
			this->�������������������������������������������������ToolStripMenuItem->Name = L"�������������������������������������������������ToolStripMenuItem";
			this->�������������������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(409, 22);
			this->�������������������������������������������������ToolStripMenuItem->Text = L"�����������, ������������������ �� ����� ��������� ����";
			this->�������������������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������������������������������������������ToolStripMenuItem_Click);
			// 
			// ��������������������������������������������ToolStripMenuItem
			// 
			this->��������������������������������������������ToolStripMenuItem->Enabled = false;
			this->��������������������������������������������ToolStripMenuItem->Name = L"��������������������������������������������ToolStripMenuItem";
			this->��������������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(409, 22);
			this->��������������������������������������������ToolStripMenuItem->Text = L"����������, ������������ ��������� ����� ��� �� ���";
			this->��������������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������������������������������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->������������������������ToolStripMenuItem,
					this->���������������������ToolStripMenuItem, this->���������������������ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ������������������������ToolStripMenuItem
			// 
			this->������������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�����������������������������ToolStripMenuItem,
					this->��������������������������������������ToolStripMenuItem, this->��������������������������������������������ToolStripMenuItem,
					this->����������ToolStripMenuItem1
			});
			this->������������������������ToolStripMenuItem->Name = L"������������������������ToolStripMenuItem";
			this->������������������������ToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->������������������������ToolStripMenuItem->Text = L"��� �������� ������ �������\?";
			// 
			// �����������������������������ToolStripMenuItem
			// 
			this->�����������������������������ToolStripMenuItem->Name = L"�����������������������������ToolStripMenuItem";
			this->�����������������������������ToolStripMenuItem->Size = System::Drawing::Size(379, 22);
			this->�����������������������������ToolStripMenuItem->Text = L"���������� ��������� ����������";
			this->�����������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������������������������ToolStripMenuItem_Click);
			// 
			// ��������������������������������������ToolStripMenuItem
			// 
			this->��������������������������������������ToolStripMenuItem->Name = L"��������������������������������������ToolStripMenuItem";
			this->��������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(379, 22);
			this->��������������������������������������ToolStripMenuItem->Text = L"�������� ���������� � ��������� ����������";
			this->��������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������������������������������ToolStripMenuItem_Click);
			// 
			// ��������������������������������������������ToolStripMenuItem
			// 
			this->��������������������������������������������ToolStripMenuItem->Name = L"��������������������������������������������ToolStripMenuItem";
			this->��������������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(379, 22);
			this->��������������������������������������������ToolStripMenuItem->Text = L"�������������� ���������� � ��������� ����������";
			this->��������������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������������������������������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem1
			// 
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			this->����������ToolStripMenuItem1->Size = System::Drawing::Size(379, 22);
			this->����������ToolStripMenuItem1->Text = L"����������";
			this->����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem1_Click);
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������������������ToolStripMenuItem1,
					this->���������������������ToolStripMenuItem, this->��������������������������������ToolStripMenuItem
			});
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->���������������������ToolStripMenuItem->Text = L"��� ��������...";
			// 
			// �������������������ToolStripMenuItem1
			// 
			this->�������������������ToolStripMenuItem1->Name = L"�������������������ToolStripMenuItem1";
			this->�������������������ToolStripMenuItem1->Size = System::Drawing::Size(299, 22);
			this->�������������������ToolStripMenuItem1->Text = L"��������� ����������";
			this->�������������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�������������������ToolStripMenuItem1_Click);
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(299, 22);
			this->���������������������ToolStripMenuItem->Text = L"����� ������ ����������";
			this->���������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������������ToolStripMenuItem_Click);
			// 
			// ��������������������������������ToolStripMenuItem
			// 
			this->��������������������������������ToolStripMenuItem->Name = L"��������������������������������ToolStripMenuItem";
			this->��������������������������������ToolStripMenuItem->Size = System::Drawing::Size(299, 22);
			this->��������������������������������ToolStripMenuItem->Text = L"����� ������ ����������� ����������";
			this->��������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������������������������ToolStripMenuItem_Click);
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������������������������������������������ToolStripMenuItem1,
					this->��������������������������������������������ToolStripMenuItem1
			});
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(247, 22);
			this->���������������������ToolStripMenuItem->Text = L"��� ������������ ������...";
			// 
			// �������������������������������������������������ToolStripMenuItem1
			// 
			this->�������������������������������������������������ToolStripMenuItem1->Name = L"�������������������������������������������������ToolStripMenuItem1";
			this->�������������������������������������������������ToolStripMenuItem1->Size = System::Drawing::Size(409, 22);
			this->�������������������������������������������������ToolStripMenuItem1->Text = L"�����������, ������������������ �� ����� ��������� ����";
			this->�������������������������������������������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�������������������������������������������������ToolStripMenuItem1_Click);
			// 
			// ��������������������������������������������ToolStripMenuItem1
			// 
			this->��������������������������������������������ToolStripMenuItem1->Name = L"��������������������������������������������ToolStripMenuItem1";
			this->��������������������������������������������ToolStripMenuItem1->Size = System::Drawing::Size(409, 22);
			this->��������������������������������������������ToolStripMenuItem1->Text = L"����������, ������������ ��������� ����� ��� �� ���";
			this->��������������������������������������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::��������������������������������������������ToolStripMenuItem1_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������ToolStripMenuItem1,
					this->�������ToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			// 
			// ����������ToolStripMenuItem1
			// 
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			this->����������ToolStripMenuItem1->Size = System::Drawing::Size(149, 22);
			this->����������ToolStripMenuItem1->Text = L"� ���������";
			this->����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
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
			this->Column1->HeaderText = L"�";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"������� ���������";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 120;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"�����";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"��� �������";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 140;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"���� ����������";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"����� ����������";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"���� ����������";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 180;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"��� ����������� � ���";
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
			this->toolStripButton1->Text = L"���������";
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
			this->toolStripButton2->Text = L"��������� ���";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"�������";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"��������";
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
			this->toolStripButton6->Text = L"�������������";
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
			this->toolStripButton5->Text = L"����� ���������";
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
			this->Text = L"���";
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
		//��� ������� ������ ������������ ����� MyForm1
		MyForm1^ addDriver = gcnew MyForm1;
		addDriver->Show();
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//��� ������� ������ ���������� ��������� � �������
		MessageBox::Show(L"�������� ��������� ����������� ��Ȼ. ��������� �������� �������: �����, ��� �������, ���� � ����� ����������, ��� ����������� � ���, �������� ���������, ���� ����������. � ���������� ������ ��������� ������������ ������ �����������, ������������������ �� ����� ��������� ����, � ����� ������ ����������, ������������ ��������� ����� ��� �� ���.���������� ��������� ������ ������� ���������� � ����� ���������� ����� ����������.������������ ����� ��������� ���������� �� �����, ����� � ������ ����� ������ ����������.", L"�������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
public:
	bool changing=false;
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//���� � ���� ������ ��������� ��������� �� ��� ������ �� ���������� �������� ���������, ��������������� � ���, ��� ���� ������������� ������
	if (changing == true)
	{
		if (MessageBox::Show("�� ����� ������ �����? ���� ������������� ������.", "�����", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	//����� �������� ��������� ������������� ������ �� ����������
	else
	{
		auto result = MessageBox::Show(L"�� ����� ������ ����� �� ����������?", L"����� �� ����������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//��� ������� ������ ��������� ����� MyForm1
	MyForm1^ addDriver = gcnew MyForm1;
	addDriver->Show();
	addDriver->Visible = false;
	//���� ��������� �������= ��, �� ��������, ��������� � MyForm1 ����������� � dataGridView1
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
private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(currentFileName))
	{
		SaveDataToFile(currentFileName);
		changing = false;
	}
	else
	{
		MessageBox::Show("������ ��� ������������ '���������', ��������� ���� ��� ������ '�������� ���'.", "���� �� ������", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Title = "Open binary file";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ fileName = openFileDialog->FileName;
		currentFileName = fileName;
		FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
		BinaryReader^ br = gcnew BinaryReader(fs);

		// �������� ������ �� ��������� ����� � DataGridView
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
	//��������� �����
	for (int i = 0; i < e->RowCount; i++) {
		int rowIndex = e->RowIndex + i;
		this->dataGridView1->Rows[rowIndex]->Cells[0]->Value = (rowIndex + 1).ToString();
	}
}
private: System::Void �������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	//��� �������� ������� ������ ���������� ������
	if (dataGridView1->SelectedCells->Count > 0) {
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
		if (MessageBox::Show("�� ������������� ������ ������� ��������� " + dataGridView1->Rows[rowIndex]->Cells[1]->Value->ToString() + "?", "������������� ��������", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
			dataGridView1->Rows->RemoveAt(rowIndex);
		}
	}
	changing = true;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//��� ���������� ������� ������� � ��������- Column2
	dataGridView1->Sort(dataGridView1->Columns["Column2"], ListSortDirection::Ascending);
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Column2"], ListSortDirection::Descending);
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//��� ������� ������ ����������� ����� MyForm2
	MyForm2^ redaktDriver = gcnew MyForm2;
	redaktDriver->Show();
	//������� ������� ���������� ������
	int rowind = dataGridView1->SelectedCells[0]->RowIndex;
	int colind = dataGridView1->SelectedCells[0]->ColumnIndex;

	int i = 0;
	//� ����� ��������������� ��� ������, �, ����� ���������� ������, ������� �� �������� � ��������� �� ��� textBox � MyForm2
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
	//��� �������� ����� �� ���� textBox ��� ����� �������� ������� �������� ������, ����� ������� ������ � MyForm2 �������� ���� textBox ������������� � ������ �������
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
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//� ������ ������������� ���������� �� �������, ��� ���� ����� ������������ ������, ����� ������� ���������� �� ����������� �� ������ ������
	dataGridView1->Sort(dataGridView1->Columns["Column1"], ListSortDirection::Ascending);
}
private: System::Void �����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Minsurname;
	int Minyear = 2024;
	int i = 0, rowind;

	//��������������� ������ ������ �������
	for each (DataGridViewRow ^ row in dataGridView1->Rows)
	{
		//�������� ���� ������� ���������� �� ������� �������������� � ��� int ��� ����, ����� ����� ���� ���������� ��� � Minyear
		int year = Convert::ToInt32(row->Cells[3]->Value);
		//���� year < Minyear, �� Minyear = year, � ������� ��������� ������������ � Minsurname
		if (year < Minyear)
		{
			Minyear = year;
			Minsurname = row->Cells[1]->Value->ToString();
			rowind = i;
		}
		i++;
	}

	MessageBox::Show("�������� ������ ������� ����������: " + Minsurname, "�������� ������!", MessageBoxButtons::OK);
	dataGridView1->Rows[rowind]->Selected = true;
}
private: System::Void ������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	// ������� ������� ��� �������� ���������� ���������� ����
	Dictionary<String^, int>^ Marks = gcnew Dictionary<String^, int>();

	// �������� �� ���� ������� � ��������� ����� � �������
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		String^ mark = dataGridView1->Rows[i]->Cells[2]->Value->ToString(); // �������� �������� ������ �� ������
		if (Marks->ContainsKey(mark))
			Marks[mark]++; // ���� ����� ��� ���� � �������, ����������� ��� ���������� �� 1
		else
			Marks->Add(mark, 1); // ���� ����� ��� ��� � �������, ��������� ��� � ����������� 1
	}

	// ���� ����� � ������������ ����������� ����������
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

	// ������� ���������
	MessageBox::Show("����� ���������� ����� �����������: " + mostPopularMark, "����� ���������� �����.", MessageBoxButtons::OK);
}
private: System::Void �������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//����������� ����� ������ ��������� ����������- MyForm3
	MyForm3^ findDriver = gcnew MyForm3;
	findDriver->Show();

	findDriver->Visible = false;
	if (findDriver->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//������������ �������� �� ���� textBox ����� MyForm3
		String^ Color = findDriver->comboBox1->Text;
		String^ Mark = findDriver->comboBox2->Text;
		String^ Firstsymbol = findDriver->textBox3->Text;

		bool col = false, m = false, num = false;
		int ans = 0;
		//��������������� ������ ������ �������, ���� �������� �� textBox �������� ������ ��� ��������� ��������� �� ���������� �� �������,
		//�� ��� ������ ����������
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
			MessageBox::Show("�������� ������!", "�����", MessageBoxButtons::OK);
		}
		else if (ans > 1)
		{
			MessageBox::Show("������� "+ans+" ����������.", "�����", MessageBoxButtons::OK);
		}
		else
		{
			MessageBox::Show("�������� �� ������.", "�����", MessageBoxButtons::OK);
		}
	}
}
private: System::Void �������������������������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//����������� ����� ����� ���� �����������- MyForm5 � ����� ������������� ������ �����������- MyForm4
	MyForm5^ Cars = gcnew MyForm5;
	MyForm4^ Spisok = gcnew MyForm4;
	Cars->Show();
	Cars->Visible = false;
	if (Cars->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		int year = Convert::ToInt32(Cars->textBox1->Text);
		int k = 0;
		//��������������� ��� ������ ������� ������� �����, ���� ��� ����������� ������������ ������ ������ ��� ����� �������� textBox �� ����� MyForm5,
		//�� �������� �������� ���� ������ ������������ � ������ � �� ����������� � ������� � MyForm4
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
			MessageBox::Show("�������� ��������� �� �������.", "�� �������", MessageBoxButtons::OK);
		}
		else
		{
			Spisok->Show();
		}
	}
}
private: System::Void ��������������������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//����������� ����� ������������� ������- MyForm4
	MyForm4^ Owners = gcnew MyForm4;
	Owners->Text = "������ ����������, ������������ ��������� ����� ��� �� ���.";
	//������������ ���� � ��������� �������
	DateTime Datenow = DateTime::Now;

	int k = 0;
	//��������������� ������ ������ ������� ������� �����
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		//������������ �������� ���� �����������
		DateTime Datetech = Convert::ToDateTime(dataGridView1->Rows[i]->Cells[6]->Value);
		//������� �� �������
		int time = Datenow.Year - Datetech.Year;

		if (Datenow<Datetech.AddYears(time)) {
			time--;
		}
		//���� ������� �� ������� ������ 1 ����, �� ������� ������ ������������ � ������, � �� ����������� � ������� ����� MyForm4
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
		MessageBox::Show("�������� ��������� �� �������", "�� �������", MessageBoxButtons::OK);
	}
	else
	{
		Owners->Show();
	}
}
private: System::Void �������������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	//��� ������� ������ ����������� ����� MyForm2
	MyForm2^ redaktDriver = gcnew MyForm2;
	redaktDriver->Show();
	//������� ������� ���������� ������
	int rowind = dataGridView1->SelectedCells[0]->RowIndex;
	int colind = dataGridView1->SelectedCells[0]->ColumnIndex;

	int i = 0;
	//� ����� ��������������� ��� ������, �, ����� ���������� ������, ������� �� �������� � ��������� �� ��� textBox � MyForm2
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
	//��� �������� ����� �� ���� textBox ��� ����� �������� ������� �������� ������, ����� ������� ������ � MyForm2 �������� ���� textBox ������������� � ������ �������
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
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedCells->Count > 0) {
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
		if (MessageBox::Show("�� ������������� ������ ������� ��������� " + dataGridView1->Rows[rowIndex]->Cells[1]->Value->ToString() + "?", "������������� ��������", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
			dataGridView1->Rows->RemoveAt(rowIndex);
		}
	}
	changing = true;
}
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//���� � ������� ����� ��� �����, �� �������������� ����� ����������
	if (dataGridView1->Rows->Count == 0) {
		�������������ToolStripMenuItem1->Enabled = false;
		�������ToolStripMenuItem->Enabled = false;
		����������ToolStripMenuItem->Enabled = false;
		���������ToolStripMenuItem->Enabled = false;
		������������ToolStripMenuItem->Enabled = false;
		�������������������ToolStripMenuItem->Enabled = false;
		�����������������������ToolStripMenuItem->Enabled = false;
		������������������������������ToolStripMenuItem->Enabled = false;
		�������������������������������������������������ToolStripMenuItem->Enabled = false;
		��������������������������������������������ToolStripMenuItem->Enabled = false;
		toolStripButton1->Enabled = false;
		toolStripButton2->Enabled = false;
		toolStripButton5->Enabled = false;
		toolStripButton6->Enabled = false;
	}
	else {
		�������������ToolStripMenuItem1->Enabled = true;
		�������ToolStripMenuItem->Enabled = true;
		����������ToolStripMenuItem->Enabled = true;
		���������ToolStripMenuItem->Enabled = true;
		������������ToolStripMenuItem->Enabled = true;
		�������������������ToolStripMenuItem->Enabled = true;
		�����������������������ToolStripMenuItem->Enabled = true;
		������������������������������ToolStripMenuItem->Enabled = true;
		�������������������������������������������������ToolStripMenuItem->Enabled = true;
		��������������������������������������������ToolStripMenuItem->Enabled = true;
		toolStripButton1->Enabled = true;
		toolStripButton2->Enabled = true;
		toolStripButton5->Enabled = true;
		toolStripButton6->Enabled = true;
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Closing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//���� � ���� ������ ����� ��������� � ������������ ������� ����� ��� ����������, �� ������� ��������� � ���������������
	if (changing == true)
	{
		if (MessageBox::Show("�� ����� ������ �����? ���� ������������� ������.", "�����", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
	}
	else
	{
		auto result = MessageBox::Show(L"�� ����� ������ ����� �� ����������?", L"����� �� ����������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
	}
}
//�������
private: System::Void �����������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("��� ���������� ������ ��������� ���������� �����: \n1) � ���� ������� ������ ������->��������, � ������� ����� ���������� ��������� ����������; \n2) ��������� ��� ���� � ������� ������ ��������;", "���������� ��������� ����������", MessageBoxButtons::OK);
}
private: System::Void ��������������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("��� �������� ���������� � ��������� ���������� �����: \n1) �������� ������� ������ �������, ������� ������ �������; \n2) � ���� ������� �� ������->������� ��� ����->�������;", "�������� ���������� � ��������� ����������", MessageBoxButtons::OK);
}
private: System::Void ��������������������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("��� �������������� ���������� � ��������� ���������� �����: \n1) �������� ������� ������ �������, ������� ������ �������������; \n2) � ���� ������� �� ������->������������� ��� ����->�������������;", "�������������� ���������� � ��������� ����������", MessageBoxButtons::OK);
}
private: System::Void ����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("��� ���������� ����� ������� �����: \n1) � ���� ������ �� ������->����������; \n2) ��� ���������� � ���������� ������� �������� �� � �� �, ��������- �� � �� �;\n3) ����� ������ ���������� ������ ������ ������ ����������", "����������", MessageBoxButtons::OK);
}
private: System::Void �������������������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("��� ������ ��������� ���������� �����: \n1) � ���� ������ �� �����->��������� ���������� � �������� ����� ������ ��������� ����������; \n2) ������ ���� ����������, ��� ����� � ������ ������ ������;\n3) ������ ������ �����", "����� ��������� ����������", MessageBoxButtons::OK);
}
private: System::Void ���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("��� ������ ������ ������� ���������� �����: \n1) � ���� ������ �� �����->������ ������� ����������; ", "����� ������ ������� ����������", MessageBoxButtons::OK);

}
private: System::Void ��������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("��� ������ ����� ���������� ����� ����������� �����: \n1) � ���� ������ �� �����->����� ���������� ����� �����������;", "����� ����� ���������� ����� �����������", MessageBoxButtons::OK);

}
private: System::Void �������������������������������������������������ToolStripMenuItem1_Click(System::Object^ sender,
	System::EventArgs^ e) {
	MessageBox::Show("��� ������������ ������ �����������, ������������������ �� ����� ��������� ����, �����: \n1) � ���� ������ �� ������������ ������...->�����������, ������������������ �� ����� ��������� ����; \n2) �������� ����� �����, ��� ����� ������ ��� �����������, �� �������� �� ������ ������������ ������; \n3) ��� ������� ������ ������� ������ �������� ������ �����������, ������������������ �� ����� ��������� ����;", "������������ ������", MessageBoxButtons::OK);
}
private: System::Void ��������������������������������������������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("��� ������������ ������ ����������, ������������ ��������� ����� ��� �� ���, �����: \n1) � ���� ������ �� ������������ ������...->����������, ������������ ��������� ����� ��� �� ���;", "������������ ������", MessageBoxButtons::OK);

}
private: System::Void ����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("�����������:\n���: �������� ������� ���������\n������: ����-22-1\n\n��� ����������: 2023\n������ 1.0\n��������: �����������", "� ���������", MessageBoxButtons::OK);
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
		MessageBox::Show("������ ��� ������������ '���������', ��������� ���� ��� ������ '�������� ���'.", "���� �� ������", MessageBoxButtons::OK, MessageBoxIcon::Information);
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

		// �������� ������ �� ��������� ����� � DataGridView
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
	//��� ������� ������ ��������� ����� MyForm1
	MyForm1^ addDriver = gcnew MyForm1;
	addDriver->Show();
	addDriver->Visible = false;
	//���� ��������� �������= ��, �� ��������, ��������� � MyForm1 ����������� � dataGridView1
	if (addDriver->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->Rows->Add(addDriver->InputValues);
	}
	changing = true;
}
private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	//��� ������� ������ ����������� ����� MyForm2
	MyForm2^ redaktDriver = gcnew MyForm2;
	redaktDriver->Show();
	//������� ������� ���������� ������
	int rowind = dataGridView1->SelectedCells[0]->RowIndex;
	int colind = dataGridView1->SelectedCells[0]->ColumnIndex;

	int i = 0;
	//� ����� ��������������� ��� ������, �, ����� ���������� ������, ������� �� �������� � ��������� �� ��� textBox � MyForm2
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
	//��� �������� ����� �� ���� textBox ��� ����� �������� ������� �������� ������, ����� ������� ������ � MyForm2 �������� ���� textBox ������������� � ������ �������
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
	//����������� ����� ������ ��������� ����������- MyForm3
	MyForm3^ findDriver = gcnew MyForm3;
	findDriver->Show();

	findDriver->Visible = false;
	if (findDriver->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//������������ �������� �� ���� textBox ����� MyForm3
		String^ Color = findDriver->comboBox1->Text;
		String^ Mark = findDriver->comboBox2->Text;
		String^ Firstsymbol = findDriver->textBox3->Text;

		bool col = false, m = false, num = false;
		int ans = 0;
		//��������������� ������ ������ �������, ���� �������� �� textBox �������� ������ ��� ��������� ��������� �� ���������� �� �������,
		//�� ��� ������ ����������
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
			MessageBox::Show("�������� ������!", "�����", MessageBoxButtons::OK);
		}
		else if (ans > 1)
		{
			MessageBox::Show("������� " + ans + " ����������.", "�����", MessageBoxButtons::OK);
		}
		else
		{
			MessageBox::Show("�������� �� ������.", "�����", MessageBoxButtons::OK);
		}
	}
}
};
}
