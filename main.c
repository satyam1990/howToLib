/***************************************************************************
 *
 * main.c
 *
 * Author: mSatyam
 *
 * October, 2013
 *
 * Programs shows usage of static library files.
 ***************************************************************************/

#include <stdio.h>
#include "rob.h"
#include "david.h"

int main()
{
	printf("Do read REAME.md for details:\n");

	// call david's display function from libgoo.a
	displayDavid();

	// call robs display function from libfoo.a
	displayRob();
	
return 0;
}
