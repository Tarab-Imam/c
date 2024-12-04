#include<stdio.h>
void bubble_sort(int arr6[],int n)
{
int i,j,temp;
for (i=0;i<n-1;i++)
{
    printf ("--pass\n",i+1);
    for (j=0;j<n-i-1;j++)
    {
        printf("\n--comparison",j+1);
        printf("%d comparison %d",j,j+1);
        if (arr6[j]>arr6[j+1])
        {
            temp=arr6[j];
            arr6[j]=arr6[j+1];
            arr6[j+1]=temp;
        }
        
    }
}
 
}
void main()
{
int arr6[100],n,i;
printf("enter no. of elements");
scanf("%d",&n);
for (i=0;i<n;i++)
{
    printf("enter elements of array");
    scanf("%d",&arr6[i]);
}
bubble_sort(arr6,n);
for (i=0;i<n;i++)
{
    printf("%d",arr6[i]);
}
}
