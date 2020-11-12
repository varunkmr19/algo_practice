/*
You are given a linked list of N nodes.
Remove the loop from the linked list, if present.
*/

#include<bits/stdc++.h>
using namespace std;

void removeLoop(Node* head) {
  Node *slowPtr = head;
  Node *fastPtr = head;
  while(fastPtr != NULL && fastPtr->next != NULL) {
      slowPtr = slowPtr->next;
      fastPtr = fastPtr->next->next;
      // loop present
      if(slowPtr == fastPtr) {
          break;
      }
  }

  if(slowPtr == fastPtr) {
    slowPtr = head;
    // loop detected at head
    if(fastPtr == slowPtr) {
        while(fastPtr->next != slowPtr)
            fastPtr = fastPtr->next;
    } else {
        while(slowPtr->next != fastPtr->next) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next;
        }
    }
    fastPtr->next = NULL;
  }
}
