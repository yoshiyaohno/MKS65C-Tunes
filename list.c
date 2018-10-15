#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void print_list_help(struct node * n){
  if(n){
    printf("The song is: %s, by %s;\n", n->name, n->artist);
    if(n->next ){
      print_list_help(n->next);
    }
  }
}

void print_list(struct node * n){
  printf("[\n");
  print_list_help(n);
  printf("]\n");
}

int compare(struct node * n1, struct node *  n2)
{
    int artcmp = strcmp( n1->artist, n2->artist );
    if( !artcmp )
        return strcmp( n1->name, n2->name );
    return artcmp;
}

struct node * inserter(struct node * n, struct node * new){ 
  if(!n || compare(new,n) <= 0 ){
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

struct node * find_artist( struct node *n, char *artist )
{
    if( !strcmp(n->artist, artist) )
        return n;
    return find_artist( n->next, artist);
}
