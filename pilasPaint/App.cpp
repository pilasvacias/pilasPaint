#include "App.h"

IMPLEMENT_APP(App);


bool App::OnInit()
{
	m_menu = new Menu(wxT("Main menu"));
	m_menu->Show(true);
	//Cambio de c�digo en la rama
	return true;
}

App::App(void)
{
}


App::~App(void)
{
}
