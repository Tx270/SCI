#ifndef ARRAY
#define ARRAY

class arrays
{
	public:
		void print(const int arr[], int s);
		int* input(int& s);
		int* generate(int s, int max = 10);
		int* deleteRepeats(const int arr[], int& s);
		void reverse(int arr[], int s);
		void swap(int arr[], int id1, int id2);
		void bubbleSort(int arr[], int s);
		int* join(int arr1[], int s1, int arr2[], int s2);
		void shuffle(int arr[], int s);
		float mean(const int arr[], int s);
		float median(const int sorted_arr[], int s);
		float standardDeviation(const int arr[], int s);
		int max(const int arr[], int s);
		int min(const int arr[], int s);
		bool compare(const int arr[], int s, const int arr2[], int s2);
		void ptr2arr(int* arr_p, int arr[], int s);
		int linearSearch(const int arr[], int s, int x);
		int binarySearch(const int arr[], int s, int x);
};

#endif //ARRAY

