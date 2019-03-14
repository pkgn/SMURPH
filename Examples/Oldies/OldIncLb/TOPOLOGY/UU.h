/*
	Copyright 1995-2018, 2019 Pawel Gburzynski

	This file is part of SMURPH/SIDE.

	SMURPH/SIDE is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	SMURPH/SIDE is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with SMURPH/SIDE. If not, see <https://www.gnu.org/licenses/>.
*/

/* ---------------------------------------------------------- */
/* This  file  contains  declarations  for a network topology */
/* with two U-shaped unidirectional links.                    */
/* ---------------------------------------------------------- */

station UUPORTS virtual {

    Port *OPort [2],    // Output ports: towards the turn on links 0 and 1
	 *IPort [2];    // Input ports: from the turn on links 0 and 1

    void mkPorts (RATE r) {
	 OPort [0] = create Port (r);
	 IPort [0] = create Port (r);
	 OPort [1] = create Port (r);
	 IPort [1] = create Port (r);
    };
};

#ifndef	LINKTYPE
#define	LINKTYPE PLink
#endif

LINKTYPE   *Bus [2];	// Links number 0 and 1

void    initUUTopology (DISTANCE, DISTANCE, RATE, TIME at = TIME_0);

#define	BUS0	0
#define	BUS1	1
