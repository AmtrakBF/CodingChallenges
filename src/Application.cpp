#include <iostream>
#include <string>

#include "PerimeterFinder/Island.h"
#include "ArrayPuzzle/ArrayPuzzle.h"
#include "FindTheImposter/FindTheImpostor.h"
#include "SpartansCipher/SpartansCipher.h"

#include <chrono>

int main()
{
	/*
		// Finding an Island Perimeter
	
		The function is given a map with 1 representing land, 0 representing water. 
		A land cell can have four neighbors along its edges. 
		Compute the total perimeter of shore-lines that are defined by land cells touching water or the outer edges of the map. 
		Each cell edge has a length equal to 1. An isolated cell without neighbors has a total perimeter length of 4.

	*/

	/*std::cout << "Island Test" << std::endl;
	Island island;
	island.Test();*/


	/* 
		// Solving the array puzzle

		all the numbers are related to the 5th element somehow
		A series of mathematic equations are used to figure out the proper number for each index
		if the indexed number is different than the calculations, the function will return false
		if all the numbers come back as they should, the function returns true
	*/

	/*std::cout << std::endl;
	std::cout << "Array Puzzle Test" << std::endl;


	std::cout << tfArr({ 12,40,4,6420,20,24,400,24 }) << std::endl;
	std::cout << tfArr({ 14.9,98,7,15729,49,56,2401,58.8 }) << std::endl;
	std::cout << tfArr({ 12.6,52,5,8346,26,31,676,38 }) << std::endl;*/

	/*
		// Solve without using an if statement
		
		c is always equal to either a or b
	*/

	/*std::cout << std::endl;
	std::cout << "Impostor Test" << std::endl;

	std::cout << FindTheImpostor(-3, 4, -3) << std::endl;
	std::cout << FindTheImpostor(23, 40, 40) << std::endl;
	std::cout << FindTheImpostor(400, -900, -900) << std::endl;*/
	
	char arr[] = { "TheQuickBrownFoxJumpsOverTheLazyDog." };
	int length = sizeof(arr)/sizeof(arr[0]);
	SpartansCipher(arr, length, 6);

	SpartansCipher("TcnmrzhkFpTyeBoshDQrxOeouoJvLgiwuea.", 6);

	return 0;
}
