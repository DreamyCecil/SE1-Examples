/* Copyright (c) 2002-2012 Croteam Ltd. 
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

#include "stdh.h"

#include <Engine/Math/Functions.h>

/////////////////////////////////////////////////////////////////////
// Snapping functions

// does "snap to grid" for given coordinate
void Snap( FLOAT &fDest, FLOAT fStep)
{
  // this must use floor() to get proper snapping of negative values.
  FLOAT fDiv = fDest/fStep;
  FLOAT fRound = fDiv + 0.5f;
  FLOAT fSnap = FLOAT(floor(fRound));
  FLOAT fRes = fSnap * fStep;
  fDest = fRes;
}
// does "snap to grid" for given coordinate
void Snap( DOUBLE &fDest, DOUBLE fStep)
{
  // this must use floor() to get proper snapping of negative values.
  DOUBLE fDiv = fDest/fStep;
  DOUBLE fRound = fDiv + 0.5f;
  DOUBLE fSnap = DOUBLE(floor(fRound));
  DOUBLE fRes = fSnap * fStep;
  fDest = fRes;
}
