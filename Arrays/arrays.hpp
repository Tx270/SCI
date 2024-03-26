#ifndef ARRAY
#define ARRAY

class arrays
{
	
	public:
	void print(const int arr[], int s);
	void printChar(const char arr[], int s);
	void deleteRepeats(int arr[], int arr2[], int s);
	void reverse(int arr[], int s);
	float average(int arr[], int s);
	int max(const int arr[], int s);
	int min(const int arr[], int s);
	int median(const int arr[], int s);
	void input(int arr[], int s);
	void generate(int arr[], int s, int max = 10);
	void generateChar(char arr[], int s);
	void bubbleSort(int arr[], int s);
	bool compare(const int arr[], int s, const int arr2[], int s2);
	void swap(int arr[], int id1, int id2);
	int linearSearch(const int arr[], int s, int x);
	int binarySearch(const int arr[], int s, int x);

};

#endif //ARRAY

