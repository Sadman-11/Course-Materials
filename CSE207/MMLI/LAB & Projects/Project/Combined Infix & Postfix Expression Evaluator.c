#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// ---------------- Stack Node ----------------
typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* push(Node* top, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = top;
    return newNode;
}

Node* pop(Node** top, int* data) {
    if (!*top) {
        return NULL;
    }
    Node* temp = *top;
    *data = temp->data;
    *top = temp->next;
    free(temp);
    return *top;
}

int peek(Node* top) {
    return top ? top->data : -1;
}

int isEmpty(Node* top) {
    return top == NULL;
}

// ---------------- Queue Node ----------------
typedef struct QNode {
    int data;
    struct QNode* next;
} QNode;

typedef struct Queue {
    QNode* front;
    QNode* rear;
} Queue;

void initQueue(Queue* q) {
    q->front = q->rear = NULL;
}

void enqueue(Queue* q, int data) {
    QNode* newNode = (QNode*)malloc(sizeof(QNode));
    newNode->data = data;
    newNode->next = NULL;

    if (q->rear == NULL) {
        q->front = q->rear = newNode;
        return;
    }

    q->rear->next = newNode;
    q->rear = newNode;
}

int dequeue(Queue* q, int* error) {
    if (q->front == NULL) {
        *error = 1;
        return 0;
    }

    QNode* temp = q->front;
    int val = temp->data;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
    return val;
}

// ---------------- Operator Helpers ----------------
int precedence(char op) {
    switch (op) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
        default: return 0;
    }
}

int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

int isVariable(char c) {
    return isalpha(c);
}

// ---------------- Validate Infix ----------------
int validateInfix(char expr[]) {
    int balance = 0;

    for (int i = 0; i < strlen(expr); i++) {
        char c = expr[i];

        if (!isdigit(c) && !isOperator(c) && c != '(' && c != ')' && !isVariable(c)) {
            printf("Error: Invalid character '%c'\n", c);
            return 0;
        }

        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }

        if (balance < 0) {
            printf("Error: Mismatched parentheses\n");
            return 0;
        }
    }

    if (balance != 0) {
        printf("Error: Mismatched parentheses\n");
        return 0;
    }

    return 1;
}

// ---------------- Infix to Postfix ----------------
void infixToPostfix(char infix[], char postfix[]) {
    Node* stack = NULL;
    int k = 0;

    for (int i = 0; i < strlen(infix); i++) {
        char c = infix[i];

        if (isdigit(c) || isVariable(c)) {
            postfix[k++] = c;
        } else if (c == '(') {
            stack = push(stack, '(');
        } else if (c == ')') {
            int val;
            while (stack && peek(stack) != '(') {
                stack = pop(&stack, &val);
                postfix[k++] = val;
            }
            stack = pop(&stack, &val); // remove '('
        } else if (isOperator(c)) {
            int val;
            while (stack && isOperator(peek(stack)) && precedence(peek(stack)) >= precedence(c)) {
                stack = pop(&stack, &val);
                postfix[k++] = val;
            }
            stack = push(stack, c);
        }
    }

    int val;
    while (stack) {
        stack = pop(&stack, &val);
        postfix[k++] = val;
    }

    postfix[k] = '\0';
}

// ---------------- Infix to Prefix ----------------
void infixToPrefix(char infix[], char prefix[]) {
    char rev[100], temp[100];
    int len = strlen(infix);
    int k = 0;

    for (int i = len - 1; i >= 0; i--) {
        if (infix[i] == '(') {
            rev[k++] = ')';
        } else if (infix[i] == ')') {
            rev[k++] = '(';
        } else {
            rev[k++] = infix[i];
        }
    }

    rev[k] = '\0';
    infixToPostfix(rev, temp);

    len = strlen(temp);
    for (int i = 0; i < len; i++) {
        prefix[i] = temp[len - i - 1];
    }

    prefix[len] = '\0';
}

// ---------------- Postfix Evaluation ----------------
int evalPostfix(char expr[], int* error) {
    Node* stack = NULL;

    for (int i = 0; i < strlen(expr); i++) {
        if (isdigit(expr[i])) {
            stack = push(stack, expr[i] - '0');
        } else if (isOperator(expr[i])) {
            int b, a, res = 0;

            if (!stack) { *error = 1; return 0; }
            stack = pop(&stack, &b);
            if (!stack) { *error = 1; return 0; }
            stack = pop(&stack, &a);

            switch (expr[i]) {
                case '+': res = a + b; break;
                case '-': res = a - b; break;
                case '*': res = a * b; break;
                case '/':
                    if (b == 0) { *error = 2; return 0; }
                    res = a / b;
                    break;
                case '^':
                    res = 1;
                    for (int j = 0; j < b; j++) res *= a;
                    break;
                default: *error = 1; return 0;
            }

            stack = push(stack, res);
        }
    }

    int result;
    stack = pop(&stack, &result);
    if (stack) { *error = 1; return 0; }
    return result;
}

// ---------------- Prefix Evaluation ----------------
int evalPrefix(char expr[], int* error) {
    Queue q;
    initQueue(&q);
    int len = strlen(expr);

    for (int i = len - 1; i >= 0; i--) {
        if (isdigit(expr[i])) {
            enqueue(&q, expr[i] - '0');
        } else if (isOperator(expr[i])) {
            int a = dequeue(&q, error);
            int b = dequeue(&q, error);

            if (*error) return 0;
            int res = 0;

            switch (expr[i]) {
                case '+': res = a + b; break;
                case '-': res = a - b; break;
                case '*': res = a * b; break;
                case '/':
                    if (b == 0) { *error = 2; return 0; }
                    res = a / b;
                    break;
                case '^':
                    res = 1;
                    for (int j = 0; j < b; j++) res *= a;
                    break;
            }

            enqueue(&q, res);
        }
    }

    return dequeue(&q, error);
}

// ---------------- Comma-separated Postfix Evaluation ----------------
int evalPostfixComma(char expr[], int* error) {
    Node* stack = NULL;
    char copy[500];
    strcpy(copy, expr);
    char* token = strtok(copy, ",");

    while (token) {
        if (isVariable(token[0])) { *error = 2; return 0; }

        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            stack = push(stack, atoi(token));
        } else if (strlen(token) == 1 && isOperator(token[0])) {
            int a, b, res = 0;

            if (!stack) { *error = 1; return 0; }
            stack = pop(&stack, &b);
            if (!stack) { *error = 1; return 0; }
            stack = pop(&stack, &a);

            switch (token[0]) {
                case '+': res = a + b; break;
                case '-': res = a - b; break;
                case '*': res = a * b; break;
                case '/':
                    if (b == 0) { *error = 3; return 0; }
                    res = a / b;
                    break;
                case '^':
                    res = 1;
                    for (int j = 0; j < b; j++) res *= a;
                    break;
            }

            stack = push(stack, res);
        } else {
            *error = 1;
            return 0;
        }

        token = strtok(NULL, ",");
    }

    int result;
    stack = pop(&stack, &result);
    if (stack) { *error = 1; return 0; }
    return result;
}

// ---------------- Check for variables ----------------
int containsVariable(char expr[]) {
    for (int i = 0; i < strlen(expr); i++) {
        if (isVariable(expr[i])) return 1;
    }
    return 0;
}

// ---------------- Main Program ----------------
int main() {
    char expr[500];
    char choice = 'y';
    printf("Combined Infix & Comma-separated Postfix Calculator\n");

    while (choice == 'y' || choice == 'Y') {
        int success = 0;

        while (!success) {
            printf("\nEnter expression (infix OR comma-separated postfix):\n");
            if (scanf("%499s", expr) != 1) {
                printf("Input error.\n");
                return 0;
            }

            int isComma = 0;
            for (int i = 0; i < strlen(expr); i++) {
                if (expr[i] == ',') {
                    isComma = 1;
                    break;
                }
            }

            if (isComma) {
                int error = 0;
                int res = evalPostfixComma(expr, &error);

                if (error == 1) {
                    printf("Error: Invalid postfix. Try again!\n");
                    continue;
                } else if (error == 2) {
                    printf("Expression contains variable(s) -> cannot evaluate.\n");
                    continue;
                } else if (error == 3) {
                    printf("Error: Division by zero. Try again!\n");
                    continue;
                }

                printf("Postfix Evaluation Result: %d\n", res);
            } else {
                if (!validateInfix(expr)) {
                    printf("Invalid infix. Try again!\n");
                    continue;
                }

                char postfix[100], prefix[100];
                infixToPostfix(expr, postfix);
                infixToPrefix(expr, prefix);

                printf("Postfix: %s\n", postfix);
                printf("Prefix: %s\n", prefix);

                if (containsVariable(expr)) {
                    printf("Expression contains variable(s) -> skipping evaluation.\n");
                } else {
                    int error = 0;
                    int postRes = evalPostfix(postfix, &error);
                    if (error) {
                        printf("Error evaluating postfix.\n");
                        continue;
                    }
                    printf("Postfix Evaluation: %d\n", postRes);

                    error = 0;
                    int preRes = evalPrefix(prefix, &error);
                    if (error) {
                        printf("Error evaluating prefix.\n");
                        continue;
                    }
                    printf("Prefix Evaluation: %d\n", preRes);
                }
            }

            success = 1; // only now we ask Do another
        }

        while (1) {
            printf("\nDo you want to perform another operation? (y/n): ");
            if (scanf(" %c", &choice) != 1) {
                printf("Input error.\n");
                return 0;
            }
            while (getchar() != '\n'); // clear buffer

            if (choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N') {
                break;
            } else {
                printf("Invalid choice! Please enter 'y' or 'n'.\n");
            }
        }
    }

    printf("Exiting program. Goodbye!\n");
    return 0;
}
