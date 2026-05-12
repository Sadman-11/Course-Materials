// Menu driven program in C
#include <stdio.h>

// Driver code
int main() {
    // Choice variable
    int choice = -1;

    // Menu display
    printf("MENU:\n1. Coffee\n2. Tea\n3. Exit");

    // Infinite Loop for choice input
    while(1){
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        // If-else ladder
        if(choice == 1){
            printf("> Enjoy your Coffee!\n");
        }
        else if (choice == 2){
            printf("> Enjoy your Tea!\n");
        }
        else if (choice == 3){
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
