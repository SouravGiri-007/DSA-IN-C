#include<stdio.h>
int minimum(int num1, int num2){
        return(num1 > num2) ? num2 : num1;
}
int maximum(int num1, int num2){
        return(num1 < num2) ? num2 : num1;
}
int getmin(int arr[], int n)
    {
        int res = arr[0];
        for(int i = 1;i<n;i++){
        int res1 = minimum(res,arr[i]);
        return res1;
        }
    }
    int getmax(int arr[], int n)
    {
        int res = arr[0];
        for(int i = 1;i<n;i++){
        int res1 = maximum(res,arr[i]);
        return res1;
        }
    }
int main()
{
    int arr[50],size;
    printf("Enter Size of array: ");
    scanf("%d",&size);

    printf("Enter array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //int min,max;
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = getmin(arr, n);
    int max = getmax(arr, n);
    printf("\nSmall element in this array is %d",min);
    printf("\nBig element in this array is %d",max);

}
