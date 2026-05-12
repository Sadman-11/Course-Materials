/*
3. Write a program in C to Push N elements to the stack, then implement a function to
reverse the top K elements without using any extra stack or array.

Sample Input
Push : 10 20 30 40 50
K=3

Sample Output
Reversed Stack : 10 20 50 40 30
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX], top = -1;

void push(int x)
{
    if (top == MAX - 1)
    {
        printf("\tStack Overflow!!\n\tPush operation failed!!");
        return;
    }
    stack[++top] = x;
    printf("\t%d pushed to stack.\n", x);
}

void pop()
{
   if (top == -1)
    {
        printf("\tStack Underflow (empty)!!\n\tPop operation failed!!\n");
        return;
    }
    printf("\t%d popped from stack.\n", stack[top--]);
}

void reverseTopK(int k)
{
    if (k > top + 1)
    {
        printf("\tNot enough elements to reverse!!\n");
        return;
    }
    int i = top - k + 1, j = top;
    while (i < j)
    {
        int temp = stack[i];
        stack[i] = stack[j];
        stack[j] = temp;
        i++;
        j--;
    }
    printf("\tTop %d elements reversed\n", k);
}

void display()
{
    if (top == -1)
    {
        printf("\tStack is Empty!!\n");
        return;
    }
    printf("\tStack Contains : ");
    for (int i = 0; i <= top; i++)
    {
        printf("\t%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    int choice, item, k;
    //char cont = 'y';
    printf("--------------------MENU--------------------\n");
    printf("\tWhat type of operation do you want to perform?\n");
    printf("\t1. Push\n\t2. Pop\n\t3. Display\n\t4. Reverse Top K\n\t5. Exit\n\t");

    while (1)
    {
        //system("cls");

        printf("\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\t> Your choice: Push operation\n");
                printf("\t> Enter a number to push into the stack: ");
                scanf("%d", &item);
                push(item);
                break;

            case 2:
                printf("\t> Your choice: Pop operation\n");
                pop();
                break;

            case 3:
                printf("\t> Your choice: Display operation\n");
                display();
                break;

            case 4:
                printf("\tEnter K : ");
                scanf("%d", &k);
                reverseTopK(k);
                break;

            case 5:
                printf("\tBYE!!!\n");
                exit(0);

            default:
                printf("\t>Invalid Input!!\n");
        }

        //printf("\n\tDo you want to continue? (y for yes/any other key for no) : ");
       // scanf(" %c", &cont);
    }

    printf("\n\tProgram Terminated. Goodbye!!\n");
    return 0;
}
