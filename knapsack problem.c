#include<stdio.h>

int max(int a,int b){return(a>b)?a:b;}
int knapsack(int w,int wt[],int val[],int n);  {
    if(n==0||w==0)
        return 0;
    if(wt[n-1]>w)
        return knapsack(w,wt,val,n-1);
    else
        return max;
  }
int main()
{
    int profit[]={1,2,3};
    int weight[]={4,5,1};
    int w=4;
    int n=sizeof(profit)/sizeof(profit[0]);
    printf("%d",knapsack(w,weight,profit,n));
    return 0;
}
