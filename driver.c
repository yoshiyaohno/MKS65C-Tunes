#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "library.h"
#include "list.h"

int main()
{
    srand( time(NULL) );
    printf("\n");
    struct lib * library = initialize();

    printf("ok epic\nr - a: %d\nR - a: %d\n", 'r'-'a', 'R'-'a');
     
    add_node(library, "radohed", "oof lol");
    add_node(library, "Radiohead", "Climbing Up the Walls");
    add_node(library, "Radiohead", "Motion Picture Soundtrack");
    add_node(library, "Radiohead", "Exit Music (For a Film)");
    add_node(library, "Radiohead", "Life in a Glasshouse");
    add_node(library, "Radiohead", "Weird Fishes / Arpeggi");
    add_node(library, "Ride", "Seagull");
    add_node(library, "R.E.M.", "Losing My Religion");
    add_node(library, "Pink Floyd", "Dogs");
    add_node(library, "Pink Floyd", "Sheep");
    add_node(library, "Phoenix", "Lisztomania");
    add_node(library, "Phoenix", "1901");
    add_node(library, "Car Seat Headrest", "Bodys");
    add_node(library, "Car Seat Headrest", "Cosmic Hero");
    add_node(library, "Car Seat Headrest",
            "The Ballad of the Costa Concordia");
    add_node(library, "Car Seat Headrest", "The Ending of Dramamine");
    add_node(library, "Pink Floyd", "Pigs on the Wing, Pt. 1");
    add_node(library, "Pink Floyd", "Pigs on the Wing, Pt. 2");
    add_node(library, "Pink Floyd", "Pigs (Three Different Ones)");
    add_node(library, "American Football", "Never Meant");
    add_node(library, "American Football", "Stay Home");
    add_node(library, "Arctic Monkeys", "The Ultracheese");
    add_node(library, "Arctic Monkeys", "American Sports");
    add_node(library, "Autolux", "Turnstile Blues");
    add_node(library, "Autolux", "Angry Candy");
    add_node(library, "Autolux", "Great Days for the Passenger Elements");
    add_node(library, "American Football",
            "I'll See You When We're Both Not So Emotional");
    add_node(library, "Neutral Milk Hotel", "Holland, 1945");
    add_node(library, "Neutral Milk Hotel", "Oh Comely");
    add_node(library, "Neutral Milk Hotel", "Two-Headed Boy");
    add_node(library, "Neutral Milk Hotel", "Two-Headed Boy, Pt. 2");
    add_node(library, "Slint", "Breadcrumb Trail");
    add_node(library, "Slint", "Good Morning Captain");

    print_artist( library, "Radiohead");
    print_artist( library, "Pink Floyd");
    printf("\n----------------\n");
    print(library);

    printf("\n\n////////SOME SHUFFLES/////////\n");
    shuffle(library);
    
    // printf("\n--------DELETING FAKE SHOEGAZE--------\n");
    // delete_song(library, "Ride", "Seagull");
    // print(library);
  
    return 0;
}

