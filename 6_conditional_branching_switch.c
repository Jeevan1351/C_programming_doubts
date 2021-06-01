#include<stdio.h>

int main()
{
    char ch;
    printf("************___MENU___************\n");
    printf("\ta) Masala Dosa\n\tb) Idly\n\tc) Maggi\n\td) Vada\n\n");
    printf("Enter choice: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a': printf("You have selected Masala Dosa!\n");
                    break;
        case 'b': printf("You have selected Idly!\n");
                    break;
        case 'c': printf("You have selected Maggi!\n");
                    break;
        case 'd': printf("You have selected Vada!\n");
                    break;
        default: printf("Please select a valid character out of a, b, c or d!!\n");
    }
    return 0;
}
