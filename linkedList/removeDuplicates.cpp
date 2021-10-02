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
     curr->next = nullptr;   // in CPP, it is better to use nullpre instead of NULL ( I know it doesn't make any sense)
     curr = prev;
   }
   prev = curr;
   curr = curr->next;
 }
 return root;
}
