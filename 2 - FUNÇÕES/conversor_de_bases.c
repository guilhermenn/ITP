#include <stdio.h>
#include <math.h>

int conversaoDeBase(int valor, int basee);


void main(){
    
    int value, base;
    int result;
    
    do{
        scanf("%i %i", &value, &base);
        if(value!=-1){
            result = conversaoDeBase(value, base);
            printf("Numero %i(10) na base %i = %i(%i)\n", value, base, result,base);
        }
        
    }while(value!=-1);
    
    printf("Programa Encerrado!");
}

int conversaoDeBase(int valor, int basee){
    
    int temp,contador;
    int resultado;
    resultado = 0;
    temp = valor;
    contador = 0;
    if(temp>=basee){
        while(temp>0){
        
            if((temp/basee)>=basee){
                resultado = resultado + (temp%basee)*pow(10,contador);
               
            }else if(temp/basee < basee){
            
                resultado = resultado + (temp%basee)*pow(10,contador)+(temp/basee)*pow(10,contador+1);
                break;
            }
            temp = temp/basee;
            contador++;
        }
    }else{
        resultado = (resultado + temp);
    }
    return resultado;
    
    
    
}