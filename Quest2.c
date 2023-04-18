#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, fib1 = 0, fib2 = 1, fib3, pertence = 0;

  printf("Digite um número: ");
  scanf("%d", &num);

  while (fib2 <= num)
  {
    if (fib2 == num)
    {
      pertence = 1;
      break;
    }
    fib3 = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib3;
  }

  if (pertence == 1)
    printf("O número %d pertence à sequência de Fibonacci.\n", num);
  else
    printf("O número %d não pertence à sequência de Fibonacci.\n", num);

  return 0;
}
