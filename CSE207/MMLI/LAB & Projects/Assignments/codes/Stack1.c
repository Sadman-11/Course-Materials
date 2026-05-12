/*
1. Write a program in C to implement a stack that only allows even numbers to be
pushed. Odd numbers should be rejected with an appropriate message.
Sample Input
Push 20
Push 23
Push 40

Sample Output
Stack Contain: 20
Cannot be Inserted
Stack Contain: 20 40
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX], top = -1;

void push(int x)
{
    if (x % 2 != 0)
    {
        printf("\t%d Cannot be Inserted (only even numbers allowed)!!\n" ,  x);
        return;
    }
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
    int choice, item;
    //char cont = 'y';
    printf("--------------------MENU--------------------\n");
    printf("\tWhat type of operation do you want to perform?\n");
    printf("\t1. Push\n\t2. Pop\n\t3. Display\n\t4. Exit\n\t");

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
                printf("\tBYE!!!\n");
                exit(0);

            default:
                printf("\t>Invalid Input!!\n");
        }

        //printf("\n\tDo you want to continue? (y for yes/any other key for no) : ");
        //scanf(" %c", &cont);
    }

    printf("\n\tProgram Terminated. Goodbye!!\n");
    return 0;
}
