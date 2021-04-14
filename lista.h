#ifndef  LISTA_H
#define  LISTA_H
//========================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//========================================
// DEFINICAO DO TIPO PRODUTO
typedef struct Produto{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;

void print_produto (Produto p);
//========================================
// DEFINICAO DO TIPO CELULA
typedef struct Celula{
  Produto dado;
  struct Celula *prox;
}Celula;

//========================================
// DEFINICAO DO TIPO LISTA
typedef struct Lista{
  Celula *inicio;
  Celula *fim;
  int tam;
}Lista;
//========================================
Celula *new_celula();
//========================================
void new_lista(Lista *f);
//========================================
void enqueue(Lista *f, Produto dado);
//========================================
void print_lista(Lista *f);
//========================================
int size_lista(Lista *f);
//========================================
Produto dequeue(Lista *f);
//========================================
#endif 