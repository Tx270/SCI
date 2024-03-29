#include <iostream>
#include <cmath>

#ifndef ARRAY
#define ARRAY


class arrays
{
	public:
		template<typename T>
		void print(const T arr[], int s) {
			std::cout << arr[0];
			for (int i = 1; i < s; i++)
				std::cout << "," << arr[i];
			std::cout << "\n";
		}


		template<typename T>
		T* input(int& s) {
			std::cout << "Enter array size: ";
			std::cin >> s;
			T* arr = new int[s];
			for (int i = 0; i < s; i++) {
				std::cout << "Enter value " << i + 1 << " out of " << s << ": ";
				std::cin >> arr[i];
			}
			return arr;
		}


		template<typename T>
		T* generate(int s, T min = 0, T max = 10) {
			T* arr_p = new T[s];
			srand((unsigned)time(0));
			for (int i = 0; i < s; i++) {
				arr_p[i] = static_cast<T>(randomFloat(min, max));
			}
			return arr_p;
		}


		int* deleteRepeats(const int arr[], int& s) {
			int j = 0;
			int* arr_p = new int[s] {0};
			for (int i = 0; i < s; i++) {
				if (arr[i] != arr[i + 1]) {
					arr_p[j] = arr[i];
					j++;
				}
			}
			s = j;
			int* result = new int[s];
			for (int i = 0; i < s; i++) {
				result[i] = arr_p[i];
			}
			delete[] arr_p;
			return result;
		}


		void swap(int arr[], int id1, int id2) {
			int temp;
			temp = arr[id2];
			arr[id2] = arr[id1];
			arr[id1] = temp;
		}


		void bubbleSort(int arr[], int s) {
			int temp;
			int size = s;
			for (int j = 0; j < size; j++) {
				for (int i = 0; i < s - 1; i++) {
					if (arr[i] > arr[i + 1]) {
						temp = arr[i + 1];
						arr[i + 1] = arr[i];
						arr[i] = temp;
					}
				}
				s--;
			}
		}


		int* join(int arr1[], int s1, int arr2[], int s2) {
			int* arr_p = new int[s1 + s2];

			for (int i = 0; i < s1 + s2; i++)
			{
				if (i < s1)
					arr_p[i] = arr1[i];
				else
					arr_p[i] = arr2[i - s1];
			}
			return arr_p;
		}


		void reverse(int arr[], int s) {
			int temp;
			for (int i = 0; i < s / 2; i++) {
				temp = arr[s - 1 - i];
				arr[s - 1 - i] = arr[i];
				arr[i] = temp;
			}
		}


		void shuffle(int arr[], int s) {
			srand((unsigned)time(0));

			for (int i = 0; i < s; i++) {
				swap(arr, rand() % s, rand() % s);
			}
		}


		float mean(const int arr[], int s) {
			float sum = 0.0f;
			for (int i = 0; i < s; i++) {
				sum += arr[i];
			}
			return sum / s;
		}


		float median(const int sorted_arr[], int s) {
			if (s % 2 == 0)
				return static_cast<float>(sorted_arr[s / 2 - 1] + sorted_arr[s / 2]) / 2.0f;
			else
				return sorted_arr[s / 2];
		}


		float standardDeviation(const int arr[], int s) {
			float avr = mean(arr, s);
			int* arr_p = new int[s];
			for (int i = 0; i < s; i++) {
				arr_p[i] = abs(arr[i] - avr);
			}
			float sum = 0;
			for (int i = 0; i < s; i++) {
				sum += pow(arr_p[i], 2);
			}

			delete[] arr_p;
			return sqrt(sum / s);
		}


		int max(const int arr[], int s) {
			int max = arr[0];
			for (int i = 0; i < s; i++) {
				if (arr[i] > max) {
					max = arr[i];
				}
			}
			return max;
		}


		int min(const int arr[], int s) {
			int min = arr[0];
			for (int i = 0; i < s; i++) {
				if (arr[i] < min) {
					min = arr[i];
				}
			}
			return min;
		}


		bool compare(const int arr[], int s, const int arr2[], int s2) {
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


		void ptr2arr(int* arr_p, int arr[], int s) {
			for (int i = 0; i < s; i++) {
				arr[i] = arr_p[i];
			}
		}


		int linearSearch(const int arr[], int s, int x) {
			for (int i = 0; i < s; i++) {
				if (arr[i] == x) {
					return i;
				}
			}
			return -1;
		}


		int binarySearch(const int arr[], int s, int x) {
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

		private:
			float randomFloat()
			{
				return (float)(rand()) / (float)(RAND_MAX);
			}

			int randomInt(int a, int b)
			{
				if (a > b)
					return randomInt(b, a);
				if (a == b)
					return a;
				return a + (rand() % (b - a));
			}

			float randomFloat(int a, int b)
			{
				if (a > b)
					return randomFloat(b, a);
				if (a == b)
					return a;

				return (float)randomInt(a, b) + randomFloat();
			}
};

#endif //ARRAY

