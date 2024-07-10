#include<iostream>
using namespace std;
int factorial (int n) {
    int factorial = 1;
    int i;
    for( i = 1; i<=n; i++) {
        factorial = factorial*i;

    }
    return factorial;

}
int nCr (int n, int r) {
    int numenator = factorial (n);
    int denominater = factorial (r) * factorial(n-r);
     int ans = numenator/denominater;
     return ans;

}



int main() {
    int n,r;
    cout<<" enter the value of n"<<endl;
    cin>>n;
    cout<<" enter the value of r"<<endl;
    cin>>r;
cout<<"ans is"<<nCr (n,r) <<endl;



return 0;

}