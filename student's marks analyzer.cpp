#include <iostream> 
using namespace std;

int main() {
    int n;
    cout<<"Enter no.of students :";
    cin >> n;
    
    int marks[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
    cout<<"Enter marks : ";
        cin >> marks[i];
        total += marks[i];
}
    double average = (double)total / n;
    cout << "Total Marks = " << total << endl;
    
    cout << "Average Marks = " << average << endl;

    
}
