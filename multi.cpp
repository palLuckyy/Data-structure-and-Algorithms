#include<iostream>
using namespace std;

bool ispresent(int arr[][4], int target, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (arr[row][col] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    const int rows = 3;
    const int cols = 4;
    int arr[rows][cols];

    // Taking input row-wise
    cout << "Enter elements row-wise:" << endl;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cin >> arr[row][col];
        }
    }

    // Print the 2D array
    cout << "The 2D array is:" << endl;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // Enter the element to search
    cout << "Enter the element to search:" << endl;
    int target;
    cin >> target;

    if (ispresent(arr, target, rows, cols)) {
        cout << "Element is present." << endl;
    } else {
        cout << "Element is not present." << endl;
    }

    return 0;
}
