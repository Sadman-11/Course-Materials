/*
6. Write a program in C to implement a queue that only allows prime numbers to be
enqueued. Non-prime numbers should be rejected with an appropriate message.
Sample Input Sample Output
Enqueue 7
Enqueue 10
Enqueue 13
Display()

Element 7 inserted to Queue
10 is not a prime Number
Element 13 inserted to Queue.
Queue Contains: 7 13
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10

int queue[MAX], front = -1, rear = -1;

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void enqueue(int x)
{
    if (!isPrime(x))
    {
        printf("\t%d is not a prime Number\n", x);
        return;
    }
    if (rear == MAX - 1)
    {
        printf("\tQueue Overflow!!\n\tEnqueue operation failed!!");
        return;
    }
    if (front == -1) front = 0;
    {
        queue[++rear] = x;
    }
    printf("\tElement %d inserted to Queue\n", x);
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("\tQueue Underflow!!\n\tDequeue operation failed!!");
        return;
    }
    printf("\tDequeued element: %d\n", queue[front++]);
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("\tQueue Empty!!\n");
        return;
    }
    printf("\tQueue Contains : ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int choice, item;
    //char cont = 'y';
    printf("-------------------- MENU --------------------\n");

    printf("\t1. Enqueue\n\t2. Dequeue\n\t3. Display\n\t4. Exit\n");
    printf("\tWhat type of operation do you want to perform?\n");

    while (1)
    {
        //system("cls");

        printf("\tEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\tYour choice : Enqueue operation\n");
                printf("\tEnter a number to enqueue : ");
                scanf("%d", &item);
                enqueue(item);
                break;

            case 2:
                printf("\tYour choice : Dequeue operation\n");
                dequeue();
                break;

            case 3:
                printf("\tYour choice: Display operation\n");
                display();
                break;

            case 4:
                printf("\tBYE!!\n");
                exit(0);

            default:
                printf("\tInvalid Input!!\n");
        }

        //printf("\n\tDo you want to continue? (y for yes/any other key for no) : ");
        //scanf(" %c", &cont);
    }

    printf("\n\tProgram Terminated. Goodbye!!\n");
    return 0;
}
