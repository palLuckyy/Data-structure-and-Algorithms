#include<iostream>
using namespace std;
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n-1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    cout << "reverse array ";
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}