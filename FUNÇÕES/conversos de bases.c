#include <stdio.h>
#include <stdlib.h>

//char contagem(int value, int base, char result){//
//   itoa(value, result, base);//
//   return result;//
//}//





int main(){
  
   int value, base, result; 
   

   
   do{
   scanf("%d %d",&value, &base);
   switch(base){
      case 2:{
         

      }
      case 3:{
         
         
      }
      case 4:{
      
      
      }
      case 5:{
         
         
      }
      case 6:{
      int result = 0;
        int temp = value;
        int mul = 1;
        while(temp > 0){
        result = result + (temp % 6) * mul;
        mul = mul * 10;
        temp = temp / 6;
        }
      }
      case 7:{
        
        
      }
      case 8:{
         
         
      }
   }
   
   }while(value != -1);
      printf("Programa Encerrado!");


   return 0;
}



