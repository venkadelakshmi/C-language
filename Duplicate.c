#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements :");
    for(i=0;i<n;i++)
        {
         for(j=i+1;j<n;j++)
          {
            if(arr[i]==arr[j])
                printf("%d\n", arr[j]);
          }
        }
    return 0;
}
