#pragma once

int FindTheImpostor(int a, int b, int c)
{
	// if bool is 0, it means x - c are the same number
	// if bool is anything else than zero, its not the same as c
	bool num1 = (a - c);
	bool num2 = (b - c);
	int arr[2];

	arr[num1] = a;
	arr[num2] = b;

	return arr[1];

	// better implementations
	//return (a ^ b ^ c); // xor
	//return (a + b - c); // so simple I looked right over it
}