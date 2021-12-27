#include "sorting.h"


int findmax(int* arr, int n) {
	int max = INT16_MIN;
	for (int i = 0; i < n; ++i)
		if (arr[i] > max)
			max = arr[i];
	return max;
} 

void CountSort(int* arr, int n,int x) {
	int max = findmax(arr, n);
	cout << max << endl;
	int* countArr = new int[max + 1];
	int* output = new int[n];
	for (int i = 0; i <= max; ++i)
		countArr[i] = 0;
	for (int i = 0; i < n; ++i)
		countArr[(arr[i]/x)%10]++;
	for (int i = 1; i <= max; ++i) {
		countArr[i] += countArr[i - 1];
	}
	for (int i = n - 1; i >= 0; --i) {
		output[countArr[(arr[i]/x)%10] - 1] = arr[i];
		countArr[(arr[i]/x)%10]--;
	}
	for (int i = 0; i < n; ++i)
		arr[i] = output[i];
}

void RadixSort(int* arr, int n) {
	int max = findmax(arr, n);
	for (int i = 1; max/i>0; i *= 10) {
		CountSort(arr, n, i);
	}
}