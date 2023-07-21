#include<stdio.h>
int sum(int n1,int n2)
{
    n1=n1*2;
    n2=n2*2;
    printf("%d n1\n",n1);
    printf("%d n2\n",n2);
}
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    sum(a,b);
    printf("%d %d",a,b);
}
