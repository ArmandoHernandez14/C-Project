#include<iostream>
#include "Stack.h"

using namespace std;

int main(){
Stack B;
int end;
string bob;
do {
  B.input(bob);
  cout<<"\nEnter -1 to end: ";
  cin>>end;
} while(end != -1);

  return 0;
}
