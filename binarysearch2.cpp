#include<iostream>
using namespace std;
 int firstocc ( int arr [], int n, int key) {
    int start = 0;
    int end = n-1;
     
       
         int ans = -1;
        while (start <= end) {
        int mid = start + (end - start)/2;
         if( arr [mid] == key) {
            ans = mid;
            end = mid-1;

         }
         else if ( key > arr [mid]) {
            start = mid+1;
         }
         else if ( key  < arr [mid]) {
            end = mid-1;

         }
     }
     return ans;

 }
 
int lastocc ( int arr [], int n, int key) {
    int start = 0;
    int end = n-1;
   
         int ans = -1;
     while (start <= end) {
        int mid = start + (end - start)/2;
         if( arr [mid] == key) {
            ans = mid;
            start = mid + 1;

         }
         else if ( key > arr [mid]) {
            start = mid+1;
         }
         else if ( key  < arr [mid]) {
            end = mid-1;

         }
     }
     return ans;

 }


int main() {
    int even [10] = { 1,2,3,3,3,3,3,3,3,4};
    cout<<" first occ of 3 at index "<< firstocc(even , 10 , 3);
    cout<<" last occ of 3 at index "<< lastocc( even , 10 , 3);

}