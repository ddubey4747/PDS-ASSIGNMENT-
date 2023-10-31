#include <stdio.h>

void swap(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(arr1 +i);
        *(arr1+i) = *(arr2+i);
        *(arr2 + i) = temp;
    }
}

int main() {
    int size;
    int ar1[100], ar2[100];
    printf("enter the size of both the arrays: ");
    scanf("%d", &size);

    printf("enter %d values in the first array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &ar1[i]);
    }

    printf("enter %d values in the second array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &ar2[i]);
    }

    swap(ar1, ar2, size);

    printf("Swapped Arrays:\n");

    printf("First Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", ar1[i]);

    printf("\nSecond Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", ar2[i]);

    return 0;
}
