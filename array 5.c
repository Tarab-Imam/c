#include<stdio.h>
void main()
{
    int i,n,num,pos;
    int arr[12];
    printf("Enter no. of elements in array");
    scanf ("%d",&n);
    printf("enter number to be inserted");
    scanf("%d",&num);
    printf("enter the position where it is to inserted");
    scanf("%d",&pos);
    for (i=0;i<n;i++)
    {
    printf("arr[%d]";i);
    scanf("%d",&arr[i]);
    }
    for (i=n-1;i>pos;i--)
    {
        arr[i+1]=arr[i];

    }
    n=n+1;
    arr[pos]=num;
    printf("array after insertion=")
    for (i=1;i<n;i++)
    {
        printf("\n arr[%d]=%d",i,arr[i]);
    }
}