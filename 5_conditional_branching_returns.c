#include<stdio.h>

int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    if (i >= 0 && i <= 10)
        printf("The number is between 0 and 10\n");
    else if (i >= 11 && i <= 15)
        printf("The number is between 11 and 15\n");
    else if (i >= 16 && i <= 20)
        printf("The number is between 16 and 20\n");
    else
        printf("The number is greater than 20\n");
}
