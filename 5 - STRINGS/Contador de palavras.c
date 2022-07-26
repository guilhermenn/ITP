#include <stdio.h>
#define qtdpal 20
#define tampal 20

int tamstr(char txt[]) {
    int tam;
    for (tam = 0; txt[tam] != 0; tam++);
    return tam;
}

int compstr(char str1[tampal], char str2[tampal]) {
    int match = 1;
    if (tamstr(str1) != tamstr(str2))
        match = 0;
    else
        for (int i = 0; i < tamstr(str1); i++)
            if (str1[i] != str2[i]) {
                match = 0;
                break;
            }
    return match;
}

void copystr(char strsrc[tampal], char strdst[tampal]) {
    int i;
    for (i = 0; i <= tamstr(strsrc); i++)
        strdst[i] = strsrc[i];
}

void adicionaPalavra(char word[tampal], char words[qtdpal][tampal], int count[qtdpal]) {
    int p, achou;
    for (p = 0, achou = 0; words[p][0] != 0 && p < qtdpal && !achou; p++)
        if (compstr(word, words[p])) {
            count[p]++;
            achou = 1;
        }
    if (!achou && p < qtdpal) {
        copystr(word, words[p]);
        count[p] = 1;
    }
}

void buscaPalavras(char txt[], char words[qtdpal][tampal], int count[qtdpal]) {
    char word[tampal] = {0};
    int elemento = 0;
    for (int i = 0; i <= tamstr(txt); i++) {
        if (txt[i] != ' ' && txt[i] != 0)
            word[elemento++] = txt[i];
        else {
            if (i > 0 && txt[i-1] != ' ') {
                adicionaPalavra(word, words, count);
                for (int j = 0; j < tampal; j++)
                    word[j] = 0;
                elemento = 0;
            }
        }
    }
}

int main(void) {
    char texto[256] = {0};                  
    char palavras[qtdpal][tampal] = {0};    
    int contapalavras[qtdpal] = {0};        
    scanf("%[^\n]s", texto);
    buscaPalavras(texto, palavras, contapalavras);
    for (int p = 0; p < qtdpal; p++) {
        if (palavras[p][0] != 0)
            printf("%d: %s\n", contapalavras[p], palavras[p]);
    }
    return 0;
}
