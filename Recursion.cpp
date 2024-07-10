//Recursion is a term in which function call itself;
#include <iostream>
using namespace std;
/*int factorial(int n) {
//base case
if(n == 0) 
return 1;
return n* factorial(n-1);
}
int main() {
    int n;
    cout << "enter the element: "<< endl;
    cin>>n;
    int ans = factorial(n);
    cout << "factorial of "<< n << " is " << ans <<endl;
    return 0;

}
int power( int n) {
    if( n == 0)
    return 1;
// recursive case 
//int smallerproblem = power(n - 1);
//int bigggerproblem = 2* smallerproblem;
//return bigggerproblem;
return 2*power(n - 1);
}
int main() {
int n;
cout << "Enter the element: " << endl;
cin >> n;
int ans = power(n);
cout << "power of " << n << " is " << ans << endl;
return 0;
}
*/
void print(int n) {
    //basic call
    if( n== 0)
    return;
//recursive call
cout << n << endl;
print(n-1);
//cout << n << endl;
}
int main() {
    int n;
    cout << "Enter trhe element: " << endl;
    cin>>n;
    cout << endl;
    print(n);
    return 0;

}