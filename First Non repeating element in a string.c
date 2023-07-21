#include <stdio.h>
#include <string.h>
int main() {
 char str[100] = "Anabell";
 int len  = strlen(str);
 int flag;
 for(int i = 0; i < len; i++) {
     flag = 0;
     for(int j = 0; j < len; j++) {
        if((str[i] == str[j]) && (i != j)) {
             flag = 1;
             break;
        }
     }
      if (flag == 0) {
          printf("Non-repeating character : %c",str[i]);
          break;
      }
 }
}
