#include<iostream>
using namespace std;
class mesur{
    friend void add(mesur a, mesur b);
    float in,ft;
    public:
    mesur(float c,float d):ft(c),in(d){}
};
    void add(mesur a,mesur b){
        float val1=a.in+b.in;
        float val2=a.ft+b.ft;
        cout<<val2<<"ft "<<val1<<"inches";
    }
int main(){
    mesur m1(4,6),m2(3,2);
    add(m1,m2);
}

