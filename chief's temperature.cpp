#include<iostream>
using namespace std;
float covertintofahrenheit(float celsius){
	return (celsius*9/5)+32;
}
int main(){
	float celsius,fahrenheit;
	cout<<"Enter Temperature(in Celsius):";
	cin>>celsius;
	fahrenheit=covertintofahrenheit(celsius);
	cout<<"Temperature (in Fahrenheit) :"<<fahrenheit<<endl;

}
