#include<stdio.h>
void bubble_sort(int arr[],int n)
{
int i,j,temp;
for (i=0;i<n-1;i++)
{
    printf ("--pass\n",i+1);
    for (j=0;j<n-i-1;j++)
    {
        printf("\n--comparison",j+1);
        printf("%d comparison %d",j,j+1);
        if (arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        
    }
}
 
}
void main()
{
int arr[100],n,i;
printf("enter no. of elements");
scanf("%d",&n);
for (i=0;i<n;i++)
{
    printf("enter elements of array");
    scanf("%d",&arr[i]);
}
bubble_sort(arr,n);
for (i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
}
