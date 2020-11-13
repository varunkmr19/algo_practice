/*
Remove duplicate element from unsorted Linked List
*/

#include<bits/stdc+.h>
using namespace std;

Node *removeDuplicates( Node *head) {
  set<int> s;
  Node *curr = head;
  Node *prev = NULL;

  while(curr != NULL) {
   if(s.count(curr->data)) {
       // remove
       prev->next = curr->next;
   } else {
       s.insert(curr->data);
       prev = curr;
   }
   curr = curr->next;
  }
  return head;
}
