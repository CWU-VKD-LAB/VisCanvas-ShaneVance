// VisCanvas.cpp : main project file.
#include "VisCanvas.h"

#include "stdafx.h"

[System::STAThread]
int main(array<System::String ^> ^ args) {
  // Enabling visual effects before any controls are created
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

  // Create the main window and run it
  Application::Run(gcnew VisCanvas::VisCanvas());
  return 0;
}