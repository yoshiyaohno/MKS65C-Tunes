#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "library.h"

int artist_index( char *artist )
{
}

struct lib * initialize(){
  struct lib * library = calloc(1, sizeof(struct lib));
  library->size = 0;
  return library;
}

void add_node(struct lib * n, char * artist, char * song)
{
    // this looks a little terrible written out
    (n->array)[*artist - 'a'] =
        insert( (n->array)[*artist - 'a'],
                song, artist);
    n->size += 1;
}

struct node * search(struct lib * n, char * artist, char * song){
  return find_song((n -> array)[* artist - 'a'], song, artist);
}

void print(struct lib * n)
{
    // int i;
    // for(i = 0; i < 27; i++) {
    //     printf("\tprinting i = %d\n", i);
    //     print_list((n -> array)[i]);
    // }
    //print_list( (n->array)['R' - 'a'] );
}


void print_artist(struct lib *libr, char *artist){
    printf("\n\tSongs by %s:\n", artist);
    struct node *n = search_artist(libr, artist);
    while( n && !strcmp(n->artist, artist) ) {
        print_song(n);
        n = n->next;
    }
}

struct node * search_artist(struct lib * n, char * artist)
{
    return find_artist((n -> array)[* artist - 'a'], artist);
}

void print_letter(struct lib * n, char c){
  printf("\n  The entries under %c are: \n", c);
  print_list((n -> array)[c - 'a']);
}

void delete_song(struct lib * n, struct node * song){
  ((n -> array)[* (song -> artist) - 'a']) = delete((n -> array)[* (song -> artist) - 'a'], song);
  // size - 1 somewhere here, if the delete is successful
}

void shuffle( struct lib *libr )
{
    int target = rand() % (libr->size);
    printf("\tSHUFFLE TARgeT: %d\n", target);
    struct node **p = libr->array;
    while( p && (target - length(*p)) >= 0 ) {
        target -= length(*p++);
        printf("\t\ttarget progress, now %d\n", target);
        printf("\t\twe are at:\n");
        print_song(*p);
        printf("\n");
    }
    struct node *q = *p;
    while( target-- ) ++q;
    print_song(q);
}

