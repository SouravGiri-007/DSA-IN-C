#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node * next;

};

void LinkedListTraversal(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("\nElement is: %d",ptr->data);
        ptr = ptr->next;
    }
}
int isEmpty(struct Node* top)
{
    if(top==NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(struct Node* top)
{
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));

    if(n == NULL)
    {
        return 1;
    }
    else{
            return 0;
    }
}
struct Node*  push(struct Node *top, int x)
{
    if(isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *n = (struct Node*)malloc(sizeof(struct Node*));
        n->data= x;
        n->next = top;
        top = n;
        return top;
    }

}

int pop(struct Node** top)
{
    if(isEmpty(*top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int x= n->data;
        free(n);
        return x;
    }
}
int main()
{
    struct Node* top = NULL;
    top =  push(top,11);
    top =  push(top,22);
    top =  push(top,33);
    top =  push(top,44);
    top =  push(top,55);

    LinkedListTraversal(top);
    int element = pop(&top);
    printf("\npopped element is %d", element);
    LinkedListTraversal(top);
}