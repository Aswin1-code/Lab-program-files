#include <iostream>
using namespace std;
class dcMotor {
public:
    float backEmf(int I, float Vt = 220, float Ra = 1.2, float Rsh = 75) {
        return Vt - (I - (Vt / Rsh)) * Ra;
    }
    float backEmf(float I, float Vt, float Ra = 1.2, float Rse = 6) {
        return Vt - (I * (Ra + Rse));
    }
    float backEmf(double I, float Vt, float Ra, float Rsh, float Rse) {
        return Vt - ((I - (Vt / Rsh)) * (Ra + Rse));
    }
};
int main() {
    dcMotor m1;
    float I;
    cout << "Enter Current: " << endl;
    cin >> I;
    cout << "Shunt motor Eb: " << m1.backEmf(I) << " V" << endl;
    cout << "Series motor Eb: " << m1.backEmf(I, 220) << " V" << endl;
    cout << "Compound Motor Eb: " << m1.backEmf(I, 220, 1.2, 75, 6) << " V" << endl;
}


