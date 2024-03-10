#include <stdio.h>
int minimum(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}
int maximum(int num1, int num2)
{
    return (num1 < num2) ? num2 : num1;
}
int getmin(int arr[], int n)
{
    int res1,i;
    res1 = arr[0];
    for (i = 1; i < n; i++)
    {
        res1 = minimum(res1, arr[i]);
    }
    return res1;
}
int getmax(int arr[], int n)
{
    int res,i;
    res = arr[0];
    for (i = 1; i < n; i++)
    {
        res = maximum(res, arr[i]);
    }
    return res;
}
int main()
{
    int arr[50], size,i;
    printf("Enter Size of array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // int min,max;
    int n = size;
    int min = getmin(arr, n);
    int max = getmax(arr, n);
    printf("\nSmall element in this array is %d", min);
    printf("\nBig element in this array is %d", max);
}