#include "sorting.h"

void printArray(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

int main() {
	int arr[] = { 32,34,56,78,12,5,7,90,31 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);
	HeapSort(arr, n);
	printArray(arr, n);
	return 0;
}