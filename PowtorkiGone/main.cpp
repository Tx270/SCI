#include <iostream>
#include "functions.hpp"
using namespace std;



int main() {
	const int size = 10;
	int arr[size];
	int arr2[size];

	input(arr, size);
	input(arr2, size);

	bool x = compare(arr, size, arr2, size);
	if (x == 0) {
		cout << "Twoje tablice nie sa rowne";
	}
	else {
		cout << "Twoje tablice sa rowne";
	}
	
}