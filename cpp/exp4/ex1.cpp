#include<iostream>
using namespace std;
class current{
    float volt;
    public:
    current(float v):volt(v){}
    void CalcI(float r1,float r2){
        cout<<"Ir1: "<<(volt/r1)<<" and "<<"Ir2: "<<(volt/r2)<<endl;
    }
    void CalcI(float r1,float r2,float r3){
        cout<<"Ir1: "<<(volt/r1)<<" Ir2: "<<(volt/r2)<<" Ir3: "<<(volt/r3);
    }
};
int main(){
    current c1(20);
    c1.CalcI(2,3);
    c1.CalcI(4,5,3);
}
