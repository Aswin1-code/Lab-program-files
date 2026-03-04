#include<iostream>
#include<string>
using namespace std;
class colib{
   string title;
   int accNo,price,noCop;
   public:
      colib(){
	 title="null";
	 accNo=0;
	 price=0;
	 noCop=0;
      }
      void getData(){
	 cout<<"Enter book name: "<<endl;
	 cin>>title;
	 cout<<"Enter access number, price and no.of copies separated by spaces: "<<endl;
	 cin>>accNo>>price>>noCop;
      }
      int getPrice(){ return price;}
      int getCopies(){ return noCop;}
      int getWorth(){ return (price * noCop);}
  ~colib(){}
};
int main(){
   colib b1,b2;
   b1.getData();
   b2.getData();
   cout<<"\n\tWelcome to the Library Management "<<endl;
   cout<<"\nPrice of book1: "<<b1.getPrice()<<"\nCopies count: "<<b1.getCopies()<<endl;
   cout<<"Total worth: "<<b1.getWorth()<<endl;
   cout<<"\nPrice of book2: "<<b2.getPrice()<<"\nCopies count: "<<b2.getCopies()<<endl;
   cout<<"Total Worth: "<<b2.getWorth()<<endl;
   cout<<"\nTotal worth of books in library: "<<(b1.getWorth() + b2.getWorth())<<endl;
   return 0;
}
