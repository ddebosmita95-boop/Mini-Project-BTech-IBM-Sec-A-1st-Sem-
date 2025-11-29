#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int exercise[n];
    cout << "Enter exercise times: ";
    for (int i = 0; i < n; i++) {
        cin >> exercise[i];
    }

    cout << "Reversed exercise times: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << exercise[i] << " ";
    }

    
}

