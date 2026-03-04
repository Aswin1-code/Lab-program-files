#include<iostream>
using namespace std;
template<class T>
void Max(T v1,T v2){
   if(v1>v2){ cout<<v1<<" is the largest"<<endl;}
   else{ cout<<v2<<" is the largest"<<endl;}
}
int main(){
   Max(5,32);
   Max(2.5,1.75);
   Max('c','a');
   return 0;
}
