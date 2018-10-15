#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  printf("\n");
  struct node *l = NULL;
 
  l = insert(l, "b", "b");
  l = insert(l, "b", "a");
  l = insert(l, "a", "a");
  l = insert(l, "a", "b");
  l = insert(l, "-", "t");
  l = insert(l, "a", "a");
  l = insert(l, "a", "b");
  l = insert(l, "a", "z");
  l = insert(l, "r", "a");
  l = insert(l, "fff", "ad");
  l = insert(l, "d", "adf");
  l = insert(l, "-", "a");
 
  print_list(l);

  printf( "%d\n\n\n", length(l));
  print_list( random_song(l));
  print_list( random_song(l));
  print_list( random_song(l));
  printf( "\n\n\n\n");


  print_list( find_artist(l, "ad"));
  print_list( find_artist(l, "b"));
  print_list( find_artist(l, "t"));
  
  l = free_list(l);

  print_list(l);
  return 0;
}
