/*
Given a linked list of N nodes. The task is to check if the the linked list has a loop.
Linked list can contain self loop.
*/

#include<bits/stdc++.h>
using namespace std;

bool detectLoop(Node* head)
{
  Node *slow = head;
  Node *fast = head;

  while(fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;

    if(slow == fast)
        return 1;
  }
  return 0;
}
