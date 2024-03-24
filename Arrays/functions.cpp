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

void bubbleSort(int arr[], int s) {
	int temp;
	int size = s;
	for(int j = 0; j < s; j++) {
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
		size--;
	}
}

void swap(int arr[], int id1, int id2) {
	int temp;
	temp = arr[id2];
	arr[id2] = arr[id1];
	arr[id1] = temp;
}

int linearSearch(int arr[], int s, int x) {
	for (int i = 0; i < s; i++) {
		if (arr[i] == x) {
			return i;
		}
	}
	return -1;
}

int binarySearch(int arr[], int s, int x) {
	int high = s - 1;
	int low = 0;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] == x) {
			return mid;
		}
		if (arr[mid] < x) {
			low = mid + 1;
		}
		if (arr[mid] > x) {
			high = mid - 1;
		}
	}
	return -1;
}