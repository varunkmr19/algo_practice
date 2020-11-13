// Move last element to front of a given Linked List
#include<bits/stdc++.h>
using namespace std;

void moveToFront(Node *head) {
  if(head == NULL || head->next == NULL)
    return;

  Node *prev = NULL;
  Node *curr = head;

  while(curr != NULL) {
    prev = curr;
    curr = curr->next;
  }

  prev->next = NULL;  // tail
  curr->next = head;
  head = curr;
}
