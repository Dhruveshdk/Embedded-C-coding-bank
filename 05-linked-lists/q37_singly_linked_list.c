#include <stdio.h>
#include <stdlib.h>

/* ── Node structure ─────────────────────────────────────────── */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* ── Create a new node ──────────────────────────────────────── */
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

/* ── Insert at beginning ────────────────────────────────────── */
void insertAtBegin(Node **head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

/* ── Insert at end ──────────────────────────────────────────── */
void insertAtEnd(Node **head, int data) {
    Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

/* ── Insert at position (1-indexed) ─────────────────────────── */
void insertAtPosition(Node **head, int data, int pos) {
    if (pos == 1) {
        insertAtBegin(head, data);
        return;
    }

    Node* temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Position %d out of range.\n", pos);
        return;
    }

    Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

/* ── Insert after a given value ─────────────────────────────── */
void insertAfterValue(Node *head, int after, int data) {
    Node* temp = head;

    while (temp != NULL && temp->data != after)
        temp = temp->next;

    if (temp == NULL) {
        printf("Value %d not found.\n", after);
        return;
    }

    Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

/* ── Delete by value ────────────────────────────────────────── */
void deleteValue(Node **head, int key) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node *temp = *head, *prev = NULL;

    if (temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found.\n", key);
        return;
    }

    prev->next = temp->next;
    free(temp);
}

/* ── Display ─────────────────────────────────────────────────── */
void display(Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

/* ── Free entire list ───────────────────────────────────────── */
void freeList(Node **head) {
    Node* temp;
    while (*head != NULL) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

/* ── Main: test everything ──────────────────────────────────── */
int main(void) {
    Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    printf("After insert at end: ");
    display(head);

    insertAtBegin(&head, 5);
    printf("After insert at begin: ");
    display(head);

    insertAtPosition(&head, 15, 3);
    printf("After insert 15 at position 3: ");
    display(head);

    insertAfterValue(head, 20, 25);
    printf("After insert 25 after 20: ");
    display(head);

    deleteValue(&head, 15);
    printf("After deleting 15: ");
    display(head);

    deleteValue(&head, 5);
    printf("After deleting head (5): ");
    display(head);

    freeList(&head);
    printf("After freeList: ");
    display(head);

    return 0;
}