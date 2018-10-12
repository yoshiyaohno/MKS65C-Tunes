#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  printf("\nasdf");

  struct node * l = NULL;
  l = insert(l, "adf", "asdf");
  l = insert(l, "4fasdfee", "the yeetles");
  l = insert(l, "4dee", "the yeetles");
  l = insert(l, "4aee", "the eetles");

  print_list(l);
  
  l = free_list(l);

  print_list(l);
  return 0;
}
