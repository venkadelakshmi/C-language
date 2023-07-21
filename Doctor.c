#include<stdio.h>
int main()
{
   int n,i,sum=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
           if(a[i]<=17)
           {
               sum=sum+200;
           }
           else if(a[i]>17 && a[i]<40)
           {
               sum=sum+400;
           }
           else
           {
               sum=sum+300;
           }

   }
   printf("Total amount of a day :%d INR",sum);
   return 0;
}
