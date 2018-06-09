#include<iostream>
#include "Stack.h"
#include"Bob.cpp"
using namespace std;

int main(){
string bob;
Stack B;
B.Push(5);
B.Push(4);
B.Push(3);
B.Push(2);
B.Push(1);
B.Pop();
//B.Menu(end);
B.Pop();
  return 0;
}
