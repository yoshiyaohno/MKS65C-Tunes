#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void print_list_help(struct node * n){
  if(n){
    printf("The song is: %s, by %s;\n", n->name, n->artist);
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


struct node * insert_front(struct node * n, char * name, char * artist){
  struct node * new = malloc(sizeof(struct node));
  strcpy(new -> name, name);
  strcpy(new -> artist, artist);
  new -> next = n;
  return new;
}

struct node * free_list(struct node * n){
  if(n->next != 0){
    free_list(n->next);
  }
  free(n);
  return NULL;
}
