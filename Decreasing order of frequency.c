#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello world";
    int i,j,l=strlen(str),count=1;
    for(i = 0; i < strlen(str); i++)
    {
     for(j = i+1; j < strlen(str); j++)
     {
      if(str[i] == str[j])
      {
        count++;

      }
     }
    }
    for(i = 0;i<l;i++) {
            printf("%c-%d\n", str[i],count);
    }
}

