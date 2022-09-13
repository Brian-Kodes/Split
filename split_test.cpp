#include "split.h"
#include <iostream>
using namespace std;


int main () {
  Node* node1 = new Node (7, NULL);
  Node* node2 = new Node (12, node1);
  Node* node3 = new Node (6, node2);
  Node* node4 = new Node (8, node3);
  Node* node5 = new Node (9, node4);
  Node* node6 = new Node (10, node5);

  //Node* odd = new Node (3, NULL);
  //Node* even = new Node (4, NULL);
  Node* odd;
  Node* even;

 // Node* head = node6;
 // while(head != NULL){
 //   cout << head->value << endl;
    //head = head->next;
 // }


  split(node6, odd, even);

  //walk even linked list
   while(even != NULL){
     cout << even->value << endl;
     even = even->next;

          }
   
   delete node1;
   delete node2;
   delete node3;
   delete node4;
   delete node5;
   delete node6;
  // delete odd;
   //delete head;
   //delete even;
   return 0;
}
