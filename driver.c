#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include "list.h"

int main(){
  printf("\n");
  struct lib * library = initialize();
   
  add_node(library, "b", "a");
  add_node(library, "b", "a");
  add_node(library, "c", "a");
  add_node(library, "d", "a");
  add_node(library, "bo", "fa");
  add_node(library, "b", "ada");

  print_list(search_artist(library, "b"));

  
  printf("\n----------------");
  print_letter(library, 'b');
  // print(library); 
  return 0;
}

