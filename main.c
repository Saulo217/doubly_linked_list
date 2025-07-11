#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  typedef struct Node {
    int data;
    node* prev;
    node* next;
  } node;

  node* root;
  node first, second, third;

  root = &first;

  first->data = 10;
  first->prev = NULL;
  first->next = &second;
  
  second->data = 20;
  second->prev = &first;
  second->next = &third;

  third->data = 20;
  third->prev = &second;
  third->next = NULL;

  return EXIT_SUCCESS;
}
