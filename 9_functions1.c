//Given that the volume of tromboloid is twice the length divided by thrice the breadth
#include<stdio.h>

float tromboloid_vol(int, int);

int main()
{
    int length, breadth;
    printf("Enter the length of the tromboloid:\t");
    scanf("%d", &length);
    printf("Enter the breadth of the tromboloid:\t");
    scanf("%d", &breadth);
    float volume = tromboloid_vol(length, breadth);
    printf("\nThe volume of the tromboloid is:\t%f", volume);
    return 0;
}

float tromboloid_vol(int l, int b)
{
    float vol = (2*l)/(3*b);
    printf("%f checking", vol);
    return vol;
}
