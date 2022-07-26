#include <stdio.h>
#include <stdlib.h>

float *vetorDistinto(float vetor[], int *n) {
  float *vdist = NULL;
  int ndist = 0;
  for (int i = 0; i < *n; i++) {
    int achou=0;
    for (int j=0; !achou && j < *n; j++)
      if (i != j && vetor[i] == vetor[j])
        achou = 1;
    if (!achou) {
      vdist = realloc(vdist, (ndist+1) * sizeof(float));
      vdist[ndist++] = vetor[i];
    }
  }
  *n = ndist;
  return vdist;
}

int main(void) {
  int tam_vetor;
  
  scanf("%d", &tam_vetor);
  float vetor[tam_vetor];
  for (int i=0; i<tam_vetor; i++)
    scanf("%f", &vetor[i]);

  float *vetor_distinto = vetorDistinto(vetor, &tam_vetor);
  printf("[");
  for (int i=0; vetor_distinto!=NULL && i<tam_vetor; i++) {
    printf("%.4f", vetor_distinto[i]);
    if (i < tam_vetor-1)
      printf(", ");
  }
  printf("]\n");
  free(vetor_distinto);
  return 0;
}