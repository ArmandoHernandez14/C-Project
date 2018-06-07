#include<iostream>
#include "Stack.h"
#include"Bob.cpp"
#include<cctype>

using namespace std;

int main(){
Stack B;
int end;
string bob;
do {
B.Menu(end);
} while(end != 4);
  return 0;
}
