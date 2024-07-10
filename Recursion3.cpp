#include <iostream>
using namespace std;
/*bool issorted(int *arr , int size) {
    //basec case
    if(size == 0 || size == 1)
    return true;
if(arr[0] > arr[1]) {
    return false;
}
else {
    bool ans = issorted(arr+1 , size-1);
    return ans;
}
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    bool ans = issorted(arr , size);
    if(ans) {
        cout << "Array is sorted: " << endl;
    }
    else {
        cout << "Array is not sorted: " << endl;
    }

}

int getsum(int arr[] , int size) {
    if(size == 0){
    return 0;
    }
    if(size == 1) {
        return arr[0];
    }
    int sum = arr[0]+ getsum(arr+1, size-1);
    //return arr[0] + getsum(arr+1 , size-1);
    return sum;

}
int main  () {
    int arr[5] = {5,5,5,5,5};
    int size = 5;
    int sum = getsum(arr , size);
    cout<< "Sum of an array is: " << sum << endl;
    return 0;
}

//linear search in recursion;
void print(int arr[] , int n) {
    cout << "Size of array: " << n << endl;
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " " << endl;
        //cout << endl;
    }
}
bool linearsearch(int arr[] , int size , int key) {
    print(arr, size);
    if(size == 0) {
        return false;
    }
    if(arr[0] == key) {
        return true;
    }
    else {
        bool remaningpart = linearsearch(arr+1, size-1, key);
        return remaningpart;
    }
}
int main() {
    int arr[5] = {8,9,28,10,11};
    int size = 5;
    int key = 11;
    cout << endl;
    bool ans = linearsearch(arr , size , key);
    if(ans) {
        cout << "key is present: " << endl;
    }
    else {
        cout << "key is absent: " << endl;
    }
    cout<<endl;
}
*/
void print(int arr[] , int start , int end) {
    cout << "Array state from : " << start << " to " << end << ": ";
    for(int i = start; i<= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarysearch(int arr[] , int start, int end, int key) {
    print(arr, start , end);
    if(start > end)
        return false;
    int mid = start + (end - start)/2;
    if(arr[mid] == key) {
        return true;
    }
    if(arr[mid] < key) {
        return binarysearch(arr , mid+1 , end , key);
    }
    else {
        return binarysearch(arr , start , mid-1 , key);
    }
    
}
int main() {
    int arr[6] = {10,11,12,13,14,15};
    int size = 6;
    int key = 12;
    bool found = binarysearch(arr , 0 , size - 1, key);
    if(found) {
        cout << "key is found: "<< key << endl;
    }
    else {
        cout << "key is not found: " << key << endl;
    }
    //cout << "Present or not: " << (found ? "yes" : "no") << endl;
    return 0;
}