#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "lib/doubly_linked_list.h"

void print_data(int data)
{
  printf("%d\n", data);
}

int main(int argc, char *argv[])
{
  node first, second, third;

  first.data = 10;
  first.prev = NULL;
  first.next = &second;
  
  second.data = 20;
  second.prev = &first;
  second.next = &third;

  third.data = 30;
  third.prev = &second;
  third.next = NULL;

  printf("%s\n", "Forward Traverse:");
  forward_traverse(&first, print_data);

  printf("%s\n", "Backward Traverse:");
  backward_traverse(&third, print_data);
  return EXIT_SUCCESS;
}
