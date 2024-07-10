#include<iostream>
using namespace std;
int main () {
    int row = 3;
    int col = 4;
//create 2D array
int arr[row][col];
//taking input row wise
cout<<"enter row wise "<<endl;
for( int row = 0; row <3; row++) {
    for( int col = 0; col <4; col++) {
        cin>>arr[row][col];
    }
}
//taking input col wise
cout<<"enter coloumn wise"<<endl;
for( int col = 0; col <4; col++) {
    for( int row = 0; row <3; row++) {
        cin>>arr[row][col];
    }
}
//print
cout<<" the 2d array is "<<endl;
for( int row = 0; row <3; row++) {
    for( int col = 0; col <4; col++) {
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}
cout<<" the 2d array is "<<endl;
for( int col = 0; col <4; col++) {
    for( int row = 0; row <3; row++) {
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}
return 0;
}