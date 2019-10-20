// binarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int binaryTarget(int *arr, int left, int right, int target) {
	int mid = 0;
	if (left <= right) {
		mid = left + (right - left) / 2;
		if (arr[mid] == target) {
			printf("Target found at index: %d\n\r", mid);
			return mid;
		}
		else if (arr[mid] < target) {
			binaryTarget(arr, mid + 1, right, target);
		}
		else {
			binaryTarget(arr, left, mid - 1, target);
		}
	}
	else {
		printf("Target was not found.\n\r");
		return -1;
	}
}


int main()
{

	int arr[7] = {2,4,6,7,9,122,155};
	binaryTarget(arr, 0, 7, 155);
	binaryTarget(arr, 0, 7, 9);
	binaryTarget(arr, 0, 7, 6);
	binaryTarget(arr, 0, 7, 10);
	while (1);
}