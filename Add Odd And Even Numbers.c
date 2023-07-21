#include<stdio.h>
int main()
{
 int i,n,odd=0,even=0,sub;
 printf("enter n : ");
 scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
 if(arr[i]%2==0)
 {
    even=even+arr[i];
 }
 else
 {
     odd=odd+arr[i];
 }
}
 printf("%d\n",even);
 printf("%d",odd);
 sub=even-odd;
 printf("%d",sub);
}
