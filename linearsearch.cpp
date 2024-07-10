#include<iostream>
using namespace std;
bool search ( int arr [] , int n , int key) {
    for( int i = 0; i<n; i++) {
        if ( arr [i] == key) {
            return 1;

        }
    }
    return 0;

}


int main() {
    int arr [10] = {55,66,25,585,268,21,55,12,256,545};
    cout<<" enter the you want to see"<<endl;
    int key;
    cin>> key;
     bool found = search (arr , 10 , key);

     if ( found) {
        cout<<" key is present "<<" "<<endl;

     }
     else {
        cout<<" key is absent "<<" "<<endl;


        return 0;
     }
}
    
