#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    int matrix1[m][n], matrix2[m][n], sum[m][n];

    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }

   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "The sum of the matrices is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
