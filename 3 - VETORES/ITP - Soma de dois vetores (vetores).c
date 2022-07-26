#include <stdio.h>
int main(){

    int tamanho, i, j, k, l;

    scanf("%d", &tamanho);
    if (tamanho <= 10){
        int a[tamanho], b[tamanho], c[tamanho];
        for(i=0; i<tamanho; i++){
            scanf("%d", &a[i]);
        }
        for(j=0; j<tamanho; j++){
            scanf("%d", &b[j]);
        }
        for(k=0; k<tamanho; k++){
            c[k] = a[k] + b[k];
        }
        for(l=0; l<tamanho; l++){
            printf("%d ", c[l]);
        }
    }
    else printf("Muitos elementos");
        
    return 0;
}