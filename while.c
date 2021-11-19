// while loop in C
#include <stdio.h>
void main()
{
    int i;
    char c;
    printf("\nEnter a character:");
    scanf("%c",&c);
    i = 0;
    while (i < 3)
    {
        printf("\n%c", c);
        i++;
    }
}