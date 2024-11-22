#include<stdio.h>
void main ()
{
    int A[]={3,5,9,6,2};
    int i,item;
    int pos;
    int found;
    printf("Enter an element to search");
    scanf("%d",&item);
    for (i=0;i<5;i++)
    {
        if (A[i]==item)
        {
            pos=i;
            found=1;break;
        }
    }
    if (found==1)
    printf("element found at index %d",pos);
    else
    printf("element not found");
    printf("%d",pos);
    }