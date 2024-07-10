#include <iostream>
using namespace std;
inline int getmax(int& a , int& b) {
    return (a > b)? a:b;
}

int main() {
    int a = 5;
    int b = 2;
    int ans = 0;
    ans = getmax(a , b);
    cout <<" maximum value: "<< ans << endl;
    a = a+3;
    b = b+2;
    ans = getmax(a , b);
    cout <<" maximum value: "<< ans << endl;
    return 0;
}