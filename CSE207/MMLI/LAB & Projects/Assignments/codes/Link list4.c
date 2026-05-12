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

int deleteKey(int key)
{
    struct Node *temp = head, *prev = NULL;

    while(temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->link;
    }

    if(temp == NULL)
    {
        return 0;
    }

    if(prev == NULL)
    {
        head = head->link;
    }
    else
    {
        prev->link = temp->link;
    }
    free(temp);
    return 1;
}

void display()
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    int n, item, key;
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

    printf("\nEnter key to delete : ");
    scanf("%d", &key);

    if(deleteKey(key))
    {
        printf("\nElement %d deleted successfully.\n", key);
        printf("\nAfter deletion : ");
        display();
    }
    else
    {
        printf("\nElement %d not found. Deletion not possible.\n", key);
    }

    return 0;
}
