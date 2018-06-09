//Bubble Sort
#include<cstdlib>
#include<iostream>

using namespace std;

class BubbleSort{
public:
  void Array(int a[],int size);
private:
  void Swap(int& a, int& b);
};

int main(){
  BubbleSort A;
  int y[25];
  for (size_t i = 0; i < 25; i++){
    y[i]= rand();
  }
  cout<<"\nBefore Sorting y[] = ";
  for (size_t i = 0; i < 25; i++) {
    cout<<y[i]<<", ";
  }cout<<endl;
  A.Array(y,25);
//Another way of using the for loop
// for (int x: y) {
//  cout<<x<<endl;
// }
return 0;
}

void BubbleSort::Array(int a[],int size){
  int j = 1;
  while(j != 0){
    j = 0;
    for(int i = 0;i<size;i++){
    if (a[i]>a[i+1] && a[i+1] != size){
    Swap(a[i],a[i+1]);
    j=j+1;}
  }
}
cout<<endl;
cout<<"After Sorting y[] = ";
for (size_t i = 0; i < size; i++) {
  cout<<a[i]<<", ";
}cout<<endl;
}

void BubbleSort::Swap(int& a,int& b){
  int temp;
  temp = a;
  a=b;
  b=temp;
}
