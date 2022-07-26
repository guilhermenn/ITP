#include <stdio.h>
#include <stdlib.h>

int main(void) {
  typedef struct {
    char Nome[50];
    float Preco;
    int Quantidade;
  } Item;
  int ent, conta = 1, npessoas;
  float total = 0;
  Item *itens = malloc(sizeof(Item));

  do {
    scanf("%s", itens[conta-1].Nome);
    scanf("%f", &itens[conta-1].Preco);
    scanf("%d", &itens[conta-1].Quantidade);
    scanf("%d", &ent);
    if (ent == 1) {
      conta++;
      itens = realloc(itens, conta * sizeof(Item));
    }
  } while (ent != 2);
  scanf("%d", &npessoas);
  for (int i=0; i < conta; i++)
    total += itens[i].Preco * itens[i].Quantidade;
  printf("Valor: R$ %.2f\n", total);
  printf("Divisão R$ %.2f para cada participante.\n", total/npessoas);
  free(itens);
  return 0;
}
