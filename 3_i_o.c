#include<stdio.h>

 int main()
 {
     int fav_no;
     printf("Enter your favourite number: ");
     scanf("%d",&fav_no);//
     char alpha;
     printf("Enter a random character:\t");
     scanf("%c",&alpha);

     printf("Your favourite number is: %d\nYour entered Character is: %d", fav_no, alpha);
 }
