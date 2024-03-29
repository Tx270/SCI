#include <iostream>
#include "arrays.hpp"
using namespace std;



int main() {
	arrays arrays;
	int size = 10;
	//int a[size];
	//int a2[] = { 2,2,1,1,1 };
	//int arr[8];
	int* arr_p = arrays.input<int>(size);
	arrays.print(arr_p, 7);
	//arrays.shuffle(a, 7);
	//arrays.print(a, 7);
	//cout << arrays.mean(a, 5);

	delete[] arr_p;
}