#include<stdio.h>

int main()
{
    int ch;
    printf("POST OF EMPLOYEES :-\n");
    printf("\t1)CEO\n\t2)Manager\n\t3)Accountant\n\t4)Watch-man\nEnter your post: ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1: printf("Managers work under you!\n");
        case 2: printf("Accountants work under you!\n");
        case 3: printf("Watch-man has a post lower than yours!\n");
                break;
        case 4: printf("You are a Watch man!\n");
                break;
        default: printf("\nPlease enter the correct post option among 1, 2, 3 or 4 keys!\n");
    }

    return 0;
}
