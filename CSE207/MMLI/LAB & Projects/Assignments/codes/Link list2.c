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

int countNodes()
{
    int count = 0;
    struct Node *temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}

void insertAtMiddle(int item)
{
    int pos = countNodes() / 2;
    struct Node *node = (struct Node*) malloc(sizeof(struct Node));
    node->data = item;

    struct Node *temp = head;
    for(int i = 1; i < pos; i++) temp = temp->link;
    node->link = temp->link;
    temp->link = node;
}

int search(int key)
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return 1;
        }
        temp = temp->link;
    }
    return 0;
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
    int n, item, key;
    printf("\tEnter how many elements you want to insert : ");
    scanf("%d", &n);

    printf("\n\tEnter the elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &item);
        insertAtEnd(item);
    }

    printf("\n\tLinked List elements : ");
    display();

    printf("\n\tEnter search key : ");
    scanf("%d", &key);

    if(search(key))
    {
        printf("\n\tElement is found\n");
    }
    else
    {
        printf("\n\tNot Found\n");
        insertAtMiddle(key);
        printf("\t%d Inserted at the middle\n", key);
    }

    printf("\n\tLinked List elements : ");
    display();

    return 0;
}
