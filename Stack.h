#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
struct Node{
  string str;
  Node* Next;
};

class Stack{
public:
  // bool check(int a);
  Stack();//Constructor
  string top();
  void Pop();
  int size();
  void Push(string str);
  // void input(string str2);
  bool empty();
  //Returns true if object is empty
  void Print();
//  void Menu(int& end);
private:
  Node* head;
};

#endif
