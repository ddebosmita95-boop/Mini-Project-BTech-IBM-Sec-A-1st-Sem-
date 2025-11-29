#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int bill[100][100], studentTotal[100] = {0}, dayTotal[100] = {0};

    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            cin >> bill[i][j];
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }

   
    for(int i = 0; i < n; i++)
        cout << "Student " << i+1 << " total: ?" << studentTotal[i] << "\n";

    
    int maxDay = 1, maxDayVal = dayTotal[0];
    for(int j = 1; j < m; j++)
        if(dayTotal[j] > maxDayVal)
            maxDayVal = dayTotal[j], maxDay = j + 1;

    cout << "\nHighest collection on Day " << maxDay << "\n";

    
    int maxSpend = studentTotal[0];
    for(int i = 1; i < n; i++)
        if(studentTotal[i] > maxSpend)
            maxSpend = studentTotal[i];

    cout << "Highest spender: ";
    for(int i = 0; i < n; i++)
        if(studentTotal[i] == maxSpend)
            cout << "Student " << i+1 << " ";

    
}

