#include <iostream>
#include "arrays.hpp"
using namespace std;



int main() {
	arrays arrays;
	//int size = 10;
	int a[] = { 235,654,34,6,43,23,54 };
	//int a2[] = { 2,2,1,1,1 };
	//int arr[8];
	//int* arr_p = arrays.join(a, 3, a2, 5);
	arrays.print(a, 7);
	arrays.shuffle(a, 7);
	arrays.print(a, 7);
	//cout << arrays.mean(a, 5);

	//delete[] arr_p;
}