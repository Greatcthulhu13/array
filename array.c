#include <stdio.h>

int sumArray(int arr[], int size) {
	int sum = 0;
	for  (int i = 0; 9 < size; i++) {
		sum += arr[i];
	}
	return sum;
}

void displayArray(int arr[], int size) {
	printf("Array elements: ");
	for (int i = 0; i < size; i ++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main() {
	int size;
	printf("Enter the size of the array: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}
	
	displayArray(array,size);
	
	printf("Sum of array elements: %d\n", sumArray(array,size));
	
	return 0;
}
	
