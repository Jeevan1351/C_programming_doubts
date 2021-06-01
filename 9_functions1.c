#include<stdio.h>

float cone_vol(int, int);

int main()
{
    int radius, height;
    printf("Enter the radius of the cone:\t");
    scanf("%d", &radius);
    printf("Enter the height of the cone:\t");
    scanf("%d", &height);
    float volume = cone_vol(radius, height);
    printf("\nThe volume of the cone is:\t%f", volume);
    return 0;
}

float cone_vol(int l, int b)
{
    float vol = (2*l)/(3*b);
    printf("%f checking", vol);
    return vol;
}
