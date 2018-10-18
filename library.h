struct lib {
  struct node * array[27];
  int size; // yeah yeah it's a copout
};

struct lib * initialize();

void add_node(struct lib * n, char * artist, char * song);

struct node * search(struct lib * n, char * artist, char * song);

struct node * search_artist(struct lib * n, char * artist);

void print_letter(struct lib * n, char c);

void print_artist(struct lib * n, char * artist);

void print(struct lib * n);

struct node *lib_random_song(struct lib * n);

void shuffle(struct lib * n);

void delete_song(struct lib * n, char *artist, char *title);

struct lib * clear(struct lib * );

int a_index(char *);
