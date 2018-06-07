#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
struct Node{
  string Brett;
  Node* Next;
};

class Stack{
public:
  Stack();//Constructor
  void Pop();
  void Push(string Brett);
  void input(string Armando);
  void Print();
private:
  Node* Nucleus;
};

#endif
