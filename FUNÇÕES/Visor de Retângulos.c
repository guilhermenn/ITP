#include <stdio.h>

int main(){
    float x1, x2, x3, x4, y1, y2, y3, y4;

    do{
    scanf("%f %f %f %f",&x1, &y1, &x2, &y2);
    scanf("%f %f %f %f",&x3, &y3, &x4, &y4);
        if ((x1<x4) && (x1>=x3) && (x2<=x4) && (x2>=x3) && (y1<=y4) && (y1>=y3) && (y2<=y4) && (y2>=y3)){
        printf("primeiro contido no segundo");
    }
        if ((x1<=x4) && (x1>x3) && (x2<=x4) && (x2>=x3) && (y1<=y4) && (y1>=y3) && (y2<=y4) && (y2>=y3)){
        printf("primeiro contido no segundo");
    }
        if ((x1<=x4) && (x1>=x3) && (x2<x4) && (x2>=x3) && (y1<=y4) && (y1>=y3) && (y2<=y4) && (y2>=y3)){
        printf("primeiro contido no segundo");
    }
        if ((x1<=x4) && (x1>=x3) && (x2<=x4) && (x2>x3) && (y1<=y4) && (y1>=y3) && (y2<=y4) && (y2>=y3)){
        printf("primeiro contido no segundo");
    }
        if ((x1<=x4) && (x1>=x3) && (x2<=x4) && (x2>=x3) && (y1<y4) && (y1>=y3) && (y2<=y4) && (y2>=y3)){
        printf("primeiro contido no segundo");
    }
        if ((x1<=x4) && (x1>=x3) && (x2<=x4) && (x2>=x3) && (y1<=y4) && (y1>y3) && (y2<=y4) && (y2>=y3)){
        printf("primeiro contido no segundo");
    }
        if ((x1<=x4) && (x1>=x3) && (x2<=x4) && (x2>=x3) && (y1<=y4) && (y1>=y3) && (y2<y4) && (y2>=y3)){
        printf("primeiro contido no segundo");
    }
        if ((x1<=x4) && (x1>=x3) && (x2<=x4) && (x2>=x3) && (y1<=y4) && (y1>=y3) && (y2<=y4) && (y2>y3)){
        printf("primeiro contido no segundo");
    }
    
    
        if ((x1>x4) && (x1<=x3) && (x2>=x4) && (x2<=x3) && (y1>=y4) && (y1<=y3) && (y2>=y4) && (y2<=y3)){
        printf("primeiro contem o segundo");
    }
        if ((x1>=x4) && (x1<x3) && (x2>=x4) && (x2<=x3) && (y1>=y4) && (y1<=y3) && (y2>=y4) && (y2<=y3)){
        printf("primeiro contem o segundo");
    }
        if ((x1>=x4) && (x1<=x3) && (x2>x4) && (x2<=x3) && (y1>=y4) && (y1<=y3) && (y2>=y4) && (y2<=y3)){
        printf("primeiro contem o segundo");
    }
        if ((x1>=x4) && (x1<=x3) && (x2>=x4) && (x2<x3) && (y1>=y4) && (y1<=y3) && (y2>=y4) && (y2<=y3)){
        printf("primeiro contem o segundo");
    }
        if ((x1>=x4) && (x1<=x3) && (x2>=x4) && (x2<=x3) && (y1>y4) && (y1<=y3) && (y2>=y4) && (y2<=y3)){
        printf("primeiro contem o segundo");
    }
        if ((x1>=x4) && (x1<=x3) && (x2>=x4) && (x2<=x3) && (y1>=y4) && (y1<y3) && (y2>=y4) && (y2<=y3)){
        printf("primeiro contem o segundo");
    }
        if ((x1>=x4) && (x1<=x3) && (x2>=x4) && (x2<=x3) && (y1>=y4) && (y1<=y3) && (y2>y4) && (y2<=y3)){
        printf("primeiro contem o segundo");
    }
        if ((x1>=x4) && (x1<=x3) && (x2>=x4) && (x2<=x3) && (y1>=y4) && (y1<=y3) && (y2>=y4) && (y2<y3)){
        printf("primeiro contem o segundo");
    }
    }








    }while(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0);
    return 0;
}