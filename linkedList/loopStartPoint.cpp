// Find first node of loop in a linked list
#include<bits/stdc++.h>
using namespace std;

Node *loopStartNode(Node *head) {
  Node *slow = head;
  Node *fast = head;

  slow = slow->next;
  fast = fast->next->next;

  while(fast && fast->next) {
    if(slow == fast)  // loop found
      break;
    slow = slow->next;
    fast = fast->next->next;
  }

  if(slow != fast) { // No loop detected
    return NULL;
  }

  slow = head;
  while(fast != slow) {
    fast = fast->next;
    slow = slow->next;
  }

  return slow;
}
