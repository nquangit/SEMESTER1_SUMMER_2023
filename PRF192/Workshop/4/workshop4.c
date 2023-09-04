#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100

void menu()
{
    printf("1. Reverse a string\n");
    printf("2. Transform letters\n");
    printf("3. Count characters\n");
    printf("4. Most frequent character\n");
    printf("5. Reverse words\n");
}

void getString(char *str)
{
    printf("Enter a string: ");
    fflush(stdin);
    scanf("%[^\n]", str);
}

void printString(char *str)
{
    printf("%s\n", str);
}

void swap(char *x, char *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

void reverseString(char *str)
{
    int len = strlen(str);
    for (char *i = str; i < str + len / 2; i++)
    {
        swap(i, str + len - 1 - (i - str));
    }
}

void transformString(char *str)
{
    // trasform upper to lower and lower to upper
    int len = strlen(str);
    for (char *i = str; i < str + len; i++)
    {
        if (isupper(*i))
        {
            *i = tolower(*i);
        }
        else if (islower(*i))
        {
            *i = toupper(*i);
        }
    }
}

void countCharacter(char *str, int *count)
{
    int len = strlen(str);
    for (char *i = str; i < str + len; i++)
    {
        *(count + (int)*i) += 1;
    }
    /* Original
    for (int i = 0; i < 256; i++) {
        count[str[i]] += 1;
    }
    */
}

void printFreq(int *count)
{
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            printf("%c: %d\n", i, count[i]);
        }
    }
}

int findMaxId(int *count)
{
    int max = *count;
    int savedIndex = 0;
    for (int *i = count; i < count + 256; i++)
    {
        if (*i > max)
        {
            max = *i;
            savedIndex = i - count;
        }
    }
    return savedIndex;
}

void mostFreqCharacter(char *str)
{
    int *count = (int *)calloc(256, sizeof(int));
    countCharacter(str, count);
    int maxId = findMaxId(count);
    printf("Most frequent character: %c\n", maxId);
    // Free memory
    free(count);
}

void reverseWord(char *str)
{
    // reverse string by word
    int len = strlen(str);
    char *newStr = (char *)calloc(len, sizeof(char));
    char *tmp = (char *)calloc(len, sizeof(char));

    for (char *i = str + len - 1; i >= str; i--) // Loop backwards
    {
        if (*i == ' ')
        {
            reverseString(tmp);
            strcat(newStr, tmp);                     // Concentrate newStr with tmp
            strcat(newStr, " ");                     // Concentrate current character (space) to newStr
            tmp = (char *)calloc(len, sizeof(char)); // Empty string
        }
        else
        {
            strncat(tmp, i, 1); // Copy current character to tmp
        }
    }
    // check if tmp is empty
    if (strlen(tmp) > 0)
    {
        tmp = strrev(tmp);
        strcat(newStr, tmp);
    }
    // Move newStr to str
    strcpy(str, newStr);
    // Free memory
    free(tmp);
    free(newStr);
}

int main()
{
    int choice;
    do
    {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            char str[MAX_SIZE];
            getString(str);
            reverseString(str);
            printString(str);
            break;
        }
        case 2:
        {
            char str[MAX_SIZE];
            getString(str);
            transformString(str);
            printString(str);
            break;
        }
        case 3:
        {
            char str[MAX_SIZE];
            int *count = (int *)calloc(256, sizeof(int));
            getString(str);
            countCharacter(str, count);
            printFreq(count);
            // Free memory
            free(count);
            break;
        }
        case 4:
        {
            char str[MAX_SIZE];
            getString(str);
            mostFreqCharacter(str);
            break;
        }
        case 5:
        {
            char str[MAX_SIZE];
            getString(str);
            reverseWord(str);
            printString(str);
            break;
        }
        }
        printf("====================================\n");
    } while (choice >= 1 && choice <= 5);
    // Bye
    printf("Bye\n");
    return 0;
}