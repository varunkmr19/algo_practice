/*
Remove duplicate element from sorted Linked List
*/

#include<bits/stdc+.h>
using namespace std;

Node *removeDuplicates(Node *root) {
 Node *prev = root;
 Node *curr = root->next;

 while(curr != NULL) {
   if(curr->data == prev->data) {
     prev->next = curr->next;
     curr->next = NULL;
     curr = prev;
   }
   prev = curr;
   curr = curr->next;
 }
 return root;
}
