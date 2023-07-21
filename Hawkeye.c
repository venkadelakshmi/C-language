#include<stdio.h>
int main()
{
    int n,i,j,pow,x,y;
    int a,b;
    scanf("%d",&n);
    scanf("%d%d%d",&i,&j,&pow);
    for(a=0;a<n;a++)
    {
        for(b=0;b<n;b ++)
        {
            x=pow-abs(i-a);
            y=pow-abs(j-b);
            if(x<=y&&x>=0)
            printf("%d ",x);
            else if(x>y&&y>=0)
            printf("%d ",y);
            else
            printf("0 ");
        }
        printf("\n");
    }
    return 0;

}
