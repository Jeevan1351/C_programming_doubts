#include<stdio.h>

int main()
{
    char ch;
    printf("\t\tMenu\n\ta)Masala Dosa\n\tb)Idly\n\tc)Maggi\n\td)Vada");
    printf("\n\n\nEnter choice:\t");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a': printf("\nYou have selected Masala Dosa!");
                    break;
        case 'b': printf("\nYou have selected Idly!");
                    break;
        case 'c': printf("\nYou have selected Maggi!");
                    break;
        case 'd': printf("\nYou have selected Vada!");
                    break;
        default: printf("\nWrong Choice!!");
    }
    return 0;
}
