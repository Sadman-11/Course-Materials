/*
7. Write a program in C to implement a queue where the sum of all elements should
never exceed 50. Reject new elements that would cause the sum to exceed 50.
Sample Input Sample Output
Enqueue 20
Enqueue 15
Enqueue 18
Enqueue 10
Display()

Element 20 inserted to Queue
Element 15 inserted to Queue.
Inserting 18 would exceed sum limit
(current sum = 35). Rejected
Element 10 inserted to Queue.
Queue Contains: 20 15 10
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int queue[MAX], front = -1, rear = -1, sum = 0;

void enqueue(int x)
{
    if (sum + x > 50)
    {
        printf("\tSum limit exceeded. Cannot insert %d (Current Sum = %d)\n", x, sum);
        return;
    }
    if (rear == MAX - 1)
    {
        printf("\tQueue Overflow!!\n\Enqueue operation failed!!");
        return;
    }
    if (front == -1) front = 0;
    {
        queue[++rear] = x;
        sum += x;
        printf("\tElement %d inserted to Queue.(Current Sum = %d)\n", x, sum);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("\tQueue Underflow!!\n\tDequeue operation failed!!");
        return;
    }
    int removed = queue[front++];
    sum -= removed;
    printf("\tDequeued element : %d (Current Sum = %d)\n", removed, sum);
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
                printf("\t> Your choice : Enqueue operation\n");
		printf("\tEnter a number to enqueue : ");
                scanf("%d", &item);
                enqueue(item);
                break;

            case 2:
		printf("\t> Your choice : Dequeue operation\n");
                dequeue();
                break;

            case 3:
		printf("\t> Your choice: Display operation\n");
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
