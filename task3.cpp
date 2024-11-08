#include<iostream>
using namespace std;
int main (){
     int size = 7;
    int numbers[size];
    int Multiples = 0;

    // Ask user to input seven integers
    cout << "Enter seven integers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // multiples of five
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 5 == 0) {
            Multiples++;
        }
    }

    // Print result
    cout << "\nNumber of integers multiple of five: " << Multiples << endl;
return 0;
}