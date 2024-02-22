#include <stdio.h>

void reverseArrayExtraArray(int arr[], int size) 
{
	int reversedArr[size];
	for (int i = 0; i < size; i++) {
		reversedArr[i] = arr[size - i - 1];
	}

	// Print reversed array
	printf("Reversed Array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", reversedArr[i]);
	}
}

int main() {
	int originalArr[] = {5, 6, 7, 8, 9, 10};
	int size = sizeof(originalArr) / sizeof(originalArr[0]);
	
	reverseArrayExtraArray(originalArr, size);

	return 0;
}
