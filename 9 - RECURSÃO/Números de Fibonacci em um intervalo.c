#include <stdio.h>

int fib( int x ) {
  if( x <= 1 )
    return x;
  else
    return fib( x - 1 ) + fib( x - 2 );
}

void main() {
  int n1, n2, f, conta = 0;
  scanf("%d %d", &n1, &n2);
  for (int i = 0; i < 15; i++) {
    f = fib(i);
    if (n1 < f && f < n2)
      conta++;
  }
  printf("Existem %d números de fibonacci entre %d e %d\n", conta, 
    n1, n2);
  return 0;
}