#pragma once

namespace CalculatoR {

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
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result_label;

	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btn_divide;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ btn_mult;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ btn_minus;


	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ btn_plus;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;

	private: System::Windows::Forms::Button^ button19;
	private: int first_num;
	private: char useraction = ' ';
	private: bool is_equal = false;

	private: System::Windows::Forms::Button^ btn_equal;

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:






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
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::White;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->Location = System::Drawing::Point(14, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(63, 30);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"Exit";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// result_label
			// 
			this->result_label->BackColor = System::Drawing::Color::Black;
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result_label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->result_label->Location = System::Drawing::Point(5, 79);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(326, 57);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->result_label->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(12, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 55);
			this->button1->TabIndex = 2;
			this->button1->Text = L"AC";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Location = System::Drawing::Point(96, 176);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 55);
			this->button2->TabIndex = 3;
			this->button2->Text = L"+/-";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->Location = System::Drawing::Point(181, 176);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 55);
			this->button3->TabIndex = 4;
			this->button3->Text = L"%";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::Color::OrangeRed;
			this->btn_divide->ForeColor = System::Drawing::SystemColors::MenuText;
			this->btn_divide->Location = System::Drawing::Point(261, 176);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(65, 55);
			this->btn_divide->TabIndex = 5;
			this->btn_divide->Text = L"/";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->Location = System::Drawing::Point(12, 237);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 55);
			this->button5->TabIndex = 6;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->Location = System::Drawing::Point(96, 237);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 55);
			this->button6->TabIndex = 7;
			this->button6->Text = L" 8";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->Location = System::Drawing::Point(181, 237);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 55);
			this->button7->TabIndex = 8;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::OrangeRed;
			this->btn_mult->Location = System::Drawing::Point(261, 237);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(65, 55);
			this->btn_mult->TabIndex = 9;
			this->btn_mult->Text = L"*";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gray;
			this->button9->Location = System::Drawing::Point(12, 298);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 55);
			this->button9->TabIndex = 10;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gray;
			this->button10->Location = System::Drawing::Point(96, 298);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 55);
			this->button10->TabIndex = 11;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gray;
			this->button11->Location = System::Drawing::Point(181, 298);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 55);
			this->button11->TabIndex = 12;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::OrangeRed;
			this->btn_minus->Location = System::Drawing::Point(261, 298);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(65, 55);
			this->btn_minus->TabIndex = 13;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Gray;
			this->button13->Location = System::Drawing::Point(12, 359);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(65, 55);
			this->button13->TabIndex = 14;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::OrangeRed;
			this->btn_plus->Location = System::Drawing::Point(261, 359);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(65, 55);
			this->btn_plus->TabIndex = 15;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Gray;
			this->button15->Location = System::Drawing::Point(96, 359);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 55);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Gray;
			this->button16->Location = System::Drawing::Point(181, 359);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(65, 55);
			this->button16->TabIndex = 16;
			this->button16->Text = L"3";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Gray;
			this->button17->Location = System::Drawing::Point(12, 420);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(149, 55);
			this->button17->TabIndex = 17;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Gray;
			this->button19->Location = System::Drawing::Point(181, 420);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(65, 55);
			this->button19->TabIndex = 19;
			this->button19->Text = L",";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::OrangeRed;
			this->btn_equal->Location = System::Drawing::Point(261, 420);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(65, 55);
			this->btn_equal->TabIndex = 20;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(338, 500);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->result_label);
			this->Controls->Add(this->button_exit);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


		   private: System::Void btnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
			   this->result_label->ForeColor = Color::White;
			   Button^button = safe_cast<Button^>(sender);

			   if (this->result_label->Text == "0" || is_equal) {
				   this->result_label->Text = button->Text;
				   is_equal = false;
			   }
			 else
				 this->result_label->Text = this->result_label->Text + button->Text;
		   }

private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');
}
private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}


private: System::Void math_action(char action) {
	this->first_num = System::Convert::ToInt32(this->result_label->Text);
	this->useraction = action;
	this->result_label->Text = "0";

}

private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (useraction == ' ')
		return;
	
	int second = System::Convert::ToInt32(this->result_label->Text);
	int res;
	switch (this->useraction) {
	case'+': res = this->first_num + second; break;
	case'-': res = this->first_num - second; break;
	case'*': res = this->first_num * second; break;
	case'/': 
		if (second == 0) {
			res = 0;
			this->result_label->ForeColor = Color::DarkRed;
			MessageBox::Show(this, "Nelza na 0 delit)", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		   res = this->first_num / second;
		break;
	}
	this->is_equal = true;
	this->result_label->Text = System::Convert::ToString(res);
}


};
}
