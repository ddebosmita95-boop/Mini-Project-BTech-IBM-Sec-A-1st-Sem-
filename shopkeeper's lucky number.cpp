#include <iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter a number :";
    cin >> number;
    if (number % 2 == 0){
    	cout <<number << "  is even number" << endl;
	}
    else{
    	 cout <<number << " is odd number" << endl;
	}
    if (number % 5 == 0){
    	cout <<number<< "  is divisible by 5" << endl;
	}
    else {
    	cout <<number << "  is not divisible by 5" << endl;
	}
    
 
}
