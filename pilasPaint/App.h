#pragma once
#include <wx\wx.h>
#include "Menu.h"

class App : public wxApp
{
public:
	App(void);
	~App(void);
	
	virtual bool OnInit();

private:

	Menu *m_menu;

};

