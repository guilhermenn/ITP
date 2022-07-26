#include <stdio.h>

void comparaTriangulo(float x1t1, float y1t1, float x2t1, float y2t1, float x1t2, float y1t2, float x2t2, float y2t2);

int main(){
    float x1t1, y1t1, x2t1,y2t1, x1t2,y1t2,x2t2,y2t2;
    
    
    scanf("%f %f %f %f", &x1t1, &y1t1,&x2t1, &y2t1);
    
    scanf("%f %f %f %f", &x1t2, &y1t2,&x2t2, &y2t2);
    
    while(x1t2!=0 || y1t2!=0 || x2t2!=0 || y2t2!=0){
        comparaTriangulo(x1t1, y1t1, x2t1,y2t1, x1t2,y1t2,x2t2,y2t2);
        scanf("%f %f %f %f", &x1t2, &y1t2,&x2t2, &y2t2);
    }
    
}

void comparaTriangulo(float x1t1, float y1t1, float x2t1, float y2t1, float x1t2, float y1t2, float x2t2, float y2t2){
    
    if(x1t1<x1t2&&x1t1<x2t2&&x2t1>x1t2&&x2t1>x2t2  && y1t1<y1t2&&y1t1<y2t2&&y2t1>y1t2&&y2t1>y2t2){
        
        printf("(<%0.2f,%0.2f>,<%0.2f,%0.2f>) contem (<%0.2f,%0.2f>,<%0.2f,%0.2f>).\n", x1t1, y1t1, x2t1,y2t1, x1t2,y1t2,x2t2,y2t2);
    }else if(x1t1>x1t2&&x1t1<x2t2&&x2t1>x1t2&&x2t1<x2t2  && y1t1>y1t2&&y1t1<y2t2&&y2t1>y1t2&&y2t1<y2t2){
        printf("(<%0.2f,%0.2f>,<%0.2f,%0.2f>) contem (<%0.2f,%0.2f>,<%0.2f,%0.2f>).\n", x1t2, y1t2, x2t2,y2t2, x1t1,y1t1,x2t1,y2t1);
    }else{
        printf("Nao posso afirmar!\n");
    }
    
    
    
}