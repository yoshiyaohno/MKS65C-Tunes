struct lib {
  struct node * array[27];
};

struct lib * initialize();

void add_node(struct lib * n, char * artist, char * song);

struct node * search(struct lib * n, char * artist, char * song);

struct node * search_artist(struct lib * n, char * artist);

void print_letter(struct lib * n, char c);

void print_artist(struct lib * n, char * artist);

void print(struct lib * n);

void shuffle(struct lib * n);

void delete_song(struct lib * n, struct node * song);

void clear(struct lib * n);

