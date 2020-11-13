// Add 1 to a number represented as linked list
#include<bits/stdc++.h>
using namespace std;

Node *reverse(Node *head) {
  Node * prev = NULL;
  Node * current = head;
  Node * next;
  while (current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  return prev;
}

Node* addOne(Node *head) {
  curr = reverse(head);
  Node *res = curr;
  Node *prev;
  int carry = 1;

  while(curr != NULL) {
    int sum = curr->data + carry;
    carry = sum / 10;
    sum = sum % 10;

    curr->data = sum;

    prev = curr;
    curr = curr->next;
  }

  if(carry > 0) {
    prev->next = new Node(carry);
  }

  curr = res;

  return reverse(curr);
}
