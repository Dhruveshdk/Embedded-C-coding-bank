// Implement Singly LL - (Create, Insert, Delete, Display)
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

/* ── Helper: create a new node ──────────────────────────────── */
node *create_node(int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

/* ── Insert at the beginning ────────────────────────────────── */ 
// void *insert_beg(int data, node *head){
//     node *newNode = create_node(data);
//     newNode->next = head;
//     head = newNode;  // // ❌ this only changes the LOCAL copy of head
//                        // original head in main() is unchanged
// }

// we use double ptr
/* ── Insert at the beginning ────────────────────────────────── */ 
void insert_beg(int data, node **head){
    node *newNode = create_node(data);
    newNode->next = *head;
    *head = newNode;
}

/* ── Insert at the end ──────────────────────────────────────── */
void insert_end(int data, node **head){
    node *newNode = create_node(data);

    if (*head == NULL) {      /* list is empty */
        *head = newNode;
        return;
    }
    node *temp = *head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;
}


/* ── Insert after a given value ─────────────────────────────── */
void insert_after_Value(int data, int after, node *head){
    node *newNode = create_node(data);
    node *temp = head;
    while(temp->data!=after){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

/* ── Delete by value ────────────────────────────────────────── */
void delete_node(node **head, int data)
{
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
 
    node *temp = *head;
 
    /* If head itself is the node to delete */
    if (temp->data == data) {
        *head = temp->next;
        free(temp);
        printf("Deleted: %d\n", data);
        return;
    }
 
    /* Find the node just before the one to delete */
    node *prev = NULL;
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }
 
    if (temp == NULL) {
        printf("Value %d not found in list.\n", data);
        return;
    }
 
    prev->next = temp->next;  /* bypass the node */
    free(temp);
    printf("Deleted: %d\n", data);
}

/* ── Display the list ───────────────────────────────────────── */
void display(node *head)
{
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
 
    printf("List: ");
    node *temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");
}

/* ── Main: test all operations ──────────────────────────────── */
int main(void)
{
    node *head = NULL;
 
    printf("=== Singly Linked List ===\n\n");
 
    /* Insert at end */
    insert_at_end(&head, 10);
    insert_at_end(&head, 20);
    insert_at_end(&head, 30);
    insert_at_end(&head, 40);
    printf("After insert at end (10,20,30,40):\n");
    display(head);
 
    /* Insert at beginning */
    insert_at_begin(&head, 5);
    printf("\nAfter insert at beginning (5):\n");
    display(head);
 
    /* Insert after a value */
    insert_after(head, 20, 25);
    printf("\nAfter insert 25 after 20:\n");
    display(head);
 
    /* Delete from middle */
    delete_node(&head, 25);
    printf("\nAfter deleting 25:\n");
    display(head);
 
    /* Delete head */
    delete_node(&head, 5);
    printf("\nAfter deleting head (5):\n");
    display(head);
 
    /* Delete tail */
    delete_node(&head, 40);
    printf("\nAfter deleting tail (40):\n");
    display(head);
 
    /* Delete non-existent value */
    printf("\nTrying to delete 99:\n");
    delete_node(&head, 99);
 
    /* Final list */
    printf("\nFinal list:\n");
    display(head);
 
    return 0;
}