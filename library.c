#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "library.h"

int a_index( char *artist )
{
    if( *artist >= 'A' && *artist <= 'Z' )
        return *artist - 'A';
    if( *artist >= 'a' && *artist <= 'z' )
        return *artist - 'a';
    return 26; // symbol case
}

struct lib * initialize(){
  struct lib * library = calloc(1, sizeof(struct lib));
  library->size = 0;
  return library;
}

void add_node(struct lib * n, char * artist, char * song)
{
    // this looks a little terrible written out
    (n->array)[ a_index(artist) ] =
        insert( (n->array)[ a_index(artist) ],
                artist, song);
    n->size += 1;
}

struct node * search(struct lib * n, char * artist, char * song){
    return find_song((n -> array)[ a_index(artist) ],
            artist, song);
}

void print(struct lib * n)
{
    if(n) {
        int i;
        for(i = 0; i < 27; i++)
            print_list((n -> array)[i]);
    }
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
    return find_artist((n -> array)[a_index(artist)], artist);
}

void print_letter(struct lib * n, char c){
  printf("\n  The entries under %c are: \n", c);
  print_list((n -> array)[a_index(&c)]);
}

void delete_song(struct lib * n, char *artist, char *title)
{
    // this is so bad
    (n -> array)[a_index(artist)] =
        delete( (n -> array)[a_index(artist)],
                find_song( (n->array)[a_index(artist)],
                    artist, title) );
    n->size - 1;
    // if a song that doesn't exist gets deleted this is
    //     gonna not be the actual size
}

struct node *lib_random_song( struct lib *libr )
{
    int target = rand() % (libr->size);
    // get to the right letter
    struct node **p = libr->array;
    while( (target >= length(*p)) )
        target -= length(*p++);
    // now travel dowon the list to the right song
    struct node *q = *p;
    while( target-- )
        q = q->next;
    return q;
}

void shuffle( struct lib *libr )
{
    // this can repeat songs but I do not want to get into
    //   not repeating right now haha
    int i = 16;
    while( i-- )
        print_song( lib_random_song(libr) );
}

struct lib *clear( struct lib *libr )
{
    int i = 27;
    while(i--) {
        libr->array[i] = free_list( libr->array[i] );
    }
    free(libr);
    return NULL;
}
