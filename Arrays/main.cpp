#include <iostream>
#include "arrays.hpp"
using namespace std;



int main() {
	arrays arrays;
	int size = 10;
	int* arr_p = arrays.generate(size);
	arrays.print(arr_p, size);
	//int* arr_p2 = arrays.deleteRepeats(arr_p, size);
	arrays.bubbleSort(arr_p, size);
	cout << arrays.binarySearch(arr_p, size, 6);
	arrays.print(arr_p, size);
	delete[] arr_p;
	//delete[] arr_p2;
}