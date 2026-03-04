#include <iostream>
#include <math.h>
using namespace std;
class octal {
   int oct;
    public:
    octal() { oct = 0; }
    octal(int dec) {
        oct = 0;
        int i = 1;
        while (dec != 0) {
            oct += (dec % 8) * i;
            dec /= 8;
            i*= 10;
        }
    }
    octal operator +(const octal &o) {
        int dec1 = 0, dec2 = 0, i = 0;
        int temp= oct;
        while (temp != 0) {
            dec1 += (temp % 10) * pow(8, i++);
            temp /= 10;
        }
        temp = o.oct;
        i = 0;
        while (temp != 0) {
            dec2 += (temp % 10) * pow(8, i++);
            temp /= 10;
        }
        int sum = dec1 + dec2;
        return octal(sum);
    }
    void display() {
        cout << oct;
    }
};
int main() {
    int num1, num2;
    cout << "Enter 2 decimal numbers: ";
    cin >> num1 >> num2;
    octal o1(num1);
    cout << num1 << " Octal equivalent is ";
    o1.display();
    cout << endl;
    octal o2(num2);
    cout << num2 << " Octal equivalent is ";
    o2.display();
    cout << endl;
    octal o3 = o2 + o1;
    cout << "Sum in Octal = ";
    o3.display();
    cout << endl;
    return 0;
}
 
