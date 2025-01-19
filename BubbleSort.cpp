#include <iostream>
using namespace std;

int main() {
    string LName[7] = {"Omen", "Edgar", "Africano", "Zebra", "Yakult", "Inigo", "Uranium"};
    string temp = "";

    cout << "Before Sorting: ";
    for (int i = 0; i < 7; i++) {
        cout << LName[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < size(LName); i++) { // Outer loop for passes
        for (int j = 0; j < size(LName) - i - 1; j++) { // Inner loop for comparisons
            if (int(LName[j][0]) > int(LName[j + 1][0])) { // Compare first characters
                temp = LName[j];
                LName[j] = LName[j + 1];
                LName[j + 1] = temp;
            }
        }
    }
    cout << "After Sorting: ";
    for (int i = 0; i < 7; i++) {
        cout << LName[i] << " ";
    }
    cout << endl;

    return 0;
}
