#include "sorting.h"

void BubbleSort(int* arr, int n) {
	bool swapped;
	for (int i = 0; i < n - 1; ++i) {
		swapped = false;
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				swapped = true;
				swap(arr[j], arr[j + 1]);
			}
		}
		if (swapped == false)
			break;
	}
}