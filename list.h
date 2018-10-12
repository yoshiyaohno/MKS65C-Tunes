struct node{
  char name[50];
  char artist[50];
  struct node * next;
};

void print_list(struct node * n);

struct node * insert(struct node * n, char * name, char * artist);

struct node * free_list(struct node * n);

