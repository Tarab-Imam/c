#include<stdio.h>
void main ()
{
    int A[]={2,3,5,6,9};
    int mid,beg,end,item;
    printf("enter the number");
    scanf("%d",&item);

    mid=(beg+end)/2;
    if(A[mid]>item)
    end=mid-1;
    else
    beg=mid+1;
}