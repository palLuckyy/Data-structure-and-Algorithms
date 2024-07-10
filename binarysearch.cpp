<<<<<<< HEAD
#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid inside the loop
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int even[4] = {100, 200, 300, 450};
    int odd[5] = {550, 650, 870, 960, 4500}; // The odd array should be sorted for binary search

    int evenindex = binarysearch(even, 4, 300);
    cout << "Index of 300 is " << evenindex << endl;

    int oddindex = binarysearch(odd, 5, 4500);
    cout << "Index of 4500 is " << oddindex << endl;

    return 0;
}
=======
#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid inside the loop
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int even[4] = {100, 200, 300, 450};
    int odd[5] = {550, 650, 870, 960, 4500}; // The odd array should be sorted for binary search

    int evenindex = binarysearch(even, 4, 300);
    cout << "Index of 300 is " << evenindex << endl;

    int oddindex = binarysearch(odd, 5, 4500);
    cout << "Index of 4500 is " << oddindex << endl;

    return 0;
}
>>>>>>> 4fd8956 (files)
