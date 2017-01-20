#include <stdio.h>
#include <stdlib.h>

struct node {
  struct node *next;
  int data;
};

struct node *push(struct node *head, int num) {
  struct node *newNode = malloc(sizeof(*head));
  newNode->next = head;
  newNode->data = num;
  return newNode;
}

int pop(struct node **headPtr) {
  struct node *top = *headPtr;
  int data = top->data;
  *headPtr = top->next;
  free(top);
  return data;
}


int main(int argc, char **argv) {
  struct node *head = NULL;
  int i;
  for (i = 1; i < argc; i++) {
    head = push(head, atoi(argv[i]));
  }

  while (head) {
    int x = pop(&head);
    printf("%d ", x);
  }

  return 0;
}
