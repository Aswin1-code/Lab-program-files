#include<iostream>
#include<stdexcept>
using namespace std;
class avg{
    int sum,count;
    public: avg(){ sum=0; count=0;}
    void addValue(int val){
          if(val<0){
	      throw invalid_argument("Negative value exception\n");}
	  sum+=val;
	  count++;
	  }
    float calc(){
          if(count==0){
	       throw runtime_error("Div by zero");}
	  return (sum/count);}
	  };
int main(){
   avg a;
   //a.addValue(4);
   try{
      cout<<"Adding negative value "<<endl; a.addValue(-5);}
   catch(exception &err){
      cout<<"catch: "<<err.what();}
   try{
      cout<<"Calculating avg with no values "<<endl;
      cout<<"Average "<<a.calc()<<endl;}
   catch(runtime_error &err){
      cout<<"Caught: "<<err.what()<<endl;}
   catch(...){
      cout<<"Default exception"<<endl;}
   try{
      cout<<"Rethrown\n";
      try{
	 throw logic_error("\nLogic err occurred");}
      catch(logic_error &err){
	 cout<<"Inner block"<<err.what()<<endl;
	 throw;}
   }
   catch(...){
      cout<<"Outer block"<<endl;}}
