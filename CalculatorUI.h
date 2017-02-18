#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalculatorUI
	/// </summary>
	public ref class CalculatorUI : public System::Windows::Forms::Form
	{
	public:
		CalculatorUI(void)
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
		~CalculatorUI()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  clearButton;
	private: System::Windows::Forms::Button^  nineButton;
	private: System::Windows::Forms::Button^  eightButton;
	private: System::Windows::Forms::Button^  sevenButton;
	private: System::Windows::Forms::Button^  sixButton;
	private: System::Windows::Forms::Button^  fiveButton;
	private: System::Windows::Forms::Button^  fourButton;
	private: System::Windows::Forms::Button^  threeButton;
	private: System::Windows::Forms::Button^  twoButton;
	private: System::Windows::Forms::Button^  oneButton;
	private: System::Windows::Forms::Button^  zeroButton;
	private: System::Windows::Forms::Button^  multiplicationButton;
	private: System::Windows::Forms::Button^  divisionButton;
	private: System::Windows::Forms::Button^  plusButton;
	private: System::Windows::Forms::Button^  minusButton;

	private: System::Windows::Forms::Button^  equalButton;
	private: System::Windows::Forms::TextBox^  numbersText;





	protected:


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
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->nineButton = (gcnew System::Windows::Forms::Button());
			this->eightButton = (gcnew System::Windows::Forms::Button());
			this->sevenButton = (gcnew System::Windows::Forms::Button());
			this->sixButton = (gcnew System::Windows::Forms::Button());
			this->fiveButton = (gcnew System::Windows::Forms::Button());
			this->fourButton = (gcnew System::Windows::Forms::Button());
			this->threeButton = (gcnew System::Windows::Forms::Button());
			this->twoButton = (gcnew System::Windows::Forms::Button());
			this->oneButton = (gcnew System::Windows::Forms::Button());
			this->zeroButton = (gcnew System::Windows::Forms::Button());
			this->multiplicationButton = (gcnew System::Windows::Forms::Button());
			this->divisionButton = (gcnew System::Windows::Forms::Button());
			this->plusButton = (gcnew System::Windows::Forms::Button());
			this->minusButton = (gcnew System::Windows::Forms::Button());
			this->equalButton = (gcnew System::Windows::Forms::Button());
			this->numbersText = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// clearButton
			// 
			this->clearButton->BackColor = System::Drawing::Color::Pink;
			this->clearButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->ForeColor = System::Drawing::Color::White;
			this->clearButton->Location = System::Drawing::Point(3, 12);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(52, 38);
			this->clearButton->TabIndex = 1;
			this->clearButton->Text = L"C";
			this->clearButton->UseVisualStyleBackColor = false;
			this->clearButton->Click += gcnew System::EventHandler(this, &CalculatorUI::clearButton_Click);
			// 
			// nineButton
			// 
			this->nineButton->BackColor = System::Drawing::Color::Pink;
			this->nineButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nineButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nineButton->ForeColor = System::Drawing::Color::White;
			this->nineButton->Location = System::Drawing::Point(177, 56);
			this->nineButton->Name = L"nineButton";
			this->nineButton->Size = System::Drawing::Size(52, 45);
			this->nineButton->TabIndex = 2;
			this->nineButton->Text = L"9";
			this->nineButton->UseVisualStyleBackColor = false;
			this->nineButton->Click += gcnew System::EventHandler(this, &CalculatorUI::nineButton_Click);
			// 
			// eightButton
			// 
			this->eightButton->BackColor = System::Drawing::Color::Pink;
			this->eightButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->eightButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eightButton->ForeColor = System::Drawing::Color::White;
			this->eightButton->Location = System::Drawing::Point(119, 56);
			this->eightButton->Name = L"eightButton";
			this->eightButton->Size = System::Drawing::Size(52, 45);
			this->eightButton->TabIndex = 3;
			this->eightButton->Text = L"8";
			this->eightButton->UseVisualStyleBackColor = false;
			this->eightButton->Click += gcnew System::EventHandler(this, &CalculatorUI::eightButton_Click);
			// 
			// sevenButton
			// 
			this->sevenButton->BackColor = System::Drawing::Color::Pink;
			this->sevenButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sevenButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sevenButton->ForeColor = System::Drawing::Color::White;
			this->sevenButton->Location = System::Drawing::Point(61, 56);
			this->sevenButton->Name = L"sevenButton";
			this->sevenButton->Size = System::Drawing::Size(52, 45);
			this->sevenButton->TabIndex = 4;
			this->sevenButton->Text = L"7";
			this->sevenButton->UseVisualStyleBackColor = false;
			this->sevenButton->Click += gcnew System::EventHandler(this, &CalculatorUI::sevenButton_Click);
			// 
			// sixButton
			// 
			this->sixButton->BackColor = System::Drawing::Color::Pink;
			this->sixButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sixButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sixButton->ForeColor = System::Drawing::Color::White;
			this->sixButton->Location = System::Drawing::Point(177, 107);
			this->sixButton->Name = L"sixButton";
			this->sixButton->Size = System::Drawing::Size(52, 45);
			this->sixButton->TabIndex = 5;
			this->sixButton->Text = L"6";
			this->sixButton->UseVisualStyleBackColor = false;
			this->sixButton->Click += gcnew System::EventHandler(this, &CalculatorUI::sixButton_Click);
			// 
			// fiveButton
			// 
			this->fiveButton->BackColor = System::Drawing::Color::Pink;
			this->fiveButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fiveButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fiveButton->ForeColor = System::Drawing::Color::White;
			this->fiveButton->Location = System::Drawing::Point(119, 107);
			this->fiveButton->Name = L"fiveButton";
			this->fiveButton->Size = System::Drawing::Size(52, 45);
			this->fiveButton->TabIndex = 6;
			this->fiveButton->Text = L"5";
			this->fiveButton->UseVisualStyleBackColor = false;
			this->fiveButton->Click += gcnew System::EventHandler(this, &CalculatorUI::fiveButton_Click);
			// 
			// fourButton
			// 
			this->fourButton->BackColor = System::Drawing::Color::Pink;
			this->fourButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fourButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fourButton->ForeColor = System::Drawing::Color::White;
			this->fourButton->Location = System::Drawing::Point(61, 107);
			this->fourButton->Name = L"fourButton";
			this->fourButton->Size = System::Drawing::Size(52, 45);
			this->fourButton->TabIndex = 7;
			this->fourButton->Text = L"4";
			this->fourButton->UseVisualStyleBackColor = false;
			this->fourButton->Click += gcnew System::EventHandler(this, &CalculatorUI::fourButton_Click);
			// 
			// threeButton
			// 
			this->threeButton->BackColor = System::Drawing::Color::Pink;
			this->threeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->threeButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->threeButton->ForeColor = System::Drawing::Color::White;
			this->threeButton->Location = System::Drawing::Point(177, 158);
			this->threeButton->Name = L"threeButton";
			this->threeButton->Size = System::Drawing::Size(52, 45);
			this->threeButton->TabIndex = 8;
			this->threeButton->Text = L"3";
			this->threeButton->UseVisualStyleBackColor = false;
			this->threeButton->Click += gcnew System::EventHandler(this, &CalculatorUI::threeButton_Click);
			// 
			// twoButton
			// 
			this->twoButton->BackColor = System::Drawing::Color::Pink;
			this->twoButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->twoButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->twoButton->ForeColor = System::Drawing::Color::White;
			this->twoButton->Location = System::Drawing::Point(119, 158);
			this->twoButton->Name = L"twoButton";
			this->twoButton->Size = System::Drawing::Size(52, 45);
			this->twoButton->TabIndex = 9;
			this->twoButton->Text = L"2";
			this->twoButton->UseVisualStyleBackColor = false;
			this->twoButton->Click += gcnew System::EventHandler(this, &CalculatorUI::twoButton_Click);
			// 
			// oneButton
			// 
			this->oneButton->BackColor = System::Drawing::Color::Pink;
			this->oneButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->oneButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oneButton->ForeColor = System::Drawing::Color::White;
			this->oneButton->Location = System::Drawing::Point(61, 158);
			this->oneButton->Name = L"oneButton";
			this->oneButton->Size = System::Drawing::Size(52, 45);
			this->oneButton->TabIndex = 10;
			this->oneButton->Text = L"1";
			this->oneButton->UseVisualStyleBackColor = false;
			this->oneButton->Click += gcnew System::EventHandler(this, &CalculatorUI::oneButton_Click);
			// 
			// zeroButton
			// 
			this->zeroButton->BackColor = System::Drawing::Color::Pink;
			this->zeroButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zeroButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zeroButton->ForeColor = System::Drawing::Color::White;
			this->zeroButton->Location = System::Drawing::Point(119, 210);
			this->zeroButton->Name = L"zeroButton";
			this->zeroButton->Size = System::Drawing::Size(52, 45);
			this->zeroButton->TabIndex = 11;
			this->zeroButton->Text = L"0";
			this->zeroButton->UseVisualStyleBackColor = false;
			this->zeroButton->Click += gcnew System::EventHandler(this, &CalculatorUI::zeroButton_Click);
			// 
			// multiplicationButton
			// 
			this->multiplicationButton->BackColor = System::Drawing::Color::Pink;
			this->multiplicationButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->multiplicationButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplicationButton->ForeColor = System::Drawing::Color::White;
			this->multiplicationButton->Location = System::Drawing::Point(3, 56);
			this->multiplicationButton->Name = L"multiplicationButton";
			this->multiplicationButton->Size = System::Drawing::Size(52, 45);
			this->multiplicationButton->TabIndex = 12;
			this->multiplicationButton->Text = L" *";
			this->multiplicationButton->UseVisualStyleBackColor = false;
			this->multiplicationButton->Click += gcnew System::EventHandler(this, &CalculatorUI::multiplicationButton_Click);
			// 
			// divisionButton
			// 
			this->divisionButton->BackColor = System::Drawing::Color::Pink;
			this->divisionButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->divisionButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divisionButton->ForeColor = System::Drawing::Color::White;
			this->divisionButton->Location = System::Drawing::Point(3, 107);
			this->divisionButton->Name = L"divisionButton";
			this->divisionButton->Size = System::Drawing::Size(52, 45);
			this->divisionButton->TabIndex = 13;
			this->divisionButton->Text = L"/";
			this->divisionButton->UseVisualStyleBackColor = false;
			this->divisionButton->Click += gcnew System::EventHandler(this, &CalculatorUI::divisionButton_Click);
			// 
			// plusButton
			// 
			this->plusButton->BackColor = System::Drawing::Color::Pink;
			this->plusButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plusButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusButton->ForeColor = System::Drawing::Color::White;
			this->plusButton->Location = System::Drawing::Point(3, 158);
			this->plusButton->Name = L"plusButton";
			this->plusButton->Size = System::Drawing::Size(52, 45);
			this->plusButton->TabIndex = 14;
			this->plusButton->Text = L"+";
			this->plusButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->plusButton->UseVisualStyleBackColor = false;
			this->plusButton->Click += gcnew System::EventHandler(this, &CalculatorUI::plusButton_Click);
			// 
			// minusButton
			// 
			this->minusButton->BackColor = System::Drawing::Color::Pink;
			this->minusButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minusButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minusButton->ForeColor = System::Drawing::Color::White;
			this->minusButton->Location = System::Drawing::Point(3, 209);
			this->minusButton->Name = L"minusButton";
			this->minusButton->Size = System::Drawing::Size(52, 45);
			this->minusButton->TabIndex = 15;
			this->minusButton->Text = L"-";
			this->minusButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->minusButton->UseVisualStyleBackColor = false;
			this->minusButton->Click += gcnew System::EventHandler(this, &CalculatorUI::minusButton_Click);
			// 
			// equalButton
			// 
			this->equalButton->BackColor = System::Drawing::Color::Maroon;
			this->equalButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equalButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalButton->ForeColor = System::Drawing::Color::White;
			this->equalButton->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->equalButton->Location = System::Drawing::Point(177, 209);
			this->equalButton->Name = L"equalButton";
			this->equalButton->Size = System::Drawing::Size(52, 45);
			this->equalButton->TabIndex = 17;
			this->equalButton->Text = L" =";
			this->equalButton->UseVisualStyleBackColor = false;
			this->equalButton->Click += gcnew System::EventHandler(this, &CalculatorUI::equalButton_Click);
			// 
			// numbersText
			// 
			this->numbersText->BackColor = System::Drawing::SystemColors::Control;
			this->numbersText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numbersText->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numbersText->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->numbersText->Location = System::Drawing::Point(61, 12);
			this->numbersText->Multiline = true;
			this->numbersText->Name = L"numbersText";
			this->numbersText->ReadOnly = true;
			this->numbersText->Size = System::Drawing::Size(168, 37);
			this->numbersText->TabIndex = 18;
			this->numbersText->Text = L"0";
			this->numbersText->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// CalculatorUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Pink;
			this->ClientSize = System::Drawing::Size(234, 261);
			this->Controls->Add(this->numbersText);
			this->Controls->Add(this->equalButton);
			this->Controls->Add(this->minusButton);
			this->Controls->Add(this->plusButton);
			this->Controls->Add(this->divisionButton);
			this->Controls->Add(this->multiplicationButton);
			this->Controls->Add(this->zeroButton);
			this->Controls->Add(this->oneButton);
			this->Controls->Add(this->twoButton);
			this->Controls->Add(this->threeButton);
			this->Controls->Add(this->fourButton);
			this->Controls->Add(this->fiveButton);
			this->Controls->Add(this->sixButton);
			this->Controls->Add(this->sevenButton);
			this->Controls->Add(this->eightButton);
			this->Controls->Add(this->nineButton);
			this->Controls->Add(this->clearButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"CalculatorUI";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &CalculatorUI::CalculatorUI_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//SIGNS AND NUMBERS
char opSign;
double numberOne, numberTwo, results;

	private: System::Void CalculatorUI_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void numbersText_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void clearButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->numbersText->Text = "0";
	}


private: System::Void divisionButton_Click(System::Object^  sender, System::EventArgs^  e) {
	numberOne = Double::Parse(numbersText->Text);
	opSign = '/';
	this->numbersText->Text = "0";
}

private: System::Void multiplicationButton_Click(System::Object^  sender, System::EventArgs^  e) {
	numberOne = Double::Parse(numbersText->Text);
	opSign = '*';
	this->numbersText->Text = "0";
}
private: System::Void plusButton_Click(System::Object^  sender, System::EventArgs^  e) {
	numberOne = Double::Parse(numbersText->Text);
	opSign = '+';
	this->numbersText->Text = "0";
}
private: System::Void minusButton_Click(System::Object^  sender, System::EventArgs^  e) {
	numberOne = Double::Parse(numbersText->Text);
	opSign = '-';
	this->numbersText->Text = "0";
}

private: System::Void equalButton_Click(System::Object^  sender, System::EventArgs^  e) {
	numberTwo = Double::Parse(numbersText->Text);
	
	if (opSign == '-')
	{
		results = numberOne - numberTwo;
	}
	if (opSign == '+')
	{
		results = numberOne + numberTwo;
	}
	if (opSign == '*')
	{
		results = numberOne * numberTwo;
	}
	if (opSign == '/')
	{
		results = numberOne / numberTwo;
	}
	
	numbersText->Text = System::Convert::ToString(results);
	numberOne = results;


}
/*private: System::Void decimalButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!numbersText->Text->Contains("."))
	{
		numbersText->Text = numbersText->Text + ".";
	}
}*/

private: System::Void oneButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (numbersText->Text == "0")
	{
		this->numbersText->Text = "1";
	}
	else {
		numbersText->Text = Double::Parse(numbersText->Text) + "1";
	}
}

private: System::Void twoButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (numbersText->Text == "0")
	{
		this->numbersText->Text = "2";
	}
	else {
		numbersText->Text = Double::Parse(numbersText->Text) + "2";
	}
}

private: System::Void threeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (numbersText->Text == "0")
	{
		this->numbersText->Text = "3";
	}
	else {
		numbersText->Text = Double::Parse(numbersText->Text) + "3";
	}
}

private: System::Void fourButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (numbersText->Text == "0")
	{
		this->numbersText->Text = "4";
	}
	else {
		numbersText->Text = Double::Parse(numbersText->Text) + "4";
	}
}

private: System::Void fiveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (numbersText->Text == "0")
	{
		this->numbersText->Text = "5";
	}
	else {
		numbersText->Text = Double::Parse(numbersText->Text) + "5";
	}
}

private: System::Void sixButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (numbersText->Text == "0")
	{
		this->numbersText->Text = "6";
	}
	else {
		numbersText->Text = Double::Parse(numbersText->Text) + "6";
	}
}

private: System::Void sevenButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (numbersText->Text == "0")
	{
		this->numbersText->Text = "7";
	}
	else {
		numbersText->Text = Double::Parse(numbersText->Text) + "7";
	}
}

private: System::Void eightButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (numbersText->Text == "0")
	{
		this->numbersText->Text = "8";
	}
	else {
		numbersText->Text = Double::Parse(numbersText->Text) + "8";
	}
}

private: System::Void nineButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (numbersText->Text == "0")
	{
		this->numbersText->Text = "9";
	}
	else {
		numbersText->Text = Double::Parse(numbersText->Text) + "9";
	}
}


private: System::Void zeroButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (numbersText->Text != "0") {
		numbersText->Text = Double::Parse(numbersText->Text) + "0";
	}
}

};
}
