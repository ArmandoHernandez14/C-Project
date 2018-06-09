//Bubble Sort
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
  const int SIZE_OF_ARRAY = 5;
  int y[SIZE_OF_ARRAY]={4,2,5,3,6};
  cout<<"Before sorting y[SIZE_OF_ARRAY] = ";
  for (size_t i = 0; i < SIZE_OF_ARRAY; i++) {
    cout<<y[i]<<" ";
  }
  cout<<endl;
  A.Array(y,SIZE_OF_ARRAY);
//Another way of using the for loop
// for (int x: y) {
//  cout<<x<<endl;
// }
return 0;
}

void BubbleSort::Array(int a[],int size){
  for(int i = 0;i<size;i++){
  if (a[i]>a[i+1] && a[i+1] != size)
  Swap(a[i],a[i+1]);
 }
 for(int i = 0;i<size;i++){
 if (a[i]>a[i+1] && a[i+1] != size)
 Swap(a[i],a[i+1]);
}cout<<"After sorting y[SIZE_OF_ARRAY] = ";
for (size_t i = 0; i < size; i++) {
  cout<<a[i]<<" ";
}
}
void BubbleSort::Swap(int& a,int& b){
  int temp;
  temp = a;
  a=b;
  b=temp;
}
