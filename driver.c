#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  printf("\n");
  struct node * l = NULL;
 
  l = insert(l, "y", "a");
  l = insert(l, "-", "t");
  l = insert(l, "a", "a");
  l = insert(l, "-", "b");
  l = insert(l, "-", "z");
  l = insert(l, "r", "a");
  l = insert(l, "fff", "ad");
  l = insert(l, "d", "adf");
  l = insert(l, "-", "a");
 
  print_list(l);
  
  l = free_list(l);

  print_list(l);
  return 0;
}
