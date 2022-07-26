#include <stdio.h>
#include <math.h>

int main (){
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    float num4 = 0;
    float num5 = 0;
    float num6 = 0;
    float num7 = 0;
    float num8 = 0;
    float num9 = 0;
    float num10 = 0;
    float produto = 0, expoente = 0, soma = 0, m_aritmetica = 0, m_harmonica = 0, m_geometrica =0;
    float erro_harmonica = 0, erro_geometrica = 0, erro_medio = 0;

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    scanf("%f", &num4);
    scanf("%f", &num5);
    scanf("%f", &num6);
    scanf("%f", &num7);
    scanf("%f", &num8);
    scanf("%f", &num9);
    scanf("%f", &num10);
    
    soma = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
    m_aritmetica = soma / 10;
    
    m_harmonica = 10/(1/num1 + 1/num2 + 1/num3 + 1/num4 + 1/num5 + 1/num6 + 1/num7 + 1/num8 + 1/num9 + 1/num10);
    
    produto = num1 * num2 * num3 * num4 * num5 * num6 * num7 * num8 * num9 * num10;
    expoente = 1.0 / 10;
    m_geometrica = pow(produto, expoente);

    erro_harmonica = (m_harmonica - m_aritmetica) / m_aritmetica;
    erro_geometrica = (m_geometrica - m_aritmetica) / m_aritmetica;
    erro_medio = ((erro_harmonica + erro_geometrica) / 2) * 100;

    printf("Média aritmética é %.2f\n", m_aritmetica);
    printf("Média harmônica é %.2f\n", m_harmonica);
    printf("Média geométrica é %.2f\n", m_geometrica);
    printf("Erro médio é %.2f\n %%", erro_medio);
}