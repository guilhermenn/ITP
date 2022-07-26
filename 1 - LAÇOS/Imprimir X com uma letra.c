#include <stdio.h>

int main(){
    int num = 0, j = 0, k = 0;
    char letra;
    do {
        scanf("%d %c", &num, &letra);
    }
    while (num < 4);
    for (j = 1; j < num; j++){
        for (k = 1; k < num; k++){
            if ((k == j) || (k == (num-j)))
                printf("%c", letra);
            else
                printf(" ");
        }
        printf("\n"); 
    }
    return 0;
}