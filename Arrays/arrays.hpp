#ifndef ARRAY
#define ARRAY

class arrays
{
	
	public:
	void print(int arr[], int s);
	void printChar(char arr[], int s);
	void deleteRepeats(int arr[], int arr2[], int s);
	void reverse(int arr[], int arr2[], int s);
	int maks1D(char arr[], int s);
	void input(int arr[], int s);
	void generate(int arr[], int s, int max = 10);
	void generateChar(char arr[], int s);
	void bubbleSort(int arr[], int s);
	bool compare(int arr[], int s, int arr2[], int s2);
	void swap(int arr[], int id1, int id2);
	int linearSearch(int arr[], int s, int x);
	int binarySearch(int arr[], int s, int x);

};

#endif //ARRAY

