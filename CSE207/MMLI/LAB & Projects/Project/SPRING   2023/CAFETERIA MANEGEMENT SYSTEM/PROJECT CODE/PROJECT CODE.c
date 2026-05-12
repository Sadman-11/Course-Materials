
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD "admin"

struct adminnode
{
    int data;
    char foodname[20];
    float price;
    struct adminnode *next;
};

struct customernode
{
    int data;
    int quantity;
    struct customernode *next;
};

struct adminnode *heada = NULL;
struct customernode *headc = NULL;

// Function to create a new admin order menu node
struct adminnode *createadmin(struct adminnode *head, int itemno, char *foodname, float price)
{
    struct adminnode *newnode, *ptr;
    newnode = (struct adminnode *)malloc(sizeof(struct adminnode));
    newnode->data = itemno;
    strcpy(newnode->foodname, foodname);
    newnode->price = price;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }

    return head;
}

// Function to create a new customer order node
struct customernode *createcustomer(struct customernode *head, int itemno, int quantity)
{
    struct customernode *newnode, *ptr;
    newnode = (struct customernode *)malloc(sizeof(struct customernode));
    newnode->data = itemno;
    newnode->quantity = quantity;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }

    return head;
}

// Function to delete an item from the admin order menu
struct adminnode *deleteadmin(struct adminnode *head, int itemno)
{
    struct adminnode *ptr, *prev;
    if (head == NULL)
    {
        printf("\n\nAdmin Order Menu is Empty.\n\n");
        return head;
    }

    if (head->data == itemno)
    {
        ptr = head;
        head = head->next;
        free(ptr);
        printf("\n\nItem Deleted Successfully.\n\n");
        return head;
    }

    prev = NULL;
    ptr = head;
    while (ptr != NULL && ptr->data != itemno)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        printf("\n\nItem Not Found.\n\n");
        return head;
    }

    prev->next = ptr->next;
    free(ptr);
    printf("\n\nItem Deleted Successfully.\n\n");
    return head;
}

// Function to delete an item from the customer order
struct customernode *deletecustomer(struct customernode *head, int itemno)
{
    struct customernode *ptr, *prev;
    if (head == NULL)
    {
        printf("\n\nCustomer Order is Empty.\n\n");
        return head;
    }

    if (head->data == itemno)
    {
        ptr = head;
        head = head->next;
        free(ptr);
        printf("\n\nItem Deleted Successfully.\n\n");
        return head;
    }

    prev = NULL;
    ptr = head;
    while (ptr != NULL && ptr->data != itemno)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        printf("\n\nItem Not Found.\n\n");
        return head;
    }

    prev->next = ptr->next;
    free(ptr);
    printf("\n\nItem Deleted Successfully.\n\n");
    return head;
}

// Function to display the admin order menu
void displayadmin(struct adminnode *head)
{
    struct adminnode *ptr;
    if (head == NULL)
    {
        printf("\n\nAdmin Order Menu is Empty.\n\n");
        return;
    }

    printf("\n\nFood Item Menu\n");
    printf("\nItem No.Food ItemPrice\n");
    printf("--------------------------------------------------\n");

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d%s%.2f\n", ptr->data, ptr->foodname, ptr->price);
        ptr = ptr->next;
    }
}

// Function to display the customer order
void displaycustomer(struct customernode *head)
{
    struct customernode *ptr;
    if (head == NULL)
    {
        printf("\n\nCustomer Order is Empty.\n\n");
        return;
    }

    printf("\n\nCustomer Order\n");
    printf("\nItem No.Quantity\n");
    printf("-----------------------------\n");

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d%d\n", ptr->data, ptr->quantity);
        ptr = ptr->next;
    }
}

// Function to display the bill for the customer order
void displaybill(struct customernode *head)
{
    struct customernode *ptr;
    struct adminnode *adminptr;
    float total = 0.0;
    if (head == NULL)
    {
        printf("\n\nCustomer Order is Empty.\n\n");
        return;
    }

    printf("\n\nBill\n");
    printf("\nItem No.Food ItemPriceQuantityTotal\n");
    printf("----------------------------------------------------------------------------\n");

    ptr = head;
    while (ptr != NULL)
    {
        adminptr = heada;
        while (adminptr != NULL && adminptr->data != ptr->data)
        {
            adminptr = adminptr->next;
        }

        if (adminptr != NULL)
        {
            printf("%d%s%.2f%d%.2f\n", adminptr->data, adminptr->foodname, adminptr->price, ptr->quantity, adminptr->price * ptr->quantity);
            total += adminptr->price * ptr->quantity;
        }

        ptr = ptr->next;
    }

    printf("\n\nTotal Bill Amount: %.2f\n\n", total);
}

// Function to save the admin order menu to a file
void saveAdminMenuToFile(struct adminnode *head)
{
    FILE *file = fopen("admin_menu.txt", "w");
    if (file == NULL)
    {
        printf("\n\nFailed to save Admin Order Menu.\n\n");
        return;
    }

    struct adminnode *ptr = head;
    while (ptr != NULL)
    {
        fprintf(file, "%d %s %.2f\n", ptr->data, ptr->foodname, ptr->price);
        ptr = ptr->next;
    }

    fclose(file);
    printf("\n\nAdmin Order Menu saved successfully.\n\n");
}

// Function to load the admin order menu from a file
struct adminnode *loadAdminMenuFromFile()
{
    FILE *file = fopen("admin_menu.txt", "r");
    if (file == NULL)
    {
        printf("\n\nAdmin Order Menu file not found.\n\n");
        return NULL;
    }

    struct adminnode *head = NULL;
    int itemno;
    char foodname[20];
    float price;

    while (fscanf(file, "%d %s %f", &itemno, foodname, &price) == 3)
    {
        head = createadmin(head, itemno, foodname, price);
    }

    fclose(file);
    return head;
}

int main()
{
    heada = loadAdminMenuFromFile();

    int ch, ch2, itemno, quantity;
    char password[20];

    while (1)
    {
        printf("\n\nEast West University Cafeteria\n\n");
        printf("---------------------------------------------\n");
        printf("1. Admin Order Menu\n");
        printf("2. Customer Order\n");
        printf("3. Exit");
        printf("\n---------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n\nEnter the Admin Password: ");
            scanf("%s", password);

            if (strcmp(password, PASSWORD) == 0)
            {
                while (1)
                {
                    printf("\n\nAdmin Order Menu\n\n");
                    printf("---------------------------------------------\n");
                    printf("1. Add Item\n");
                    printf("2. Delete Item\n");
                    printf("3. View Admin Order Menu\n");
                    printf("4. Save Admin Order Menu\n");
                    printf("5. Go Back to Main Menu\n");
                    printf("---------------------------------------------\n");
                    printf("Enter your choice: ");
                    scanf("%d", &ch2);

                    switch (ch2)
                    {
                    case 1:
                    {
                        int itemno;
                        char foodname[20];
                        float price;
                        printf("\n\nEnter the Item No.: ");
                        scanf("%d", &itemno);
                        printf("Enter the Food Name: ");
                        scanf("%s", foodname);
                        printf("Enter the Price: ");
                        scanf("%f", &price);
                        heada = createadmin(heada, itemno, foodname, price);
                        break;
                    }
                    case 2:
                    {
                        int itemno;
                        printf("\n\nEnter the Item No. to delete: ");
                        scanf("%d", &itemno);
                        heada = deleteadmin(heada, itemno);
                        break;
                    }
                    case 3:
                        displayadmin(heada);
                        break;
                    case 4:
                        saveAdminMenuToFile(heada);
                        break;
                    case 5:
                        printf("\n\nGoing back to Main Menu.\n\n");
                        break;
                    default:
                        printf("\n\nInvalid choice.\n\n");
                    }

                    if (ch2 == 5)
                        break;
                }
            }
            else
            {
                printf("\n\nIncorrect password. Access denied.\n\n");
            }
            break;
        case 2:
            while (1)
            {
                printf("\n\nCustomer Order\n\n");
                printf("---------------------------------------------\n");
                printf("1. Place Order\n");
                printf("2. Delete Item\n");
                printf("3. View Customer Order\n");
                printf("4. View Bill\n");
                printf("5. Go Back to Main Menu\n");
                printf("---------------------------------------------\n");
                printf("Enter your choice: ");
                scanf("%d", &ch2);

                switch (ch2)
                {
                case 1:
                {
                    displayadmin(heada);
                    int order = 1;
                    while (order)
                    {
                        printf("\n\nEnter the Item No. to order (0 to finish ordering): ");
                        scanf("%d", &itemno);

                        if (itemno == 0)
                        {
                            printf("\n\nOrder placed successfully.\n\n");
                            break;
                        }

                        printf("Enter the quantity: ");
                        scanf("%d", &quantity);
                        headc = createcustomer(headc, itemno, quantity);
                    }
                    break;
                }
                case 2:
                {
                    int itemno;
                    printf("\n\nEnter the Item No. to delete: ");
                    scanf("%d", &itemno);
                    headc = deletecustomer(headc, itemno);
                    break;
                }
                case 3:
                    displaycustomer(headc);
                    break;
                case 4:
                    displaybill(headc);
                    break;
                case 5:
                    printf("\n\nGoing back to Main Menu.\n\n");
                    break;
                default:
                    printf("\n\nInvalid choice.\n\n");
                }

                if (ch2 == 5)
                    break;
            }
            break;
        case 3:
            printf("\n\nExiting the program.\n\n");
            return 0;
        default:
            printf("\n\nInvalid choice.\n\n");
        }
    }
}
