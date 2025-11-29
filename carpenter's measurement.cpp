#include <iostream>
using namespace std;
int main() {
    int num1,num2;
    cout<<"Enter 1st number :";
    cin >> num1;
    cout<<"Enter 2nd number :";
    cin>>num2;

    int x = num1, y = num2;
    while (num2 != 0) {
        int num = num2;
        num2 = num1 % num2;
        
        num1 = num;
    }
    int gcd = num1;
    int lcm = (x * y) / gcd;
    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
