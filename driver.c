#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "library.h"
#include "list.h"

int main(){
  srand( time(NULL) );
  printf("\n");
  struct lib * library = initialize();
   
  add_node(library, "b", "a");
  add_node(library, "b", "a");
  add_node(library, "c", "a");
  add_node(library, "d", "a");
  add_node(library, "bo", "fa");
  add_node(library, "b", "ada");

  print(library);
  printf("\n----------------");
  print_artist(library, "b");

  printf("\n\n////////SHUFFLING/////////\n");
  shuffle(library);
  shuffle(library);
  shuffle(library);
  shuffle(library);
  
  // //  print(library);
  // 
  // // printf("\n----------------");
  //  delete_song(library, search(library, "basdfo", "fa"));
  // // print_list(search(library, "bodadf", "fa"));
  
   print(library); 
  return 0;
}

