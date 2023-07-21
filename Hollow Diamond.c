#include<stdio.h>\n
int main()
{
  int num,i,j;
  scanf("%d",&num);
  for(i=num-1;i>=1;i++)
  {
    for(j=1;j<=i;j++)
    if(num-i==0)
    {
     printf("*");
    }
     printf("\n");
   }
  for(i=1;i<=num;i++)
  {
  for(j=1;j<=i;j++)
  if(num-i==0)
  {
    printf("*");
  }
  printf("\n");
  }
}
