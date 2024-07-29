#include<iostream> 
using namespace std;
void findmaxmin(int arr[], int n, int &min, int &max) {
    min = arr[0];
    max = arr[0];
    for(int i = 0; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min, max;
    findmaxmin(arr, n, min, max);

    cout << "maximum element " << max << endl;
    cout << "minimum element " << min << endl;
}