#include <iostream>
using namespace std;

int binarySearchLargest(int arr[], int n) {
    if (n == 0) return -1;

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid == n - 1 || arr[mid] > arr[mid + 1]) {
            return mid;
        }

        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;

    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the sorted elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = binarySearchLargest(arr, n);

    if (result != -1) {
        cout << "The largest element is " << arr[result] << " at index " << result << ".\n";
    } else {
        cout << "Array is empty.\n";
    }

    return 0;
}
