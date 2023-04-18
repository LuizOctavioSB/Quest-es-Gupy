#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[100];
  int i, j;
  char temp;

  printf("Insira uma string: ");
  fgets(str, 100, stdin);

  j = strlen(str) - 1;

  for (i = 0; i < j; i++, j--)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }

  printf("String invertida: %s", str);

  return 0;
}
