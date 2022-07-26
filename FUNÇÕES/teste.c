#include <stdio.h>
int main(){
  
  int value, base, result;
  do {
    scanf("%d", &value);
    scanf("%d", &base);
    switch(base){
     case 2: {
        result = 0;
        int temp = value;
        while(temp > 0){
            result = (result * 10) + (temp % 2);
            temp = temp / 2;
        }
     }
     case 3: {
        int result = 0;
        int temp = value;
        while(temp > 0){
            result = (result * 10) + (temp % 3);
            temp = temp / 2;
        }
     }
     case 4: {
        int result = 0;
        int temp = value;
        while(temp > 0){
            temp = temp / 2;
            result = (result * 10) + (temp % 4);
        }
     }
     case 5: {
        int result = 0;
        int temp = value;
        while(temp > 0){
            temp = temp / 2;
            result = result + (temp % 4) * 10;
        }
     }
     case 6: {
        int result = 0;
        int temp = value;
        int mul = 1;
        while(temp > 0){
        result = result + (temp % 6) * mul;
        mul = mul * 10;
        temp = temp / 6;
        }
     }
     case 7: {
        int result = 0;
        int temp = value;
        int mul = 1;
        while(temp > 0){
        result = result + (temp % 7) * mul;
        mul = mul * 10;
        temp = temp / 7;
        }
     }
     case 8: {
        int result = 0;
        int temp = value;
        int mul = 1;
        while(temp > 0){
        result = result + (temp % 8) * mul;
        mul = mul * 10;
        temp = temp / 8;
        }
     }
    }
    printf("Number %d na base %d = %d\n", value, base, result);
  } while(value != -1);
  
  
  return 0;
}