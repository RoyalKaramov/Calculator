#include "MyForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CalculatoR::MyForm form;
	Application::Run(% form);

};