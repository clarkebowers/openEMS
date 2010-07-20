/*
*	Copyright (C) 2010 Sebastian Held (sebastian.held@gmx.de)
*
*	This program is free software: you can redistribute it and/or modify
*	it under the terms of the GNU General Public License as published by
*	the Free Software Foundation, either version 3 of the License, or
*	(at your option) any later version.
*
*	This program is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY; without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*	GNU General Public License for more details.
*
*	You should have received a copy of the GNU General Public License
*	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PROCESS_HFIELD_H
#define PROCESS_HFIELD_H

#include "process_efield.h"

typedef _Complex double complexdouble;

/*! \brief Process H-field at a point

	This class calculates the E-field at a point in the FDTD lattice.
	Other primitives than \c Point are not supported.
*/
class ProcessHField : public ProcessEField
{
public:
	ProcessHField(Operator* op, Engine* eng);
	virtual ~ProcessHField();

	virtual void InitProcess();
	void DefineStartStopCoord(double* dstart, double* dstop);
	virtual int Process();
};

#endif // PROCESS_HFIELD_H
