#include<bits/stdc++.h>
using namespace std;

void reverseV1(Node *head) {
  Node *prev = NULL;
  Node *curr = head;
  Node *next = NULL:

  while(curr != NULL) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;
}

Node *reverseV2(Node *head) {
  if(head == NULL || head->next == NULL)
    return head;

  Node *rest =  reverseV2(head->next);
  head->next->next = head;

  head->next = NULL;

  return rest;
}
