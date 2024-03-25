#include <iostream>
#include "arrays.hpp"
using namespace std;



int main() {
	arrays array;
	const int size = 90;
	int arr[size];

	array.generate(arr, size);
	
	array.print(arr, size);
}