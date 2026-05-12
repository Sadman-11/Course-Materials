/*
2. Write a program in C to Create a stack with a constraint that the sum of all elements
in the stack should never exceed 100. Prevent further pushes if adding the new
element exceeds this limit.

Sample Input & Output:
If current sum + new element > 100, reject the push and display:
“Sum limit exceeded.”
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX], top = -1, sum = 0;

void push(int x)
{
    if (sum + x > 100)
    {
        printf("\tSum limit exceeded. Cannot insert %d (Current Sum = %d)\n", x, sum);
        return;
    }
    if (top == MAX - 1)
    {
        printf("\tStack Overflow!!\n\tPush operation failed!!");
        return;
    }
    stack[++top] = x;
    sum += x;
    printf("\t%d pushed to stack. (Current Sum = %d)\n", x, sum);
}

void pop()
{
    if (top == -1)
    {
        printf("\tStack Underflow (empty)!!\n\tPop operation failed!!\n");
        return;
    }
    int removed = stack[top--];
    sum -= removed;
    printf("\tPopped element : %d (Current Sum = %d)\n", removed, sum);
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
        printf("%d ", stack[i]);
    }
    printf(" (Sum = %d)\n", sum);
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
                printf("\t> Invalid Input!!\n");
        }

        //printf("\n\tDo you want to continue? (y for yes/any other key for no) : ");
        //scanf(" %c", &cont);
    }

    printf("\n\tProgram Terminated. Goodbye!!\n");
    return 0;
}
