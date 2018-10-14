
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
  printf("[\n");
  print_list_help(n);
  printf("]\n");
}

int compare(struct node * n1, struct node *  n2){
  char s1[100];
  char s2[100];
  char * s3 = "                   ";
  strcpy(s1, n1 -> artist);
  strcpy(s2, n2 -> artist);
  strcat(s1, s3);
  strcat(s2, s3);
  strcat(s1, n1 -> name);
  strcat(s2, n2 -> name);

  if(0 < strcmp(s1, s2)){
    return 1;
  }
  return 0;


}

struct node * inserter(struct node * n, struct node * new){ 
  if(!n || compare(n,new)){
    new -> next = n; 
    return new;
  }else{
    n -> next = inserter(n -> next, new);
    return n;
  }
}


struct node * insert(struct node * n, char * name, char * artist){
  struct node * new = malloc(sizeof(struct node));
  strcpy(new -> artist, artist);
  strcpy(new -> name, name); 
  return inserter(n, new);
}


struct node * free_list(struct node * n){
  if(n->next != 0){
    free_list(n->next);
  }
  free(n);
  return NULL;
}
