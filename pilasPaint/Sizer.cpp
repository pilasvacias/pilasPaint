#include "Sizer.h"


Sizer::Sizer(const wxString& title)
	: wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(800, 600))
{
	
	menubar = new wxMenuBar;
	file = new wxMenu;
	edit = new wxMenu;
	help = new wxMenu;

	menubar->Append(file, wxT("&File"));
	menubar->Append(edit, wxT("&Edit"));
	menubar->Append(help, wxT("&Help"));
	SetMenuBar(menubar);

	p1 = new wxPanel(this, -1);
	p2 = new wxPanel(this, -1);
	p3 = new wxPanel(this, -1);

	p1->SetBackgroundColour("green");
	p2->SetBackgroundColour("blue");
	p3->SetBackgroundColour("red");

	p2->SetMinSize(wxSize(150,0));
	p1->SetMinSize(wxSize(800, 50));    

	wxStaticText *st1 = new wxStaticText(p1, -1, wxT("BARRA DE HERRAMIENTAS"));
	wxStaticText *st2 = new wxStaticText(p2, -1, wxT("OPCIONES DE\nLAS HERRAMIENTAS"));
	wxStaticText *st3 = new wxStaticText(p3, -1, wxT("CANVAS"));

	wxBoxSizer *vs = new wxBoxSizer(wxVERTICAL);
	wxBoxSizer *h1 = new wxBoxSizer(wxHORIZONTAL);
	wxBoxSizer *h2 = new wxBoxSizer(wxHORIZONTAL);


	h1->Add(p1, 0, wxEXPAND);
	
	h2->Add(p2, 0, wxEXPAND);
	h2->Add(p3, 1, wxEXPAND);

	vs->Add(h1, 0);
	vs->Add(h2, 1, wxEXPAND);



	SetSizer(vs);
	Centre();
}
