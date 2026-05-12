/*
5. Write a program in C where in addition to normal peek (top), you can also peek the
middle element of the stack.
Sample Input
Push 10
Push 20
Push 30
Display()
Special peek()

Sample Output
Element 10 pushed to stack.
Element 20 pushed to stack.
Element 30 pushed to stack.
Stack Contain : 10 20 30
Middle element is 20.
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

void middlePeek()
{
    if (top == -1)
    {
        printf("\tStack Empty\n");
        return;
    }
    int mid = top / 2;   // Middle index
    printf("\tMiddle element is %d.\n", stack[mid]);
}

void peek()
{
    if (top == -1)
    {
        printf("\tStack Empty\n");
        return;
    }
    printf("\tTop element is %d.\n", stack[top]);
}

int main()
{
    int choice, item;
    //char cont = 'y';
    printf("--------------------MENU--------------------\n");
    printf("\tWhat type of operation do you want to perform?\n");
    printf("\t1. Push\n\t2. Pop\n\t3. Display\n\t4. Peek (Top)\n\t5. Special Peek (Middle)\n\t6. Exit\n");

    while (1)
    {
        //system("cls");

        printf("\n\tEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\tYour choice : Push operation\n");
                printf("\tEnter a number to push into the stack : ");
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
                peek();
                break;

            case 5:
                middlePeek();
                break;

            case 6:
                printf("\tBYE!!!\n");
                exit(0);

            default:
                printf("\t> Invalid Input!!\n");
        }

        //printf("\n\tDo you want to continue? (y for yes/any other key for no) : ");
        //scanf(" %c", &cont);
    }

    printf("\n\tProgram Terminated. Goodbye!!\n");
    return 0;
}
