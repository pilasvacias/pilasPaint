#pragma once

#include "stdafx.h"

class Sizer : public wxFrame
{
public:
  Sizer(const wxString& title);

  wxMenuBar *menubar;
  wxMenu *file;
  wxMenu *edit;
  wxMenu *help;
  wxTextCtrl *textctrl;
  wxPanel *p1, *p2, *p3;

};

