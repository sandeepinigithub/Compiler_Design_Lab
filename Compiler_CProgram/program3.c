#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

int main() {
  char str[10];
  int len, a;
  printf("Input a string :");
  gets(str);
  len = strlen(str);
  a = 0;
  while (a < len) {
    if (isdigit(str[a])) {
    	a++;	
	} 	
	else {
        printf(" It is not a Constant");
        break;
    }    
  }
  if (a == len) {
    printf(" It is a Constant");
  }
  return 0;
}
