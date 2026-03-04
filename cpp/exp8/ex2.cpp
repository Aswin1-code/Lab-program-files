#include<iostream>
using namespace std;
class vehicle{
        protected: int a;
        public: int x=1000; int t=10000;
                virtual void getdata(){
                        cout<<"Enter number of vehicles in garage: "<<endl;cin>>a;}
                virtual void display(){
                        cout<<"Total vehicles: "<<a<<endl;}};
class car: public vehicle{
        public: int b;int s=3000;int sp=8000;
                void getdata(){
                        cout<<"Enter number of cars: "<<endl; cin>>b;}
                void display(){
                        cout<<"Total worth of cars: "<<b*x<<endl;}};
class SUV: public car{
        protected: int p;
        public: void getdata(){
                        cout<<"Total number of SUV's: "<<endl; cin>>p;}
                   void display(){
                           cout<<"SUV's worth: "<<p*s<<endl;}};
class sportsCar: public car{
        public: int c;
                void getdata(){
                        cout<<"Total sports cars: "<<endl; cin>>c;}
                void display(){
                        cout<<"Total worth of sportsCars: "<<c*sp<<endl; }};
class truck: public vehicle{
        public: int tr;
                void getdata(){
                        cout<<"Enter no.of trucks: "<<endl; cin>>tr;}
                void display(){
                        cout<<"Total truck worth: "<<tr*t<<endl;}};
class pickup: public vehicle{
        public: int pk;
                void getdata(){
                        cout<<"Enter no.of pickup trucks: "<<endl; cin>>pk;}
                void display(){
                        cout<<"Total pickup truck worth: "<<pk*(t-2000)<<endl;}};
int main(){
        vehicle v;
        car c;
        SUV s;
        sportsCar sp;
        truck t;
        pickup pk;
        vehicle *veh=&v;
        veh->getdata();
        veh->display();
        veh=&c;
        veh->getdata();
        veh->display();
        veh=&s;
        veh->getdata();
        veh->display();
        veh=&sp;
        veh->getdata();
        veh->display();
        veh=&t;
        veh->getdata();
        veh->display();
        veh=&pk;
        veh->getdata();
        veh->display();
}
