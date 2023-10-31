#include <stdio.h>

int len(char *str) {
    const char *ptr = str;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    return length;
}

int main() {
    char String[100];
    printf("Enter a string: ");
    scanf("%s", String);

    int length = stringLength(String);
    printf("Length of the string: %d\n", length);

    return 0;
}
