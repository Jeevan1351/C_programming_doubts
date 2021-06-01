#include<stdio.h>
#define pi 3.1415

float volume_of_sphere(int r)
{
    float volume = (4/3)*(pi*r*r*r);
    return volume;
}


int main()
{
    float radius;
    printf("Enter the radius of the sphere:\t");
    scanf("%f", &radius);

    float vol = volume_of_sphere(radius);
    printf("\nThe volume of the sphere upto 2 decimal places: %f\n", vol);
    printf("\nThe integer part of volume of the sphere: %d\n", (int)vol);
}
