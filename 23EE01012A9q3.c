#include <stdio.h>

int main() {
    int arr[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int search;
    printf("Enter the element you want to search: ");
    scanf("%d", &search);

    int *parr = arr;

    int found = 0;

    for (int i = 0; i < size; i++) {
        if (*(parr + i) == search) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
