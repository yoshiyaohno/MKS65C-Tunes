#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "library.h"

struct lib * initialize(){
  struct lib * library = calloc(1, sizeof(struct lib));
  return library;
}

void add_node(struct lib * n, char * artist, char * song){
  struct node * * list =   ((n -> array) + (* artist - 'a'));
  * list = insert(* list, song, artist);
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


