#include<iostream>
using namespace std;

void swapAlternative(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int even[6] = {1, 55, 66, 25, 96, 336};
    int odd[5] = {96, 36, 25, 14, 65};
     
    swapAlternative(even, 6);
    printArray(even, 6);
    cout << "printArray(even, 6)" << endl;
    
    swapAlternative(odd, 5);
    printArray(odd, 5);
    cout << "printArray(odd, 5)" << endl;

    return 0;
}
