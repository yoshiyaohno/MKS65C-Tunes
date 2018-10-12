#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  printf("\n");

  struct node * l = NULL;
  l = insert_front(l, 10);
  l = insert_front(l, 8);
  l = insert_front(l, 356);
  l = insert_front(l, 123);
  l = insert_front(l, 4);
 
  print_list(l);
  
  l = free_list(l);

  print_list(l);
  return 0;
}
