#include <iostream>
#include "functions.hpp"
using namespace std;



int main() {
	const int size = 40;
	int arr[size] = { 0,1,2,1 };

	
	print(arr, size);
	swap(arr, 1,2);
	print(arr, size);
}