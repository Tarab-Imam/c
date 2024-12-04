#include<stdio.h>
void main()
{
    int i,n;
    int ar3[12];
    printf("enter no. of elements");
    scanf("%d",&n);
    if (n>=12)
    {
        printf("no. of elements is greater than or equal to 12");
        
    }
    else
    {
        for (i=0;i<n;i++)
        {
        printf("ar3[%d]\n",i);
        scanf("%d",&ar3[i]);
        }
        for (i=0;i<n;i++)
        {
        printf("values of elements of array=%d\t",ar3[i]);
        }
    }
}