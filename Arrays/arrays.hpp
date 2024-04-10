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
			T* arr = new T[s];
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
				arr_p[i] = static_cast<T>(min + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (max - min))));
			}
			return arr_p;
		}


		template<typename T>
		T* deleteRepeats(const T arr[], int& s) {
			int j = 0;
			T* arr_p = new T[s] {0};
			for (int i = 0; i < s; i++) {
				if (arr[i] != arr[i + 1]) {
					arr_p[j] = arr[i];
					j++;
				}
			}
			s = j;
			T* result = new T[s];
			for (int i = 0; i < s; i++) {
				result[i] = arr_p[i];
			}
			delete[] arr_p;
			return result;
		}


		template<typename T>
		void swap(T arr[], int id1, int id2) {
			T temp;
			temp = arr[id2];
			arr[id2] = arr[id1];
			arr[id1] = temp;
		}


		template<typename T>
		void bubbleSort(T arr[], int s) {
			int size = s;
			for (int j = 0; j < size; j++) {
				for (int i = 0; i < s - 1; i++) {
					if (arr[i] > arr[i + 1]) {
						swap(arr, i, i + 1);
					}
				}
				s--;
			}
		}


		template<typename T>
		T* join(T arr1[], int s1, T arr2[], int s2) {
			T* arr_p = new T[s1 + s2];
			for (int i = 0; i < s1 + s2; i++)
			{
				if (i < s1)
					arr_p[i] = arr1[i];
				else
					arr_p[i] = arr2[i - s1];
			}
			return arr_p;
		}


		template<typename T>
		void reverse(T arr[], int s) {
			for (int i = 0; i < s / 2; i++) {
				swap(arr, i, s - 1 - i);
			}
		}


		template<typename T>
		void shuffle(T arr[], int s, int iterations = 50) {
			srand((unsigned)time(0));

			for (int i = 0; i < iterations; i++) {
				swap(arr, rand() % s, rand() % s);
			}
		}


		template<typename T>
		double mean(const T arr[], int s) {
			double sum = 0.0f;
			for (int i = 0; i < s; i++) {
				sum += arr[i];
			}
			return sum / s;
		}


		template<typename T>
		double median(const T arr[], int s) {
			if (s % 2 == 0)
				return static_cast<double>(arr[s / 2 - 1] + arr[s / 2]) / 2.0f;
			else
				return arr[s / 2];
		}


		template<typename T>
		double standardDeviation(const T arr[], int s) {
			double avr = mean(arr, s);
			T* arr_p = new T[s];
			for (int i = 0; i < s; i++) {
				arr_p[i] = abs(arr[i] - avr);
			}
			double sum = 0;
			for (int i = 0; i < s; i++) {
				sum += pow(arr_p[i], 2);
			}

			delete[] arr_p;
			return sqrt(sum / s);
		}


		template<typename T>
		T max(const T arr[], int s) {
			T max = arr[0];
			for (int i = 0; i < s; i++) {
				if (arr[i] > max) {
					max = arr[i];
				}
			}
			return max;
		}


		template<typename T>
		T min(const T arr[], int s) {
			T min = arr[0];
			for (int i = 0; i < s; i++) {
				if (arr[i] < min) {
					min = arr[i];
				}
			}
			return min;
		}


		template<typename T>
		bool compare(const T arr[], int s, const T arr2[], int s2) {
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


		template<typename T>
		void ptr2arr(T* arr_p, T arr[], int s) {
			for (int i = 0; i < s; i++) {
				arr[i] = arr_p[i];
			}
		}


		template<typename T>
		int linearSearch(const T arr[], int s, T x) {
			for (int i = 0; i < s; i++) {
				if (arr[i] == x) {
					return i;
				}
			}
			return -1;
		}


		template<typename T>
		int binarySearch(const T arr[], int s, T x) {
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
};

#endif //ARRAY

