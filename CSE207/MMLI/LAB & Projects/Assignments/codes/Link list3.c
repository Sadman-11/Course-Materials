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

void deleteFromBeginning()
{
    if(head == NULL)
    {
        printf("\nList is empty!!\n");
        return;
    }
    struct Node *temp = head;
    head = head->link;
    free(temp);
}

void display()
{
    struct Node *temp = head;
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
    printf("Enter how many elements you want to insert : ");
    scanf("%d", &n);

    printf("\nEnter the elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &item);
        insertAtEnd(item);
    }

    printf("\nLinked List elements : ");
    display();

    deleteFromBeginning();

    printf("\nAfter deletion : ");
    display();

    return 0;
}
