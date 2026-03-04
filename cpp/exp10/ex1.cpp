#include<iostream>
#include<stdexcept>
using namespace std;
class stack{
   int *s;
   int top;
   int size,b;
   public: 
        stack(int sz){
              size=sz;
              s=new int[sz];
              top=-1;
              b=0;
           }
           void push(int x){
              if(top==(size-1)){
                 throw overflow_error("Stack overflow");}
              s[++top]=x;
              b=x;
              cout<<"Pushed: "<<x<<endl;
           }
           int pop(){
              if(b==0){ throw "emptystack";}
              if(top==-1){
                 throw underflow_error("Stack underflow");
                }
              return s[top--];
            }
};
int main(){
   stack sk(3);
   try{ 
        cout<<"Pop without push"<<endl;
        cout<<sk.pop();
    }
   catch(const char *err){
        cout<<"Error caught: "<<err<<endl;
   }
   try{
         cout<<"Pushing elements ";
         sk.push(10);
         sk.push(12); 
         sk.push(14); 
         sk.push(16);}
   catch(exception &err){
      cout<<"Error caught: "<<err.what()<<endl;}

   try{
      cout<<"Popping elements\n"<<endl;
      cout<<"popped: "<<sk.pop()<<endl;
      cout<<"popped: "<<sk.pop()<<endl;
      cout<<"popped: "<<sk.pop()<<endl;
      cout<<"popped: "<<sk.pop()<<endl;
      cout<<"popped: "<<sk.pop()<<endl;
   }
   catch(exception &err){
      cout<<"Error caught: "<<err.what()<<endl;
      try{
         throw;}
      catch(...){
         cout<<"Rethrowing exception"<<endl;}
   }
}
