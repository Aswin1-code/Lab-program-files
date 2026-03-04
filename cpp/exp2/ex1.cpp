#include<iostream>
#include<string>
using namespace std;
class digiCount{
   int num,anum,rem,count;
   int *array;
   public:
    digiCount(int a){
       num=a;
       anum=a;
       rem=0;
       count=0;
    }
    void countNO(){
  	while(num!=0){
       rem=num%10;
       num=num/10;
       count++;
	}
  
    array=new int [count];
    for(int i=0;i<count;i++){
       array[i]=anum%10;
       anum=anum/10;
    }
    cout<<"Digits in the Array "<<endl;
    for(int i=count-1;i>=0;i--){
       cout<<array[i]<<endl;
    }
    //~digiCount(){
      // delete [] array;
   // }
}
};
int main(){
   int a;
   cout<<"Enter a number: "<<endl;
   cin>>a;
   digiCount n1(a);
   n1.countNO();
}
