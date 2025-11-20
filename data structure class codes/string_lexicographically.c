#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    int len = strlen(s1);
    int i;
    for (i = 0; i < len; i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    // Compare character by character
    for (i = 0; i < len; i++)
    {
        if (s1[i] < s2[i])
        {
            printf("-1\n");
            printf("first line will come first\n");
            return 0;
        }
        else if (s1[i] > s2[i])
        {
            printf("1\n");
            printf("second line will come first\n");
            return 0;
        }
    }

    // If all characters are equal
    printf("0\n");
    printf("BOTH ARE SAME\n");

    return 0;
}
