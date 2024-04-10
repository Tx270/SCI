#include <iostream>
#include "arrays.hpp"
using namespace std;



int main() {
	arrays arrays;
	int size = 10;
	int* arr_p = arrays.generate(size, 0, 100);
	arrays.print(arr_p, size);
	cout << arrays.binarySearch(arr_p, size, 55);

	delete[] arr_p;
}