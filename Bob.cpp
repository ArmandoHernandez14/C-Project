#include"Stack.h"

Stack::Stack(){
  Nucleus=NULL;
}
void Stack::Pop(){

}
void Stack::Push(string Brett){
  if (Nucleus == NULL) {
    Nucleus = new Node;
    (*Nucleus).Brett = Brett;
    (*Nucleus).Next = NULL;
  }else{
  Node* Bob;
  (*Bob).Brett = Brett;
  (*Bob).Next = Nucleus;
  Nucleus=Bob;
  Bob = NULL;
  delete Bob;
}
}
void Stack::input(string Armando){
cout<<"Enter value to be stored in Stack: ";
cin>>Armando;
Push(Armando);
}
void Stack::Print(){
 if (Nucleus == NULL) {
   cout<<"Nothing in Stack!"<<endl;
 }else{
   Node* P;
   while (P != NULL) {
     if (P == Nucleus) {
      cout<<"The elements in the Stack are "<<(*P).Brett<<", ";
      P=P->Next;
    }if (P->Next == NULL) {
       cout<<"and "<<P->Brett<<endl;
       P=P->Next;
     } else{cout<<P->Brett;
      P = P->Next;
    }
   }
 }
}
