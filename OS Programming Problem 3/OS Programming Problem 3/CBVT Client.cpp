#include "CBVT Client.h"
#include "stdafx.h"

using namespace CBVTClientNS;

[System::STAThread]
int run_client(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the main window and run it
	Application::Run(gcnew CBVTClient());

	return 0;
}