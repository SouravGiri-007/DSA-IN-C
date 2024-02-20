#include <stdio.h>
int main()
{
    int a[50], size, num, pos, i;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    if (size > a[50])
    {
        printf("Overflow condition");
    }
    else
    {
        printf("Enter data that u want to insert: ");
        scanf("%d", &num);
        printf("Enter position in array: ");
        scanf("%d", &pos);
        if (pos <= 0 || pos > size + 1)
        {
            printf("invalid position");
        }
        else
        {
            for (i = size - 1; i >= pos - 1; i--)
            {
                a[i + 1] = a[i];
            }
            a[pos - 1] = num;
            size++;
            printf("New elements in array are: ");
            for (int i = 0; i < size; i++)
            {
                printf("%d ", a[i]);
            }
        }
    }
}
