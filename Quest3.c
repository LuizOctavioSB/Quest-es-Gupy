#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, a = 0, b = 1, c = 0;
  
  printf("Informe um numero: ");
  scanf("%d", &n);

  while (c < n)
  {
    c = a + b;
    a = b;
    b = c;
  }

  if (c == n)
  {
    printf("%d pertence a sequencia de Fibonacci\n", n);
  }
  else
  {
    printf("%d nao pertence a sequencia de Fibonacci\n", n);
  }

  return 0;
}