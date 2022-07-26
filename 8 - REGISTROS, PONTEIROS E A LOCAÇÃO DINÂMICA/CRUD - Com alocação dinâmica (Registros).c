#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[50];
  int idade;
  char sexo;
} Pessoa;

void inserirPessoa(Pessoa *ps, int *t, Pessoa p) {
  ps[*t] = p;
  (*t)++;
}

void deletarPessoa(Pessoa *ps, int *t, Pessoa d) {
  int i;
  for (i=0; i < *t; i++)
    if (strcmp(ps[i].nome, d.nome)==0 &&
        ps[i].idade == d.idade &&
        ps[i].sexo == d.sexo)
      break;

  if (t > 0 && i < (*t)-1) {
    for (int j=i; j < *t; j++)
      ps[j] = ps[j+1];
    (*t)--;
  }
}

void printPessoa (Pessoa *p, int t) {
  for (int i = 0; i < t; i++)
    printf("%s,%d,%c\n", p[i].nome, p[i].idade,
      p[i].sexo);
}

Pessoa lerDados() {
  Pessoa p;
  char lixo;
  p.nome[0] = '\0';
  fflush(stdin);
  fgets(p.nome, 50, stdin);
  if (p.nome[strlen(p.nome)-1] == '\n')
    p.nome[strlen(p.nome) - 1] = '\0';
  scanf("%d", &p.idade);
  scanf(" %[^\n]c", &p.sexo);
  scanf("%c", &lixo);
  return p;
}

int main(void) {
  int cont = 0;
  Pessoa pessoas[20];
  char nome[50] = {0};
  int idade;
  char sexo;
  char cmd = 0, lixo;
  
  while (cmd != 'p') {
    fflush(stdin);
    scanf("%[^\n]c", &cmd);
    scanf("%c", &lixo);

    if (cmd == 'p')
      break;
    Pessoa p = lerDados();

    if (cmd == 'i')
      inserirPessoa(pessoas, &cont, p);

    if (cmd == 'd')
      deletarPessoa(pessoas, &cont, p);
  }
  printPessoa(pessoas, cont);
  return 0;
}