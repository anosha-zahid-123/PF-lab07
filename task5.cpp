#include <iostream>
using namespace std;

int main() {
    // initalization
     int size = 10;
    int numbers[size];
    int posnum = 0, negnum = 0, oddnum = 0, evennum = 0, zeronum = 0;

    // Input 10 numbers
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];

        // Update numbers
        if (numbers[i] > 0) {
            posnum ++;
            (numbers[i] % 2 == 0) ? evennum++ : oddnum++;
        } else if (numbers[i] < 0) {
            negnum++;
            (numbers[i] % 2 == 0) ? evennum++ : oddnum++;
        } else {
            zeronum++;
        }
    }

    // Print
    cout << "\n print:\n";
    cout << "Number of positive numbers: " << posnum << endl;
    cout << "Number of negative numbers: " << negnum << endl;
    cout << "Number of odd numbers: " << oddnum << endl;
    cout << "Number of even numbers: " << evennum << endl;
    cout << "Number of zeros: " << zeronum << endl;
    return 0;
}


