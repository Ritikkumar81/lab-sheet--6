#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    string names[n];

    cout << "Enter the names of the students: \n";
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (names[j] > names[j + 1]) {
                
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "Sorted names in ascending order: \n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
