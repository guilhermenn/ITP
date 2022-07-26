#include <stdio.h>

int testa_divisor(int numero, int divisor);
int soma_divisores(int value);
int testa_amigos(int a, int b);

int main() {

  int al1, bl1, al2, bl2, contador;
  scanf("%i %i", &al1, &bl1);
  scanf("%i %i", &al2, &bl2);
  contador =0;

  for (int i = al1; i <= bl1; i++) {

    for (int j = al2; j <= bl2; j++) {
      
      if (testa_amigos(i,j) == 1) {

        printf("O %i possui um amigo!\n", i);
        contador++;
      }
    }
    
  }

  if (contador == 0) {
    printf("Os intervalos nao apresentam amigos!");
  }
}

int testa_divisor(int numero, int divisor) {
  if (numero % divisor == 0) {
    return 1;
  } else {
    return 0;
  }
}
int soma_divisores(int value) {
  int aux;
  aux = 0;
  for (int i = 1; i < value; i++) {
    if (testa_divisor(value, i) == 1) {
      aux += i;
    }
  }
  
  return aux;
}
int testa_amigos(int a, int b) {
  if (soma_divisores(a) == b && soma_divisores(b)==a && a!=b) {
    return 1;
  } else {
    return 0;
  }
}
