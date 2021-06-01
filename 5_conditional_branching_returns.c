#include<stdio.h>

int main()
{
    int i;
    printf("Enter a number:\t");
    scanf("%d", &i);
    if (i >= 0 && i <= 10)
        printf("i is between 0 and 10");
    else if (i >= 11 && i <= 15)
        printf("i is between 11 and 15");
    else if (i >= 16 && i <= 20)
        printf("i is between 16 and 20");
    else
        printf("i is greater than 20");
}
