#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "library.h"

struct lib * initialize(){
  struct lib * library = calloc(1, sizeof(struct lib));
  library->size = 0;
  return library;
}

void add_node(struct lib * n, char * artist, char * song){
  struct node * * list =   ((n -> array) + (* artist - 'a'));
  * list = insert(* list, song, artist);
  n->size += 1;
}

struct node * search(struct lib * n, char * artist, char * song){
  return find_song((n -> array)[* artist - 'a'], artist, song);
}

void print(struct lib * n){
  int i;
  for(i = 0; i < 27; i++){
    printf("\n   The list under %c is:\n", i + 'a');
    print_list((n -> array)[i]);
  }
}


void print_artist(struct lib * n, char * artist){
  printf("\n   The songs composed by %s are: \n", artist);
  print_list( artist_list(find_artist((n -> array)[* artist - 'a'], artist), artist));
}

struct node * search_artist(struct lib * n, char * artist){
  return find_artist((n -> array)[* artist - 'a'], artist);
}

void print_letter(struct lib * n, char c){
  printf("\n  The entries under %c are: \n", c);
  print_list((n -> array)[c - 'a']);
}

void delete_song(struct lib * n, struct node * song){
  delete((n -> array)[* (song -> artist) - 'a'], song);
  // size - 1 somewhere here, if the delete is successful
}

void shuffle( struct lib *libr )
{
    int target = rand() % libr->size;
    printf("\tSHUFFLE TARgeT: %d", target);
    struct node **p = libr->array;
    while( p && target - length(*p) > 0 )
        target -= length(*p++);
    struct node *q = *p;
    while( target ) ++q;
    print_song(q);
}

