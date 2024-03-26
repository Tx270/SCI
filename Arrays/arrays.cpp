#include "arrays.hpp"
#include <iostream>


void arrays::print(const int arr[], int s) {
	std::cout << arr[0];
	for (int i = 1; i < s; i++)
		std::cout << "," << arr[i];
	std::cout << "\n";
}

void arrays::printChar(const char arr[], int s) {
	std::cout << arr[0];
	for (int i = 1; i < s; i++)
		std::cout << "," << arr[i];
	std::cout << "\n";
}

void arrays::deleteRepeats(int arr[], int arr2[], int s) {
	int j = 0;

	for (int i = 0; i < s; i++) {
		if (arr[i] != arr[i + 1]) {
			arr2[j] = arr[i];
			j++;
		}
	}
}

void arrays::generate(int arr[], int s, int max) {
	srand((unsigned)time(0));
	for (int i = 0; i < s; i++) {
		arr[i] = rand() % max;
	}
}

void arrays::generateChar(char arr[], int s) {
	srand((unsigned)time(0));
	for (int i = 0; i < s; i++) {
		arr[i] = rand() % (90 - 65 + 1) + 65;
	}
}

void arrays::reverse(int arr[], int s) {
	int temp;
	for (int i = 0; i < s/2; i++) {
		temp = arr[s - 1 - i];
		arr[s - 1 - i] = arr[i];
		arr[i] = temp;
	}
}

float arrays::average(int arr[], int s) {
	int sum = 0;
	for (int i = 0; i < s; i++) {
		sum += arr[i];
	}
	return sum / static_cast<float>(s);
}

int arrays::max(const int arr[], int s) {
	int max = arr[0];
	for (int i = 0; i < s; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int arrays::min(const int arr[], int s) {
	int min = arr[0];
	for (int i = 0; i < s; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int arrays::median(const int arr[], int s) {
	return arr[s/2];
}

void arrays::input(int arr[], int s) {
	int li = 0;
	for (int i = 0; i < s; i++) {
		std::cout << "Enter number " << i + 1 << " out of " << s << ": ";
		std::cin >> li;
		arr[i] = li;
	}
}

bool arrays::compare(const int arr[], int s, const int arr2[], int s2) {
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

void arrays::bubbleSort(int arr[], int s) {
	int temp;
	int size = s;
	for (int j = 0; j < s; j++) {
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

void arrays::swap(int arr[], int id1, int id2) {
	int temp;
	temp = arr[id2];
	arr[id2] = arr[id1];
	arr[id1] = temp;
}

int arrays::linearSearch(const int arr[], int s, int x) {
	for (int i = 0; i < s; i++) {
		if (arr[i] == x) {
			return i;
		}
	}
	return -1;
}

int arrays::binarySearch(const int arr[], int s, int x) {
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