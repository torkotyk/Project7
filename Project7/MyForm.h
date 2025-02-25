#pragma once
#include <cstdlib>
#include <ctime>


namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			srand(time(0));
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;







	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ink Free", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 266);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(490, 65);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ведіть розмір стеку";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Ink Free", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(207, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(941, 130);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Створити стек цілих чисел. Обчислити \r\nкількість однозначних елементів";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::SeaShell;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Ink Free", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(543, 263);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 73);
			this->textBox1->TabIndex = 3;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::SeaShell;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Ink Free", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 65;
			this->listBox1->Location = System::Drawing::Point(86, 465);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(369, 524);
			this->listBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SeaShell;
			this->button1->Font = (gcnew System::Drawing::Font(L"Ink Free", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(54, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(303, 80);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Запонити ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SeaShell;
			this->button2->Font = (gcnew System::Drawing::Font(L"Ink Free", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(417, 354);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(303, 80);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Очистити ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(788, 294);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 403);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->ClientSize = System::Drawing::Size(1326, 1046);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторна робота 8";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		System::Collections::Generic::Stack<int> myStack1;
		int count = 0; // лічильник для додавання елементів до стеку
		int rax = 0; // лічильник одноцифрових чисел

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int size = Convert::ToInt32(textBox1->Text);

		if (count < size)
		{
			int randomValue = rand() % 20;
			myStack1.Push(randomValue);
			listBox1->Items->Insert(0, randomValue.ToString());
			count++;

			// Перевірка, чи є число одноцифровим
			if (randomValue >= 0 && randomValue <= 9) {
				rax ++; // збільшуємо лічильник одноцифрових чисел
			}
		}
		else
		{
			// Відображення кількості одноцифрових чисел
			MessageBox::Show(rax.ToString());
		}

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear(); // очищаємо елементи в ListBox
	textBox1->Clear(); // очищаємо текст в TextBox

	// Скидаємо значення лічильників
	count = 0;
	rax = 0;
	myStack1.Clear(); // очищаємо стек
}
};
}
