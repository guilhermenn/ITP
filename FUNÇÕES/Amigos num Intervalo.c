#include <stdio.h>

int main(){
    int A, B, C, D, div1, div2;
    
    
    scanf("%d %d",&A, &B);
    scanf("%d %d",&C, &D);


    for (int k = A; k <= B; k++){
    for (int l = C; l <= D; l++){

        for (int i = 1; 1<= k/2 ; i++){
            if (k % i == 0) 
                div1 += i;
        }
        for (int i = 1; 1<= l/2 ; i++){
            if (l % i == 0) 
                div2 += i;
        }

        if (l == div2 && l == div1)
            printf("O %d possui um amigo", div1);
            printf("O %d possui um amigo", div2);  
        else 
            printf("Os intervalos nao apresentam amigos!");

    }   
    }

    return 0;
}