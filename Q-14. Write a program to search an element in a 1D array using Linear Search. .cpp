#include <iostream>
using namespace std;

int main() {
    int n, key, index = -1;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

  
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i; 
            break;     
        }
    }

    
    if (index != -1) {
        cout << "Element " << key << " found at index " << index << ".\n";
    } else {
        cout << "Element " << key << " not found in the array.\n";
    }

    return 0;
}
