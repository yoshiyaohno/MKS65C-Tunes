#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include "list.h"

int main(){
  printf("\n");
  struct lib * library = initialize();
   
  add_node(library, "b", "a");

  print(library); 
  return 0;
}
