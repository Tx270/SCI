#include <iostream>
#include "arrays.hpp"
using namespace std;



int main() {
	arrays arrays;
	const int size = 10;
	int arr[size];

	arrays.generate(arr, size);
	arrays.print(arr, size);
	cout << arrays.max(arr, size);
	//arrays.print(arr, size);
}