#include<iostream>
#include<climits>
using namespace std;
void printsum(int arr[][3], int row , int col) {
    cout<<"printing the sum"<<endl;
    for( int row = 0; row <3; row++) {
        int sum = 0;
        for( int col = 0; col<3; col++) {
            sum += arr[row][col];
        }
        cout<<sum<<endl;
    }
}
int largestrowsum(int arr[][3]) {
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++) {
        int sum = 0;
        for (int col = 0; col < 3; col++) {
            sum += arr[row][col];
        }
        if (sum > maxi) {
            maxi = sum;
            rowIndex = row;
        }
    }
    return rowIndex;
}
int main() {
    int arr[3][3];
    cout<<"enter the element  "<<endl;
for( int row = 0; row <3; row++) {
    for( int col = 0; col <3; col++) {
        cin>>arr[row][col];
    }
}
cout<<" printing the array "<<endl;
for( int row = 0; row <3; row++) {
    for( int col = 0; col <3; col++) {
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}
printsum(arr,3,3);

int ansIndex = largestrowsum(arr);
    cout << "Max row sum is at index: " << ansIndex << endl;

    return 0;
}