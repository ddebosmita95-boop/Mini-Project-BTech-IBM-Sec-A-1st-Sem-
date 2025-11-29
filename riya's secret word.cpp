#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    string reversed = "";
    
    for (int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }

    if (word == reversed)
        cout << "Perfect Secret Word";
    else
        cout << "Not a Secret Word";

    
}

