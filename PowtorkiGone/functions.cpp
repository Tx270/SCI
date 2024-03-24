#include "functions.hpp"
#include <iostream>


void print(int arr[], int s) {
	std::cout << arr[0];
	for (int i = 1; i < s; i++)
		std::cout << "," << arr[i];
	std::cout << "\n";
}

void printChar(char arr[], int s) {
	std::cout << arr[0];
	for (int i = 1; i < s; i++)
		std::cout << "," << arr[i];
	std::cout << "\n";
}

void deleteRepeats(int arr[], int arr2[], int s) {
	int j = 0;

	for (int i = 0; i < s; i++) {
		if (arr[i] != arr[i + 1]) {
			arr2[j] = arr[i];
			j++;
		}
	}
}

void generate(int arr[], int s, int max) {
	srand(time(0));
	for (int i = 0; i < s; i++) {
		arr[i] = rand() % max;
	}
}

void generateChar(char arr[], int s) {
	srand(time(0));
	for (int i = 0; i < s; i++) {
		arr[i] = rand() % (90 - 65 + 1) + 65;
	}
}

void reverse(int arr[], int arr2[], int s) {
	for (int i = 0; i <= s; i++) {
		arr2[i] = arr[s - i - 1];
	}
}

int maks1D(char arr[], int s) {
	int max = arr[0];
	for (int i = 0; i < s; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

void input(int arr[], int s) {
	int li = 0;
	for (int i = 0; i < s; i++) {
		std::cout << "Enter number " << i + 1 << " out of " << s << ": ";
		std::cin >> li;
		arr[i] = li;
	}
}

bool compare(int arr[], int s, int arr2[], int s2) {
	if (s != s2) {
		return false;
	}

	for (int i = 0; i < s; i++) {
		if (arr[i] != arr2[i]) {
			return false;
		}
	}

	return true;
}

void sort(int arr[], int s) {
	int temp;
	for(int j = 0; j < s; j++) {
		for (int i = 0; i < s - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
}