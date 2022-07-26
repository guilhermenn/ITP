#include <stdio.h>
int main(){

    int vetor1[3], vetor2[3], vetor3[3], A1, A2, A3, i, j, k;
    for(i=0; i<3; i++){
        scanf("%d", &vetor1[i]);
    }
    for(j=0; j<3; j++){
        scanf("%d", &vetor2[j]);
    }
    for(k=0; k<3; k++){
        scanf("%d", &vetor3[k]);
    }

    A1 = vetor1[0] + vetor2[0] - 5*(vetor3[0]);
    A2 = vetor1[1] + vetor2[1] - 5*(vetor3[1]);
    A3 = vetor1[2] + vetor2[2] - 5*(vetor3[2]);

    printf("A = [%d, %d, %d]", A1, A2, A3);

    return 0;
}