#include<iostream>
using namespace std;
class ClsB;
class ClsA{
    friend class calc;
    float n1,n2;
    public:
    ClsA(float a,float b):n1(a),n2(b){}
};
class ClsB{
    friend class calc;
    float m1,m2;
    public:
    ClsB(float a,float b):m1(a),m2(b){}
};
class calc{
    public:
    void avg(ClsA obj1,ClsB obj2){
        float average=(obj1.n1+obj1.n2+obj2.m1+obj2.m2)/4;
        cout<<"Average :"<<average<<endl;
    }
    void max(ClsA obj1,ClsB obj2){
        float max1=(obj1.n1>obj1.n2)?obj1.n1:obj1.n2;
        float max2=(obj2.m1>obj2.m2)?obj2.m1:obj2.m2;
        float mx=(max1>max2)?max1:max2;
        cout<<"Max: "<<mx;
    }
};
int main(){
    ClsA ob1(3,2);
    ClsB ob2(5,4);
    calc c1;
    c1.avg(ob1,ob2);
    c1.max(ob1,ob2);
}

