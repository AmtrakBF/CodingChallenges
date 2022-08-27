#pragma once
#include <vector>

bool tfArr(std::vector<float> arr) {
	if (arr[0] != (float)((arr[4] + 100) * .1)) return false;
	if (arr[1] != arr[4] * 2) return false;
	if (arr[2] != arr[5] - arr[4]) return false;
	if (arr[3] != arr[4] * 321) return false;
	if (arr[5] != arr[4] + arr[2]) return false;
	if (arr[6] != arr[4] * arr[4]) return false;
	if (arr[7] != (float)(arr[4] * 1.2)) return false;

	return true;
}