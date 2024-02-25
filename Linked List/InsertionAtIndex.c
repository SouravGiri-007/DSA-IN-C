#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("eLEMENTS: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next=p->next;
    p->next=ptr;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 11;
    head->next = second;

    // Link second and third nodes
    second->data = 22;
    second->next = third;

    // Terminate the list here
    third->data = 33;
    third->next = fourth;

    fourth->data = 44;
    fourth->next = NULL;

    linkedlistTraversal(head);
    
    insertAtIndex(head,90,1);
    printf("After Insertion Array: \n");
    linkedlistTraversal(head);  
}