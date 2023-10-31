#include <stdio.h>
#include <string.h>

void count(char input[]);

int main(void)
{
    char inputString[100];
    printf("Enter String: ");
    gets(inputString);

    count(inputString);

    return 0;
}

void count(char inputString[])
{
    char *ptr = inputString;
    int vowelCount = 0, consonantCount = 0;
    while (*ptr != '\0')
    {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            vowelCount++;
        else
            consonantCount++;

        ptr++;
    }

    printf("Vowel Count: %d\n", vowelCount);
    printf("Consonant Count: %d\n", consonantCount);
    return;
}
