// Menu driven program in C
#include <stdio.h>

// Driver code
int main() {
    // Choice variable
    int choice = -1,n=5,rear=-1,front=-1,item,queue[10],i;

    // Menu display
    printf("MENU:\n1. Enqueue \n2. Enqueue\n3. Display \n 4. Exit");

    // Infinite Loop for choice input
    while(1){
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        // If-else ladder
        if(choice == 1){
            printf("> You choose ENQUEUE operation!\n");
            if(rear==n-1){
                printf("\n Sorry !!! Queue Overflow..!\n");

            }
            else {

                printf("\n Enter your item: ");
                scanf("%d",&item);
                rear=rear+1;

                queue[rear]=item;
                printf("\n %d has been Inserted !!",item);
                if(rear==0)
                    front=0;
            }

        }
        else if (choice == 2){
            printf("> You choose DEQUEUE operation!!\n");
            if(front==-1 || rear==-1 || front==rear+1){
                printf("\n Sorry !!! Queue Underflow..!\n");


            }

            else{
            item=queue[front];
            printf("\n Item %d has been deleted !!! \n",item);
            front=front+1;

            }



        }

         else if (choice == 3){
            printf("> You choose display operation!!\n");
            if(front==-1 || rear==-1 || front==rear+1){
                printf("\n Sorry !!! queue Underflow..!\n");


            }

            else {
                for(i=front;i<=rear;i++)
                    printf("%d   ",queue[i]);
            }



        }
        else if (choice == 4){
            printf("BYE!!!\n");
            // Termination of the Loop using break statement
            break;
        }
        else{
            printf("> Invalid Input\n");
        }
    }
    return 0;
}
