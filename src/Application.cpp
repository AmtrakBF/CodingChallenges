#include <iostream>

#include "PerimeterFinder/Island.h"

int main()
{
	/*
		// Finding an Island Perimeter
	
		The function is given a map with 1 representing land, 0 representing water. 
		A land cell can have four neighbors along its edges. 
		Compute the total perimeter of shore-lines that are defined by land cells touching water or the outer edges of the map. 
		Each cell edge has a length equal to 1. An isolated cell without neighbors has a total perimeter length of 4.

	*/

	Island island;
	island.GetPerimeter();

	return 0;
}
