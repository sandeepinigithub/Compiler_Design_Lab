#include<conio.h>
#include<ctype.h>
#include<stdio.h>

int main()
{
  int i, j, x, x1, k, k1, z1, z;
  char a[20], b[20][20], c[20], p[10] = "*+$";
  char fp[10][10] = {
    "id1",
    "id2",
    "id3"
  }, d[10];
  printf("ENTER INPUT STRING: ");
  gets(a);
  i = 0;
  j = 0;
  x = 0;
  x1 = 0;
  printf("$ ");
  while (a[i] != '\0') {
    j = 0;
    while (1) {
      if (a[i] != '+' && a[i] != '*' && a[i] != '$') {
        b[x][j] = a[i];
        i++;
        j++;
      } else {
        c[x] = a[i];
        break;
      }
    }
    b[x][j] = '\0';
    for (k = 0; k < 3; k++)
      if (!strcmp(b[x], fp[k]))
        for (k1 = 0; k1 < 3; k1++)
          if (c[x] == p[k1]) printf("< %s > %c ", b[x], c[x]);
    x++;
    i++;
  }
  c[x] = '\0';
  i = 0;
  printf("\n$ <");
  while (c[i] != '\0') {
    for (k = 0; k < 3; k++)
      if (c[i] == p[k]) z = k;
    i++;
    printf(" %c", c[i - 1]);
    for (k = 0; k < 3; k++)
      if (c[i] == p[k]) z1 = k;
    i++;
    if (z > z1) printf(" <");
    else printf(" >");
    printf(" %c", c[i - 1]);
    i++;
  }
  printf(" > $");
  for (i = 0; i < 3; i++) {
    if (c[i] == p[0]) c[i] = ' ';
  }
  i = 0;
  printf("\n$ <");
  for (k = 0; k < 3; k++)
    if (c[i] == p[k]) z = k;
  printf(" %c", c[i]);
  i++;
  i++;
  for (k = 0; k < 3; k++)
    if (c[i] == p[k]) z1 = k;
  if (z > z1) printf(" <");
  else
    printf(" >");
  printf(" %c", c[i]);
  return 0;
}
