#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number :";
    cin >> num;  
    
    if (num % 2 == 0){
    	 cout <<num<< " is even number" << endl;
	}
    else{
    	cout <<num<< " is odd number" << endl;
	}
    for (int i=2; i<num/2; i++){
	if (num%i ==0){
		cout<<num <<" is not a prime number." <<endl;
		return 0;
	}
	}
		cout<<num <<" is a prime number."<<endl;
    return 0;
}
