#include<stdio.h>
int main()
{
    int Num,i,j;
    scanf("%d",&Num);
    int arr[Num];
    for(i=0;i<Num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",&arr[i]);
    {
    for(i=0;i<Num-1;i++)
    {
        for(j=0;j<(Num-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<Num;i++)
    {
        printf("%d",&arr[i]);
    }
    }
}
