#include<stdio.h>
#include<stdlib.h>
    int top = -1;
void push(int max, int *a)
    {
        int data;
        if(top == max-1)
        {
            printf("Stack Overflow\n");
        }
        else
        {
            printf("Enter the data: ");
            scanf("%d",&data);
            top++;
            a[top]=data;
        }

    }
void pop(int *a)
{
    int data;
    if(top==-1)
    {
        printf("Empty stack\n");
    }
    else
    {
        data=a[top];
        top--;
        printf("The deleted data is %d\n", data);
    }
}
void display(int *a,int max)
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("\nstack is: ");
        if(top>=0)
        {
            for (int  i = 0; i <=top; i++)
            {
                printf("%d\n",a[i]);
            }
            
        }
    }
}


int main()
{
    char ch= 'y';
    int n;
    int max;

    printf("Enter size of a struct: ");
    scanf("%d",&max);
    int a[max];
    printf("Stack has been created successfully\n");
    while(ch=='Y'||ch =='y')
    {
    printf("1:Insert an element\n 2:Delete and print the deleted element\n,3:Display\n" );
    scanf("%d",&n);

    switch(n)
    {
        case 1: push(max, &a);
                break;
        case 2: pop(&a);
                break;
        case 3: display(&a, max);
                break;
        default:printf("Wrong choice!!\n");
    }
    printf("\nDo you want to continue?\n TYPE 'Y for yes and 'n'for no\n");
    scanf(" %c",&ch);
    }   

}

