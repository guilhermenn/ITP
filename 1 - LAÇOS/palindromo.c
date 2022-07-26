#include <stdio.h>

int main() {
  int num = 0, aux = 0, reverso = 0;      
  scanf("%d", &num);

  aux = num;
  reverso = 0;

  while (aux != 0) {
    reverso = reverso * 10 + aux % 10;  
    aux = aux / 10;                    
  }

  if (reverso == num)
    if (num % 2 == 0){
        printf("%d é Palíndromo e par.", num);
    }
    else{
        printf("%d é Palíndromo e impar.", num);
    }
 
  else
    if (num % 2 == 0){
        printf("%d não é Palíndromo e par.", num);
    }
    else {
        printf("%d não é Palíndromo e impar.", num);;
    }
  return 0;
}