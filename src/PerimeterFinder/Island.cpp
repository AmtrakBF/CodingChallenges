#include "Island.h"

#include <iostream>

Island::Island()
	: arr(0), rows(0), columns(0)
{}

int Island::GetPerimeter()
{
	int perimeter = 0;
	int r = 0, c = 0;

	for (int rowIndex = 0; rowIndex < rows; rowIndex++)
	{
		r = rowIndex * rows;
		for (int colIndex = 0; colIndex < columns; colIndex++)
		{
			c = r + colIndex + (rowIndex * (columns - rows)); // (rowIndex * rows) + colIndex + (rowIndex * (columns - rows))
			if (arr[c] == 1)
			{
				if (rowIndex == 0) // first row
					perimeter++;
				else if (arr[c - columns] == 0) // up
					perimeter++;
				if (rowIndex == rows - 1) // last row
					perimeter++;
				else if (arr[c + columns] == 0) // down
					perimeter++;
				if (colIndex == 0) // first column
					perimeter++;
				else if (arr[c - 1] == 0) // left
					perimeter++;
				if (colIndex == columns - 1) // last column
					perimeter++;
				else if (arr[c + 1] == 0) // right
					perimeter++;
			}
		}
	}
	return perimeter;
}

void Island::SetTest(int num)
{
	switch (num)
	{
	case 1:
		arr = test1[0];
		rows = 5;
		columns = 6;
		break;
	case 2:
		arr = test2[0];
		rows = 8;
		columns = 18;
		break;
	case 3:
		arr = test3[0];
		rows = 5;
		columns = 6;
		break;
	case 4:
		arr = test4[0];
		rows = 4;
		columns = 4;
		break;
	}
}

void Island::SetData(int* arr, int rows, int columns)
{
	this->arr = arr;
	this->rows = rows;
	this->columns = columns;
}

void Island::Test()
{
	SetTest(1);
	std::cout << "Test 1" << std::endl;
	std::cout << GetPerimeter() << std::endl;

	SetTest(2);
	std::cout << "Test 2" << std::endl;
	std::cout << GetPerimeter() << std::endl;

	SetTest(3);
	std::cout << "Test 3" << std::endl;
	std::cout << GetPerimeter() << std::endl;

	SetTest(4);
	std::cout << "Test 4" << std::endl;
	std::cout << GetPerimeter() << std::endl;
}
