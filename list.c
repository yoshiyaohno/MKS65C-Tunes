#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list_help(struct node * n){
  if(n){
    printf("%d, ", n->i);
    if(n->next != 0){
      print_list_help(n->next);
    }
  }
}

void print_list(struct node * n){
  printf("[");
  print_list_help(n);
  printf("]\n");
}


struct node * insert_front(struct node * n, int i){
  struct node * new = malloc(sizeof(struct node));
  new -> next = n;
  new -> i = i;
  return new;
}

struct node * free_list(struct node * n){
  if(n->next != 0){
    free_list(n->next);
  }
  free(n);
  return NULL;
}
