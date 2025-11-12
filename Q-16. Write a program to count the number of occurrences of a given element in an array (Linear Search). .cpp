#include <iostream>
using namespace std;

int main() {
    int n, key, count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to count occurrences: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    cout << "Element " << key << " occurs " << count << " time(s) in the array.\n";

    return 0;
}
