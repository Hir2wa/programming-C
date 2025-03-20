#include <stdio.h>


void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {  // Outer loop runs (size - 1) times
        for (int j = 0; j < size - 1 - i; j++) {  // Reduce inner loop each pass
            if (arr[j] > arr[j + 1]) {  // Swap if elements are in wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to Print Array
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int my_array[] = {5, 2, 8, 12, 1, 6, 3};
    int size = sizeof(my_array) / sizeof(my_array[0]);

    printf("Original array: ");
    print_array(my_array, size);

    bubble_sort(my_array, size);

    printf("Sorted array: ");
    print_array(my_array, size);

    return 0;
}






