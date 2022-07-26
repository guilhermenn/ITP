#include <stdio.h>

int main (){
    int N = 0;
    int i = 0;
    int j = 0;
    int c = 0;
    scanf("%d", &N);
    if (N > 0);{
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                c++;
                printf("%2d ", c);
            }
            printf("\n");
        }
    }
    if (N <= 0){
        printf("Você entrou com %d, tente de novo na próxima", N);
    }
    return 0;
}