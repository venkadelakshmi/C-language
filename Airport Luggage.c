#include<stdio.h>
int main()
{
    int Num=4,i,T,amt=0;
    //scanf("%d",&Num);
    int weight[Num];
    for(i=1;i<Num;i++)
    {
        scanf("%d",&weight[i]);
    }
    scanf("%d",&T);
    for(i=1;i<Num;i++)
    {
        amt++;
        if(weight[i]>T)
        {
            amt++;
        }
    }
    printf("%d",amt);

}
