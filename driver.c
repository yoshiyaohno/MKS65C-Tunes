#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "library.h"
#include "list.h"

int main(){
  srand( time(NULL) );
  printf("\n");
  struct lib * library = initialize();
   
  add_node(library, "Radiohead", "Climbing Up the Walls");
  add_node(library, "Radiohead", "Motion Picture Soundtrack");
  add_node(library, "Radiohead", "Exit Music (For a Film)");
  add_node(library, "Radiohead", "Life in a Glasshouse");
  add_node(library, "Radiohead", "Life in a Glasshouse");
  add_node(library, "Ride", "Seagull");
  add_node(library, "R.E.M.", "Losing My Religion");
  add_node(library, "Pink Floyd", "Echoes");
  add_node(library, "Pink Floyd", "Dogs");
  add_node(library, "Pink Floyd", "Time");
  add_node(library, "American Football", "Never Meant");
  add_node(library, "American Football",
          "I'll See You When We're Both Not So Emotional");
  add_node(library, "Arctic Monkeys", "The Ultracheese");

  print_artist( library, "Radiohead");
  // print(library);
  printf("\n----------------");
  // print_artist(library, "b");

  // printf("oof %d\n", library->size);
  // printf("\n\n////////SHUFFLING/////////\n");
  // shuffle(library);
  // shuffle(library);
  // shuffle(library);
  // shuffle(library);
  
  // //  print(library);
  // 
  // // printf("\n----------------");
  //  delete_song(library, search(library, "basdfo", "fa"));
  // // print_list(search(library, "bodadf", "fa"));
  
   print(library); 
  return 0;
}

