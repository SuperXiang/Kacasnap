// Kacasnap.cpp: The main and entry file of the project

#include "stdafx.h"
#include "Form1.h"

using namespace Kacasnap;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enable visualization effect before building up any controls
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Build up main form and run
	Application::Run(gcnew Form1());
	return 0;
}
