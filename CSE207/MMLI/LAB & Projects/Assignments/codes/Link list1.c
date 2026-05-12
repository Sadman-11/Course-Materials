#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

struct Node *head = NULL;

void insertAtBeginning(int item)
{
    struct Node *node = (struct Node*) malloc(sizeof(struct Node));
    if(node == NULL)
    {
        printf("\tMemory allocation failed\n");
        return;
    }
    node->data = item;
    node->link = head;
    head = node;
}

void display()
{
    struct Node *temp = head;
    printf("\n\tLink list contains : ");
    while(temp != NULL)
    {
        printf("\t%d", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    int n, item;
    printf("\tEnter how many elements you want to insert : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("\n\tEnter new elements : ");
        scanf("%d", &item);
        insertAtBeginning(item);
        display();
    }
    return 0;
}
