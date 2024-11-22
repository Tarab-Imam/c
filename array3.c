#include<stdio.h>
void main()
{
    int A[]={9,6,5,2,4};
    int temp,i,j;
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
        {
            if (A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
            printf("%d",A);
        }
    }
    
}
