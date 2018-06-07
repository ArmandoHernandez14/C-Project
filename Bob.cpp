#include"Stack.h"
#include<cctype>
Stack::Stack(){
  Nucleus=NULL;
}
// bool check(int a){
//   for(int i=0;char[i]!='\0';i++){
//     if(!isdigit(str[i])){
//     return false;}
// }
// return true;
// }
void Stack::Menu(int& end){
  string Armando;
  end = 0;
  while(end != 4){
  cout<<"\n -------Stack------\n";
  cout<<" 1.Enter Value for Stack"<<endl;//input function
  cout<<" 2.Show What's in the Stack"<<endl;//Print function
  cout<<" 3.Remove item from Stack"<<endl;//Pop function
  cout<<" 4.Exit"<<endl;
  cout<<" :";
  cin>>end;
  switch (end) {
    case 1: input(Armando);
    break;
    case 2: Print();
    break;
    case 3: Pop();
    break;
    case 4: cout<<"\n Good Bye!"<<endl;
    break;
    default: cout << "\nSorry, command doesn't exist. Please Try again" << '\n';
    break;
  }
}
}
void Stack::Pop(){
if (Nucleus == NULL) {
  cout<<"\nNothing in Stack!"<<endl;
}else{
  Node* Pop;
  Pop= Nucleus;
  Nucleus= Nucleus->Next;
  delete Pop;
}
}
void Stack::Push(string Brett){
  if (Nucleus == NULL) {
    Nucleus = new Node;
    (*Nucleus).Brett = Brett;
    (*Nucleus).Next = NULL;
  }else{
  Node* Bob;
  Bob = new Node;
  (*Bob).Brett = Brett;
  (*Bob).Next = Nucleus;
  Nucleus=Bob;
  Bob = NULL;
  delete Bob;
}
}
void Stack::input(string Armando){
  int Bob;
  do{
cout<<"Enter value to be stored in Stack: ";
cin>>Armando;
Push(Armando);
cout<<"Enter 0 to stop adding to the Stack: ";
cin>>Bob;
}while (Bob != 0);
}
void Stack::Print(){
 if (Nucleus == NULL) {
   cout<<"\nNothing in Stack!"<<endl;
 }
 else{
 if (Nucleus->Next == NULL) {
  cout<<"The element in the Stack is "<<Nucleus->Brett;
 }
 else{
   Node* P;
   P = Nucleus;
   while (P != NULL) {
     if (P == Nucleus) {
      cout<<"The elements in the Stack are "<<(*P).Brett<<", ";
      P=P->Next;
    }if (P->Next == NULL) {
       cout<<"and "<<P->Brett<<endl;
       P=P->Next;
     } else{cout<<P->Brett<<", ";
      P = P->Next;
    }
   }
 }}
}
