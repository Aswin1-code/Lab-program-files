#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
class STR{
  string arr;
   public: 
   STR(string temp){
      arr=temp;
   }
   STR operator-(char rem){
      int i=0;
      for(i=0;arr[i]!='\0';i++){
	 if(arr[i]==rem){
	    arr[i]='_';}
      }
      return STR(arr);
   }
   void display(){ cout<<arr<<endl;
   }
};
int main(){
   STR s1("Lamborghini");
   s1.display();
   STR s2=s1-'b';
   s2.display();}

