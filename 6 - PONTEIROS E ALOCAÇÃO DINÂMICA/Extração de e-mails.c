#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void retornaPartes(char txt[], char partes[10][20], int *n){
char *pedaco, parte[50];
pedaco = strtok(txt, "@");
pedaco = strtok(NULL, "@");
while(pedaco != NULL){
    int i;
    for (i=0; pedaco[i] != '.'; i++)
        parte[i] = pedaco[i];
    parte[i] = '\0';
    strcpy(partes[(*n)++], parte);
    pedaco = strtok(NULL, "@");
    }
}

int main(){
    char texto[256] = {0}, *resultado;
    char email[50];
    char partes[10][20];
    int n = 0;
    for (int i = 0; i < 251; i++){
        scanf("%c", &texto[i]);
        fflush(stdin);
        resultado = strstr(texto, "FIM");
        if (resultado != NULL)
            break;
    }
    retornaPartes(texto, partes, &n);
    for (int i=0; i<n; i++)
        printf("%s\n", partes[i]);
    return 0;
}