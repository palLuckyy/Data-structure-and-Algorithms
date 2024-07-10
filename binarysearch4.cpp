<<<<<<< HEAD
#include<iostream>
using namespace std;
 int peakmountain(int arr[], int size ) {
    int start = 0; 
       int end = size -1;
    while ( start < end ) {
        int mid = start + (end - start)/2;
        if ( arr [mid] < arr [ mid+1]) {
            start = mid +1;
        }
        else {
            end = mid;
        }
    } 
    return start;
    }
int main() {
    int arr [10] = {0,1,1,5,6,8,6,2,5,0};
    int peak = peakmountain ( arr, 10);
    cout<<" peak mountain index "<< peak <<endl;
return 0;

=======
#include<iostream>
using namespace std;
 int peakmountain(int arr[], int size ) {
    int start = 0; 
       int end = size -1;
    while ( start < end ) {
        int mid = start + (end - start)/2;
        if ( arr [mid] < arr [ mid+1]) {
            start = mid +1;
        }
        else {
            end = mid;
        }
    } 
    return start;
    }
int main() {
    int arr [10] = {0,1,1,5,6,8,6,2,5,0};
    int peak = peakmountain ( arr, 10);
    cout<<" peak mountain index "<< peak <<endl;
return 0;

>>>>>>> 4fd8956 (files)
}