#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n1,n2,num,den;
   scanf("%d",&n1);
   scanf("%d",&n2);
   if(n1>n2)
   {
   num=n1;
   den=n2;
   }
   else
   {
    num=n2;
    den=n1;
   }
  int rem=num%den;
  while(rem!=0)
  {
    num=den;
    den=rem;
    rem=num%den;
  }
  printf("%d",den);
}
