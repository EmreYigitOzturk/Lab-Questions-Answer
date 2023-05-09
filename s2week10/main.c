/*#include <stdio.h>
#include <stdlib.h>

struct node {
    int number;
    struct node *next;
};

int main() {
    struct node *head, *tail;
    head = NULL;
    int n;

    while (1) {
        printf("Enter a number (-1 to quit): ");
        scanf("%d", &n);

        if (n == -1) {
            break;
        }

        struct node *new_node = (struct node*)malloc(sizeof(struct node));
        new_node->number = n;
        new_node->next = NULL;

        if (n % 2 != 0) {
            if (head == NULL) {
                head = new_node;
                tail = new_node;
            } else {
                new_node->next = head;
                head = new_node;
            }
        } else {
            if (head == NULL) {
                head = new_node;
                tail = new_node;
            } else {
                tail->next = new_node;
                tail = new_node;
            }
        }
    }


    printf("List: ");
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->number);
        current = current->next;
    }
    printf("\n");


    current = head;
    while (current != NULL) {
        struct node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}*/

//2.soru

/*#include <stdio.h>
#include <stdlib.h>

struct node {
    int number;
    struct node *next;
};

struct node *cutlastaddhead(struct node *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct node *curr = head;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }
    struct node *last = curr->next;
    curr->next = NULL;
    last->next = head;
    return last;
}



int main() {
    int n;
    struct node *head = NULL;
    struct node *curr = NULL;

    while (1) {
        printf("Enter a number (-1 to quit): ");
        scanf("%d", &n);

        if (n == -1) {
            break;
        }

        struct node *new_node = (struct node*) malloc(sizeof(struct node));
        new_node->number = n;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
            curr = head;
        } else {
            curr->next = new_node;
            curr = curr->next;
        }
    }

    head = cutlastaddhead(head);

    printf("New list: ");
    curr = head;
    while (curr != NULL) {
        printf("%d ", curr->number);
        curr = curr->next;
    }
    printf("\n");

    return 0;
}*/


//3.soru

/*#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void printList(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void deleteMiddleNode(struct node *head) {
    struct node *slow_ptr = head;
    struct node *fast_ptr = head;
    struct node *prev_node = NULL;

    if (head == NULL || head->next == NULL) {
        printf("List is empty or has only one element, middle node cannot be deleted!\n");
        return;
    }

    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        fast_ptr = fast_ptr->next->next;
        prev_node = slow_ptr;
        slow_ptr = slow_ptr->next;
    }

    prev_node->next = slow_ptr->next;
    free(slow_ptr);
}

int main() {
    int n;
    struct node *head = NULL;
    struct node *temp = NULL;

    while (1) {
        printf("Enter a number (-1 to quit): ");
        scanf("%d", &n);

        if (n == -1) {
            break;
        }

        struct node *new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = n;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
            temp = head;
        } else {
            temp->next = new_node;
            temp = temp->next;
        }
    }

    printf("Original list: ");
    printList(head);

    deleteMiddleNode(head);

    printf("List after deleting middle node: ");
    printList(head);

    return 0;
}*/

//4.soru

/*#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* changeFirstAndLast(struct node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct node* last = head;
    while (last->next != NULL) {
        last = last->next;
    }

    int temp = head->data;
    head->data = last->data;
    last->data = temp;

    return head;
}

int main() {
    struct node* head = NULL;
    struct node* temp;
    int n;

    printf("Enter numbers (end with -1):\n");
    scanf("%d", &n);

    while (n != -1) {
        if (head == NULL) {
            head = (struct node*)malloc(sizeof(struct node));
            head->data = n;
            head->next = NULL;
            temp = head;
        } else {
            temp->next = (struct node*)malloc(sizeof(struct node));
            temp = temp->next;
            temp->data = n;
            temp->next = NULL;
        }

        scanf("%d", &n);
    }

    printf("List before swapping: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    head = changeFirstAndLast(head);

    printf("\nList after swapping: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/

//5.soru

/*#include <stdio.h>
#include <stdlib.h>

struct node {
    int number;
    struct node *next;
};

struct node* cutheadaddlast(struct node *head);

int main() {
    int n;
    struct node *head = NULL;
    struct node *temp = NULL;

    while (1) {
        printf("Enter a number (-1 to quit): ");
        scanf("%d", &n);

        if (n == -1) {
            break;
        }

        if (head == NULL) {
            head = (struct node*)malloc(sizeof(struct node));
            head->number = n;
            head->next = NULL;
            temp = head;
        } else {
            temp->next = (struct node*)malloc(sizeof(struct node));
            temp = temp->next;
            temp->number = n;
            temp->next = NULL;
        }
    }

    head = cutheadaddlast(head);

    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->number);
        temp = temp->next;
    }

    return 0;
}

struct node* cutheadaddlast(struct node *head) {
    struct node *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = head;
    head = head->next;
    temp->next->next = NULL;

    return head;
}*/

//6.soru

#include <stdio.h>
#include <stdlib.h>

struct node {
    char name[20];
    int age;
    struct node* next;
};

struct node* deleteNode(struct node* head, int age) {
    struct node* prev = head;
    struct node* current = head;


    if (current != NULL && current->age == age) {
        head = current->next;
        free(current);
        return head;
    }


    int i = 0;
    while (current != NULL) {
        if (i == 1 && current->age == age) {
            prev->next = current->next;
            free(current);
            break;
        }
        prev = current;
        current = current->next;
        i++;
    }

    return head;
}

int main() {
    int age, i = 0;
    struct node* head = NULL;
    struct node* current = NULL;


    printf("Enter age values (-1 to quit):\n");
    while (1) {
        printf("Age %d: ", i+1);
        scanf("%d", &age);

        if (age == -1) {
            break;
        }

        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        newNode->age = age;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }

        i++;
    }


    current = head;
    printf("List:\n");
    while (current != NULL) {
        printf("%d ", current->age);
        current = current->next;
    }
    printf("\n");


    printf("Enter the age to be deleted: ");
    head = deleteNode(head, 2);


    current = head;
    printf("List after deletion:\n");
    while (current != NULL) {
        printf("%d ", current->age);
        current = current->next;
    }
    printf("\n");

    return 0;
}
