#include<stdio.h>
#include<stdlib.h>
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

 // case1: Deleting the first element from the linked list

 struct Node * deleteFirst(struct Node * head)
 {
        struct Node * ptr = head;
        head = head->next;
        free(ptr);
        return head;
 }
 
 // case2: Deleting the given index element from the linked list
 struct Node* deleteAtIndex(struct Node *head, int index){
        struct Node* p = head;
        struct Node* q = head->next;
        for(int i=0;i<index-1;i++)
        {
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        free(q);
        return head;

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

         
    //Link first and second nodes
    head->data = 7;
    head->next = second;
    
    //Link second and third nodes
    second->data = 99;
    second->next = third;

    //Link THIRD and tfourth nodes
    third->data = 88;
    third->next = fourth;

    //Terminate the list here
    fourth->data=69;
    fourth->next=NULL;

    printf("Linked List before deletion\n");
    linkedlistTraversal(head);

    head = deleteFirst(head); // fordeleting first element of the linked list
    head= deleteAtIndex(head, 2);
    //head = deleteFirst(head);

    printf("Linked List after deletion\n");
    linkedlistTraversal(head);
}