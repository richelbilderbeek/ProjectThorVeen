//---------------------------------------------------------------------------
/*
  The Thor Veen Project, simulation to investigate honest signalling
  Copyright (C) 2006  Richel Bilderbeek

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
//---------------------------------------------------------------------------
// From http://www.richelbilderbeek.nl
//---------------------------------------------------------------------------
#ifndef UnitFormTestH
#define UnitFormTestH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Chart.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
//---------------------------------------------------------------------------
class TFormTest : public TForm
{
__published:	// IDE-managed Components
  TLabeledEdit *EditPlayHawkAlpha;
  TLabeledEdit *EditPlayHawkBeta;
  TChart *ChartTest;
  TLineSeries *Series1;
  TPageControl *PageControl1;
  TTabSheet *TabSheet1;
  TPanel *Panel1;
  void __fastcall EditPlayHawkChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TFormTest(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormTest *FormTest;
//---------------------------------------------------------------------------
#endif
