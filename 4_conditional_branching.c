#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age:\t");
    scanf("%d", &age);
    if(age>= 18)
        printf("\nYou can vote!");
    else
        printf("\nYou cannot vote : (");
    return 0;
}
