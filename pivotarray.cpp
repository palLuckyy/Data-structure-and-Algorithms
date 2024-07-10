#include<iostream>
using namespace std;

/*int getpivot (int arr[], int n) {
    int start = 0;
    int end = n-1;
    while( start< end) {
        int mid = start + (end-start)/2;
        if( arr[mid] >= arr[0]) 
        {
            start = mid+1;
        }
        else {
            end = mid;

        }
    }   
    return start;
}
int main(){
    int arr[5] = {3,8,10,17,1};
    cout << " pivot is "<<getpivot(arr, 5)<<endl;

}*/

int getpivot(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {  // Use start < end to avoid infinite loop
        int mid = start + (end - start) / 2;  // Correct calculation of mid
        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;  // start should give the pivot index
}

int main() {
    int arr[5] = {3, 8, 10, 17, 1};
    cout << "The pivot index is " << getpivot(arr, 5) << endl;
    return 0;
}
