#include<iostream>
using namespace std;
int i;
bool isPrime (int n) {
    for( i=2; i<=n; i++) {
        if( n/2 == 0) {
            return 0;

        }
        return 1;

    }
}
int main() {
    int n;
    cout<<" enter the value of n"<<endl;
    cin>>n;
    if(isPrime) {
        cout<<" is a prime no."<<endl;
    }
    else {
        cout<<" is not a prime no. "<<endl;
    }
    return 0;

}