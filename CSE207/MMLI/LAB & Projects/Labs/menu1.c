// Menu driven program in C
#include <stdio.h>

// Driver code
int main() {
    // Choice variable
    int choice = -1;
    int stack[10],n=5,top=-1;

    // Menu display
    printf("MENU:\n1. Push\n2. Pop\n3. Display \n4. Exit");

    // Infinite Loop for choice input
    while(1){
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        if(choice == 1){
            printf("> Your choice push!\n");
            if(top==n-1)
                printf("Overflow..! Try next time");
            else{
                int item;
                printf("Enter your data: ");
                scanf("%d",&item);

                top=top+1;
                stack[top]=item;
                printf("\n Push operation done!!!");

            }

        }
        else if (choice == 2){
            printf("> Your choice pop!!\n");
            if(top==-1)
                printf("\n underflow--Keu Nai!!!\n");
            else {

                int del_item=stack[top];
                printf("\n %d is deleted",del_item);
                top=top-1;

            }

        }

        else if (choice == 3){
            printf("> Your choice Display!!\n");
            if(top==-1)
                printf("\n underflow--Keu Nai!!!\n");
            else{
                int i;
                for(i=0;i<=top;i++)
                    printf("%d    ", stack[i]);


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
