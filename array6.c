#include<stdio.h>
void main()
{
    int i,n,arr[5];
    int flag=0;
    printf("enter 5 values for array");
    for (i=0;i<=4,i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",n);
    for (i=0;i<=4;i++)
    {
        if(n=arr[i])
        {
            flag+=1;
        }
    }
    if (flag=1)
    {
        printf("element %d found",arr[i]);
    }
    if (flag=0)
    {
        printf("element %d not found",n);
    }

}