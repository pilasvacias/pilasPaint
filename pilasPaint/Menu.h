#pragma once
#include <wx\wx.h>

class Menu : public wxFrame
{
public:
	Menu(const wxString& title);
	~Menu();

	void OnQuit(wxCommandEvent& event);

private:
	wxMenuBar* m_menuBar;
	wxMenu* m_file;

};

