#pragma once
class SNode {
public:
  char elem;
  SNode *next;
};
class CharLinkedList {
private:
  SNode *head;
  bool checkRecurse (SNode *ptr); 
public:
  CharLinkedList(): head(nullptr) {}
  void addFront(char x);
  bool checkList(); 
  // recursion helper function called from main 
  bool checkRecurseHelper ();
};
