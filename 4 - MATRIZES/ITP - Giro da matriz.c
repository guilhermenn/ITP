#include <stdio.h>
#define linhas 3
#define colunas 3
int main(void) {

  int matriz[linhas][colunas];
  for (int l=0; l<linhas; l++)
    for (int c=0; c<colunas; c++)
      scanf("%d", &matriz[l][c]);
  

  int matrig[linhas][colunas];
  for (int l=0; l<linhas; l++)
    for (int c=0; c<colunas; c++)
      matrig[c][linhas-1-l] = matriz[l][c];


  for (int l=0; l<linhas; l++) {
    for (int c=0; c<colunas; c++)
      printf("%d ", matrig[l][c]);
    printf("\n");
  }
  return 0;
}