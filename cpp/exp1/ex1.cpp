#include<iostream>
#include<string>
using namespace std;
class car{
   string brand, model;
   int year,price;
   public:
      car(string a,string b,int c, int d){
	 brand=a,model=b,year=c,price=d;
      	 cout<<" 	Welcome to the Aswin's Garage "<<endl;
      }
      void info(){
	 cout<<"Brand :"<<brand<<endl;
	 cout<<"Model :"<<model<<endl;
	 cout<<"Year :"<<year<<endl;
	 cout<<"Price :"<<price<<endl;
      }
      ~car(){
	 cout<<"	Thank You for adding a new car "<<endl;
      }
};
int main(){
   string brd,mod;
   int yr,pr;
   cout<<"\nEnter the Brand: ";
   getline(cin,brd);
   cout<<"\nEnter the Model: ";
   cin>>mod;
   cout<<"\nEnter Year: ";
   cin>>yr;
   cout<<"\nEnter the Price: ";
   cin>>pr;
   car c1(brd,mod,yr,pr);
   c1.info();
   return 0;
}

