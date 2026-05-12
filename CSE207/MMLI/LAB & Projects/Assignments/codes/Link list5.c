#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

struct Node *head = NULL;

void insertAtEnd(int item)
{
    struct Node *node = (struct Node*) malloc(sizeof(struct Node));
    node->data = item;
    node->link = NULL;
    if(head == NULL)
    {
        head = node;
    }
    else
    {
        struct Node *temp = head;
        while(temp->link != NULL) temp = temp->link;
        temp->link = node;
    }
}

void reverseList()
{
    struct Node *prev = NULL, *curr = head, *next = NULL;
    while(curr != NULL)
    {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

void display()
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    int n, item;
    printf("Enter how many elements you want to insert : ");
    scanf("%d", &n);

    printf("Enter the elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &item);
        insertAtEnd(item);
    }

    printf("\nLinked List elements : ");
    display();

    reverseList();

    printf("\nReversed Linked List : ");
    display();

    return 0;
}
