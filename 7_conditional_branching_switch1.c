#include<stdio.h>

int main()
{
    int ch;
    printf("\tPosts of Employees :-");
    printf("\n\t1)CEO\n\t2)Manager\n\t3)Accountant\n\t4)Watch-man\nEnter your post:\t");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1: printf("\nManagers work under you!");
        case 2: printf("\nAccountants work under you!");
        case 3: printf("\nWatch-man has a post lower than yours!");
                break;
        case 4: printf("\nYou are a Watch man!");
                break;
        default: printf("\nWrong Choice!");
    }

    return 0;
}
