/*
4. Write a program in C that implements a stack which ignores duplicate values
during push. If an element already exists in the stack, it should not be added again.
Sample Input
Push 10
Push 20
Push 30
Push 20
Push 40
Push 10
Display()

Sample Output
Element 10 pushed to stack.
Element 20 pushed to stack.
Element 30 pushed to stack.
Duplicate entry ignored.
Element 40 pushed to stack.
Duplicate entry ignored.
Stack Contain : 10 20 30 40
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stack[MAX], top = -1;

int exists(int x)
{
    for (int i = 0; i <= top; i++)
    {
        if (stack[i] == x)
        {
            return 1;
        }
    }
    return 0;
}

void push(int x)
{
    if (exists(x))
    {
        printf("\t%d Cannot be Inserted (Duplicate entry ignored)!!\n" ,  x);
        return;
    }
    if (top == MAX - 1)
    {
        printf("\tStack Overflow!!\n\tPush operation failed!!");
        return;
    }
    stack[++top] = x;
    printf("\tElement %d pushed to stack.\n", x);
}

void pop()
{
    if (top == -1)
    {
         printf("\tStack Underflow (empty)!!\n\tPop operation failed!!\n");
        return;
    }
    printf("\tPopped element: %d\n", stack[top--]);
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
    printf("-------------------- MENU --------------------\n");
    printf("\tWhat type of operation do you want to perform?\n");
    printf("\t1. Push\n\t2. Pop\n\t3. Display\n\t4. Exit\n");

    while (1)
    {
        //system("cls");

        printf("\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\tYour choice: Push operation\n");
                printf("\tEnter a number to push into the stack: ");
                scanf("%d", &item);
                push(item);
                break;

            case 2:
                printf("\tYour choice: Pop operation\n");
                pop();
                break;

            case 3:
                printf("\tYour choice: Display operation\n");
                display();
                break;

            case 4:
                printf("\tBYE!!!\n");
                exit(0);

            default:
                printf("\tInvalid Input!!\n");
        }

        //printf("\n\tDo you want to continue? (y for yes/any other key for no): ");
        //scanf(" %c", &cont);
    }

    printf("\n\tProgram Terminated. Goodbye!!\n");
    return 0;
}
