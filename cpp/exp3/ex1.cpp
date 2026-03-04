#include<iostream>
using namespace std;
class student{
	int collCod,regNo;
	public:
	student(int c,int r){
	   collCod=c;
	   regNo=r;
	}
	student(student &cp){
	   collCod=cp.collCod;
          regNo=0;
	}
	void studentInfo(){
	   cout<<collCod<<" : College Code"<<endl;
	   cout<<regNo<<" :Register number\n"<<endl;
	}
	~student(){}
};
int main(){
   int c,r;
   cout<<"enter college code"<<endl;
   cin>>c;
   cout<<"enter admission no"<<endl;
   cin>>r;
   student s1(c,r);
   s1.studentInfo();
   student si(s1);
   si.studentInfo();
   student se=s1;
   se.studentInfo();
   return 0;
}
