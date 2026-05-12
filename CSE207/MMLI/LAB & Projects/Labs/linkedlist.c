#include<stdio.h>

struct Node {

int data;
struct Node *link;

};

struct Node *head, *node, *temp;
int main(){

int n,i;
printf("Enter how many data");

scanf("%d",&n);
head=NULL;
for(i=1;i<=n;i++)
{
    node=(struct Node *)malloc(sizeof(struct Node*));
    if(node==NULL)
        printf("Connot allocate");
    else {
        int item;
        printf("\nEnter your data %d: ",i);
        scanf("%d",&item);
        node->data=item;
        node->link=NULL;

        if(head==NULL)
        {
            head=node;
            printf("\nInserted at head\n");
        }

        else {

            temp=head;
            while(temp->link!=NULL)
                temp=temp->link;

            temp->link=node;

        }

    }
}


            temp=head;
            while(temp!=NULL)
                {printf("%d------->",temp->data);
                temp=temp->link;
                }
            printf("NULL");

}
