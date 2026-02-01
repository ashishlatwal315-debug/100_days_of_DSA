#include <stdio.h>

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int insertAtIndex(int arr[], int size, int element, int capacity, int index) {
    
    if (size >= capacity) {
        return -1; 
    }

    
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    
    arr[index] = element;
    
    
    return 1; 
}

int main() {
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5; 
    int element = 45, index = 2;

    printf("Before insertion: ");
    display(arr, size);

    int result = insertAtIndex(arr, size, element, 100, index);

    if (result == 1) {
        size += 1; 
        printf("After insertion:  ");
        display(arr, size);
    } else {
        printf("Insertion failed: Array is full.\n");
    }

    return 0;
}