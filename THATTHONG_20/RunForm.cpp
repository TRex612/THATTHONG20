#include "LoginForm.h"
#include "MainForm.h"
#include "CheckForm.h"
#include "RegisForm.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	THATTHONG20::LoginForm loginform;
	
	
	
	Application::Run(% loginform);
}
