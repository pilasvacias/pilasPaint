#include "Menu.h"


Menu::Menu(const wxString& title)
	: wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(280, 180))
{

	m_file = new wxMenu();
	m_file->Append(wxID_EXIT, wxT("&Quit"));
	m_menuBar = new wxMenuBar();
	m_menuBar->Append(m_file, wxT("&File"));

	SetMenuBar(m_menuBar);
	Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(Menu::OnQuit));

}

void Menu::OnQuit(wxCommandEvent& WXUNUSED(event))
{
	Close(true);
}

Menu::~Menu(void)
{
}
