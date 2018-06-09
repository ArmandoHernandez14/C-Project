#include"Stack.h"
Stack::Stack(){
  head=NULL;
}
// bool check(int a){
//   for(int i=0;char[i]!='\0';i++){
//     if(!isdigit(str[i])){
//     return false;}
// }
// return true;
// }
// void Stack::Menu(int& end){
//   string Armando;
//   end = 0;
//   while(end != 4){
//   cout<<"\n -------Stack------\n";
//   cout<<" 1.Enter Value for Stack"<<endl;//input function
//   cout<<" 2.Show What's in the Stack"<<endl;//Print function
//   cout<<" 3.Remove item from Stack"<<endl;//Pop function
//   cout<<" 4.Exit"<<endl;
//   cout<<" :";
//   cin>>end;
//   switch (end) {
//     case 1: input(Armando);
//     break;
//     case 2: Print();
//     break;
//     case 3: Pop();
//     break;
//     case 4: cout<<"\n Good Bye!"<<endl;
//     break;
//     default: cout << "\nSorry, command doesn't exist. Please Try again" << '\n';
//     break;
//   }
// }
// }
int Stack::size(){
  int size=0;
  Node* i;
  i = head;
  while (i != NULL) {
  size++;
  i = i->Next;
} return size;
}
bool Stack::empty(){
  if (head == NULL)
    return true;
  else
  return false;
}
void Stack::Pop(){
if(empty())
  cout<<"\nNothing in Stack!"<<endl;
else{
  Node* Pop;
  Pop= head;
  head= head->Next;
  delete Pop;
}
}
void Stack::Push(string str){
  if (head == NULL){
    head = new Node;
    (*head).str = str;
    (*head).Next = NULL;
  }
  else{
  Node* Bob;
  Bob = new Node;
  (*Bob).str = str;
  (*Bob).Next = head;
  head=Bob;
  Bob = NULL;
  delete Bob;
}
}
// void Stack::input(string str2){
//   int Bob;
//   do{
// cout<<"Enter value to be stored in Stack: ";
// cin>>str2;
// Push(str2);
// cout<<"Enter 0 to stop adding to the Stack: ";
// cin>>Bob;
// }while (Bob != 0);
// }
void Stack::Print(){
 if (empty()) {
   cout<<"\nNothing in Stack!"<<endl;
 }
 else{
 if (head->Next == NULL) {
  cout<<"The element in the Stack is "<<head->str;
 }
 else{
   Node* P;
   P = head;
   while (P != NULL) {
     if (P == head) {
      cout<<"The elements in the Stack are "<<(*P).str<<", ";
      P=P->Next;
    }if (P->Next == NULL) {
       cout<<"and "<<P->str<<endl;
       P=P->Next;
     } else{cout<<P->str<<", ";
      P = P->Next;
    }
   }
 }}
}

string Stack::top(){
  return (*head).str;

}
