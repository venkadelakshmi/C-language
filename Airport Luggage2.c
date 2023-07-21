#include<stdio.h>
int main(){
int n=4,arr[n],i,T,count=0;
//scanf("%d",&n);
for(i=1;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the threshold Value: ");
scanf("%d",&T);
for (i=1;i<n;i++)
{
if(arr[i]<=T)
{
    count=count+1;
}
else
{
        count=count+2;
}
}
printf("%d",count);
return 0;
}
