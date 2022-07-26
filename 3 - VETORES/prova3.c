#include <stdio.h>
int main() {

  int n;

  scanf("%d", &n);
  int vet[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &vet[i]);

    int i, j, resp = 0;      
    for (i = 0; i <= n; i++) {
        for (j = i + 1; j < n; j++) {
            if (vet[j] == vet[i]) {
                printf("%d" vet[j]); 
            }
        }
    }
    return (0);
}