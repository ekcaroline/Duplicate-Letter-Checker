 CharLinkedList mylist;
    mylist.addFront('z');
    mylist.addFront('z');
    mylist.addFront('z');
   string s = "List: z -> z -> z";
   checkAnswer(s, mylist.checkRecurseHelper(), true);
  }
  {
    CharLinkedList mylist;
    mylist.addFront('r');
    mylist.addFront('a');
    mylist.addFront('e');
    mylist.addFront('b');
   string s = "List: b -> e -> a -> r";
   checkAnswer(s, mylist.checkRecurseHelper(), false);
  }
  {
    CharLinkedList mylist;
    mylist.addFront('y');
    mylist.addFront('x');
    mylist.addFront('x');
    mylist.addFront('x');
    mylist.addFront('x');
   string s = "List: x -> x -> x -> x -> y";
   checkAnswer(s, mylist.checkRecurseHelper(), false);
  }
  {
    CharLinkedList mylist;
    mylist.addFront('x');
   string s = "List: x";
   checkAnswer(s, mylist.checkRecurseHelper(), true);
  }
  {
    CharLinkedList mylist;
    mylist.addFront('y');
    mylist.addFront('y');
    mylist.addFront('y');
    mylist.addFront('y');
    mylist.addFront('x');
   string s = "List: x -> y -> y -> y -> y";
   checkAnswer(s, mylist.checkRecurseHelper(), false);
  }
  {
    CharLinkedList mylist;
    mylist.addFront('s');
    mylist.addFront('i');
   string s = "List: i -> s";
   checkAnswer(s, mylist.checkRecurseHelper(), false);
  }
  {
    CharLinkedList mylist;
    mylist.addFront('e');
    mylist.addFront('e');
    mylist.addFront('e');
    mylist.addFront('e');
    mylist.addFront('e');
    mylist.addFront('e');
    mylist.addFront('e');
   string s = "List: e -> e -> e -> e -> e -> e -> e";
   checkAnswer(s, mylist.checkRecurseHelper(), true);
  }
}
bool checkAnswer(const string &nameOfTest, bool received, bool expected) {
    if (received == expected) {
        cout << std::boolalpha << "PASSED " << nameOfTest << ": expected and received " << received << endl;
        return true;
    }
    cout << std::boolalpha << "FAILED " << nameOfTest << ": expected " << expected 
<< " but received " << received << endl;
    return false;
  }
