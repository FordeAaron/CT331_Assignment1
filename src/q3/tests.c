#include <stdio.h>
#include "tests.h"
#include "genericLinkedList.h"





void runTests(){
  printf("Tests running...\n");

  //testing push
  int a = 357;
  push(&l, &a, sizeof(a), &printInt);
  traverse(l);
  printf("\n");

  double b = 45.00;
  push(&l, &b, sizeof(b), &printDouble);
  traverse(l);
  printf("\n");

//test pop
  pop(&l);
  traverse(l);
 
  //testing enqueue
  char i = z;
  enqueue(&l, &i, sizeof(i), &printChar);
  traverse(l);
  printf("\n")

//testing the length
  printf(" length of Linked List: %d\n\n", length(l));


  printf("\nTests complete.\n");
}
