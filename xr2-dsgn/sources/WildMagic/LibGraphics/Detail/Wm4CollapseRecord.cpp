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
// Version: 4.0.1 (2006/08/05)

#include "Wm4GraphicsPCH.h"
#include "Wm4CollapseRecord.h"
using namespace Wm4;

//----------------------------------------------------------------------------
CollapseRecord::CollapseRecord (int iVKeep, int iVThrow, int iVQuantity,
    int iTQuantity)
{
    VKeep = iVKeep;
    VThrow = iVThrow;
    VQuantity = iVQuantity;
    TQuantity = iTQuantity;
    IQuantity = 0;
    Index = 0;
}
//----------------------------------------------------------------------------
CollapseRecord::~CollapseRecord ()
{
    WM4_DELETE[] Index;
}
//----------------------------------------------------------------------------