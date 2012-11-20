#include "App.h"

IMPLEMENT_APP(App);


bool App::OnInit()
{
	m_menu = new Menu(wxT("Main menu"));
	m_menu->Show(true);

	return true;
}

App::App(void)
{
}


App::~App(void)
{
}
