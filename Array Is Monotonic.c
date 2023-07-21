#include<stdio.h>
int inc(int a[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            if(a[i]<a[i+1])
                return 0;
        }
        return 1;
    }
int dec(int a[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
                return 0;
        }
        return 1;
    }

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(inc(a,n) || dec(a,n))
        {
            printf("Monotonic");
        }
        else
        {
            printf("Non-Monotonic");
        }
}
