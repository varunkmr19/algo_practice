/*
Given a linked list of size N. The task is to reverse every k nodes in the linked list.
Input:
LinkedList: 1->2->2->4->5->6->7->8
K = 4
Output: 4 2 2 1 8 7 6 5
*/

#include<bits/stdc++.h>
using namespace std;

struct node *reverse (struct node *head, int k) {
  node *curr = head;
  node *prev = NULL;
  node *next = NULL;

  int count = 0;

  while(curr != NULL && count < k) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
  }

  if(next != NULL) {
    head->next = reverse(next, k);
  }
  return prev;
}
