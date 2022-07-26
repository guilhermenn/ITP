#include <stdio.h>

int testa_divisor(int numero, int divisor);
int soma_divisores(int value);
int testa_amigos(int a, int b);
int verifica_primo(int numero);

int main(){
    int valor, aux;
    aux=0;
    scanf("%i", &valor);
    while(valor!=0){
       
        if(verifica_primo(valor)==1){
            
            if(aux!=0){
                printf("O numero %i e primo! ",valor); 
                if(testa_amigos(aux,valor)==1){
                    printf("Os numeros <%i,%i> sao amigos!\n", aux, valor);
                }else{
                    printf("Os numeros <%i,%i> nao sao amigos!\n", aux, valor);
                }
            }else{
                printf("O numero %i e primo!\n",valor); 
                
            }
        }else{
            
            if(aux!=0){
                printf("O numero %i nao e primo! ",valor); 
                if(testa_amigos(aux,valor)==1){
                    printf("Os numeros <%i,%i> sao amigos!\n", aux, valor);
                }else{
                    printf("Os numeros <%i,%i> nao sao amigos!\n", aux, valor);
                }
            }else{
                printf("O numero %i nao e primo!\n",valor); 
                
            }
            
        }
        
        
        aux=valor;
        scanf("%i", &valor);
    }
    
    
    
    
}

int verifica_primo(int numero){
    int contador;
    contador =0;
    if(numero == 1){
        return 1;
    }else{
        for (int i = 1; i<=numero;i++){
            if(numero%i==0){
            contador++;
            }
        }
    }
    if(contador<=2){
        return 1;
    }else{
        return 0;
    }
    
}
int testa_divisor(int numero, int divisor) {
  if (numero % divisor == 0) {
    return 1;
  } else {
    return 0;
  }
}
int soma_divisores(int value) {
  int aux;
  aux = 0;
  for (int i = 1; i < value; i++) {
    if (testa_divisor(value, i) == 1) {
      aux += i;
    }
  }
  
  return aux;
}
int testa_amigos(int a, int b) {
  if (soma_divisores(a) == b && soma_divisores(b)==a) {
    return 1;
  } else {
    return 0;
  }
}
