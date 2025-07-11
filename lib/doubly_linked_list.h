typedef struct Node {
  int data;
  struct Node* prev;
  struct Node* next;
} node;

void forward_traverse(node* current, void (*callback)(int data));
void backward_traverse(node* current, void (*callback)(int data));
