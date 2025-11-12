#include <iostream>
using namespace std;

int binarySearch(float arr[], int n, float key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; 
        }
        
        if (arr[mid] > key) {
            high = mid - 1; 
        } else {
            low = mid + 1;  
        }
    }

    return -1; 
}

int main() {
    int n;
    float key;

    cout << "Enter the number of elements: ";
    cin >> n;

    float arr[n];

    cout << "Enter the sorted elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the floating-point number to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << ".\n";
    } else {
        cout << "Element " << key << " not found in the array.\n";
    }

    return 0;
}
