#include <iostream>
using namespace std;
int main() {
    int size = 10;
    int numbers[size];

    // Input 10 numbers
    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Print array in reverse order
    cout << "\nArray in reverse order:\n";
    for (int i = size - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    return 0;
}
