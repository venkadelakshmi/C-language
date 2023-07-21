#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    printf("The no. of possibilities =%d",sum);
    return 0;
}
