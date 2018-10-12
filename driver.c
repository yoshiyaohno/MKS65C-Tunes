#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  printf("\n");

  struct node * l = NULL;
  l = insert_front(l, "adf", "asdf");
  l = insert_front(l, "4fasdfee", "the yeetles");
  l = insert_front(l, "4dee", "the yeetles");
  l = insert_front(l, "4aee", "the eetles");

  print_list(l);
  
  l = free_list(l);

  print_list(l);
  return 0;
}
