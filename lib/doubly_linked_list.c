#include <stddef.h>
#include "doubly_linked_list.h"

void forward_traverse(node* current, void (*callback)(int data))
{
  while (current != NULL) {
    callback(current->data);
    current = current->next;
  }
}

void backward_traverse(node* current, void (*callback)(int data))
{
  while (current != NULL) {
    callback(current->data);
    current = current->prev;
  }
}
