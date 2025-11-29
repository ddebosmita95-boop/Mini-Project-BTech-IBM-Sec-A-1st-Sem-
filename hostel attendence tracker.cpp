#include <iostream>
using namespace std;

int main() {
    int A[10][7];

    
    cout << "Enter attendance for 10 students (1=Present, 0=Absent):\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> A[i][j];
        }
    }

    int studentTotal[10] = {0};
    int highestAttendance = -1;
    int highestStudent = -1;

    
    for (int i = 0; i < 10; i++) {
        int sum = 0;
        for (int j = 0; j < 7; j++) {
            sum += A[i][j];
        }
        studentTotal[i] = sum;

        if (sum > highestAttendance) { 
            highestAttendance = sum;
            highestStudent = i + 1; 
        }
    }

    
    int dayTotal[7] = {0};
    for (int j = 0; j < 7; j++) {
        for (int i = 0; i < 10; i++) {
            dayTotal[j] += A[i][j];
        }
    }

    int lowestDay = 1;
    int lowestAttendance = dayTotal[0];
    for (int j = 1; j < 7; j++) {
        if (dayTotal[j] < lowestAttendance) {
            lowestAttendance = dayTotal[j];
            lowestDay = j + 1;
        }
    }

    
    cout << "\nWeekly Attendance Summary\n";
    cout << "-------------------------\n";
    cout << "Total Present Days:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << studentTotal[i] << endl;
    }

    cout << "\nStudent with Highest Attendance: Student " 
         << highestStudent << " (" << highestAttendance << " Days)\n";

    cout << "\nDay with Lowest Overall Attendance: Day " 
         << lowestDay << endl;y

   
}

