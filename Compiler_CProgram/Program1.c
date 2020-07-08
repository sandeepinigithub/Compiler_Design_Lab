#include <stdio.h>

int main() {
 int i = 0;
 char msg[100], ch;
 printf("Enter a message: ");
 while (ch = getchar()) {
  if (ch == '\n') {
   break;
  }
  msg[i++] = ch;
 }
 i = 0;
 while (msg[i] != NULL) {
  putchar(msg[i++]);
 }
 getch();
 return 0;
}
