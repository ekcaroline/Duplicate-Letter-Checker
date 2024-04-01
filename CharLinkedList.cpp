#include "CharLinkedList.h"
bool CharLinkedList::checkList() {
  return true;
}
bool CharLinkedList::checkRecurse (SNode *ptr) {
  if(ptr == nullptr) {
    return true;
  }
  //if the current ptr is not equal to the first node 
  if(ptr->elem != head->elem) {
    return false;
  }
  return checkRecurse(ptr->next); //do recursion with the next node
}
void CharLinkedList::addFront(char x) {
  SNode *tmp = head;
  head = new SNode;
  head->next = tmp;
  head->elem = x;
}
// recursion helper function called from main
bool CharLinkedList::checkRecurseHelper () {
  return checkRecurse(head);
}
