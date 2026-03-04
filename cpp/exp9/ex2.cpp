#include<iostream>
using namespace std;
template<class T>
class stack{
   T s[10];
   int top;
   public: stack(){top=-1;}
         void push(T item){
            if(top==9){
               cout<<"Stack full"<<endl;}
            else{top++;
               s[top]=item;}
         }
         void pop(){
            if(top>=0){
               cout<<"popped element :"<<s[top--]<<endl;}
            else{
                cout<<"Stack empty"<<endl;
            }
         }
};
int main(){
   stack <int> obj1;
   obj1.push(5);
   obj1.push(10);
   obj1.pop();
   obj1.pop();
   obj1.pop();
   cout<<"--------------"<<endl;
   stack <float> obj2;
   obj2.push(5.2);
   obj2.push(2.5);
   obj2.pop();
   obj2.pop();
   obj2.pop();
}
