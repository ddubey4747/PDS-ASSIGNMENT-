#include <stdio.h>

int main() {
    int arr[100];
    int size, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements in the array: ", size);
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int *parr;
    parr = arr;
    
    for (int i = 0; i < size; i++) {
        sum += *(parr + i);
    }
    
    printf("The sum is %d", sum);
    
    return 0;
}
