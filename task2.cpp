#include<iostream>
using namespace std;
int main (){
const int numStudents = 10;
    string studentNames[numStudents];
    int hoursStudied[numStudents];
    int maxHours = 0;
    string maxStudent;
    // Ask for hours studied by 10 students
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter name of Student " << i + 1 << ": ";
        cin >> studentNames[i];
        cout << "Enter hours studied by " << studentNames[i] << ": ";
        cin >> hoursStudied[i];

        // Update max hours and student name if needed
        if (hoursStudied[i] > maxHours) {
            maxHours = hoursStudied[i];
            maxStudent = studentNames[i];
        }
    }

    // Print hours studied by each student
    cout << "\nHours Studied by Each Student:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << studentNames[i] << ": " << hoursStudied[i] << " hours\n";
    }

    // Print student who studied the most
    cout << "\nStudent who studied the most: " << maxStudent << " (" << maxHours << " hours)\n";

        return 0;
        }
    