#include<iostream>
#include<cmath>
using namespace std;
class rectangle{
    float x,y;
    public: rectangle(float Xc,float Yc):x(Xc),y(Yc){}
    void display(){ cout<<"Rectangular form: "<<x<<" +j"<<y<<endl;}
};
class polar{
    float mag,theta;
    public: polar(float m,float t):mag(m),theta(t){}
    operator rectangle(){
        float radians,x,y;
        radians=theta*(3.14/180);
        x=mag*cos(radians); y=mag*sin(radians);
        return rectangle (x,y);
    }
};
int main(){
    float a,b;
    cout<<"Enter magnitude and angle: "<<endl;
    cin>>a>>b;
    polar p(a,b);
    rectangle r(p);
    r.display();
}
