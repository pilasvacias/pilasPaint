#include "App.h"
#include "Sizer.h"


bool App::OnInit()
{
	Sizer *s = new Sizer(wxT("pilasPaint"));
	s->Show(true);

	return true;
}

App::App(void)
{
}


App::~App(void)
{
}


IMPLEMENT_APP(App)
