<<<<<<< HEAD
#include <iostream>
using namespace std;
void sortarray(int *arr ,int n) {
    if(n == 0 || n == 1) {
        return;
    }
    for( int i = 0; i< n; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i] , arr[i+1]);
        }
    }
    sortarray(arr , n-1);
}

int main() {
    int arr[5] = {2,5,1,6,9};
    sortarray(arr , 5);
    for(int i = 0; i <5; i++) {
        cout << arr[i] << endl;
        cout << endl;

    }
=======
#include <iostream>
using namespace std;
void sortarray(int *arr ,int n) {
    if(n == 0 || n == 1) {
        return;
    }
    for( int i = 0; i< n; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i] , arr[i+1]);
        }
    }
    sortarray(arr , n-1);
}

int main() {
    int arr[5] = {2,5,1,6,9};
    sortarray(arr , 5);
    for(int i = 0; i <5; i++) {
        cout << arr[i] << endl;
        cout << endl;

    }
>>>>>>> 4fd8956 (files)
}