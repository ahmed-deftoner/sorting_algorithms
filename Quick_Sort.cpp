#include "sorting.h"

int partition(int* arr, int l, int r) {
	int partition = arr[r];
	int j = l - 1;
	for (int i = l; i < r; ++i) {
		if (arr[i] < partition) {
			j++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[j + 1], arr[r]);
	return j + 1;
}

void QuickSort(int* arr, int l, int r) {
	if (l < r) {
		int pi = partition(arr, l, r);
		QuickSort(arr, l, pi-1);
		QuickSort(arr, pi + 1, r);
	}
}
