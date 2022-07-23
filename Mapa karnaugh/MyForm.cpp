#include "MyForm.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace ProjectMapa;

int main(array<String^>^arg) {
	FreeConsole();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew ProjectMapa::MyForm());
}