// Wild Magic Source Code
// David Eberly
// http://www.geometrictools.com
// Copyright (c) 1998-2009
//
// This library is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation; either version 2.1 of the License, or (at
// your option) any later version.  The license is available for reading at
// either of the locations:
//     http://www.gnu.org/copyleft/lgpl.html
//     http://www.geometrictools.com/License/WildMagicLicense.pdf
//
// Version: 4.7.0 (2008/07/28)

#ifndef BOOLEANINTERVALRECTANGLE_H
#define BOOLEANINTERVALRECTANGLE_H

#include "Wm4ConsoleApplication.h"
using namespace Wm4;

class BooleanIntervalRectangle : public ConsoleApplication
{
    WM4_DECLARE_INITIALIZE;

public:
    BooleanIntervalRectangle ();
    virtual ~BooleanIntervalRectangle ();
    virtual int Main (int iQuantity, char** apcArgument);
};

WM4_REGISTER_INITIALIZE(BooleanIntervalRectangle);

#endif