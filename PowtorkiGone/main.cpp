#include <iostream>
#include "functions.hpp"
using namespace std;



int main() {
	const int size = 10;
	int arr[size];

	generate(arr, size);
	
	print(arr, size);
	sort(arr, size);
	print(arr, size);
}