#include <iostream>
using namespace std;
/*void reachhome(int scr , int dest) {
//cout << "source " <<scr << " destination " << dest << endl; 
//base case
if(scr == dest) {
cout << "poch gya " << endl;
return;
}
//processing
cout << "current position: " << scr << endl;
scr++;
//recursive call
reachhome(scr, dest);
}
int main() {
    int dest = 10;
    int scr = 1;
    cout<<endl;
    reachhome(scr , dest);
}
*/
void saydigit( int n , string arr[]) {
//base case
if(n == 0)
return;
//processing
int digit = n % 10;
n = n/10;
//recursive call
saydigit(n , arr);
cout << arr[digit] << " " ;
}
int main () {
string arr[10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
cout<< "Enter the element: " << endl;
int n; 
cin>>n;
cout<< endl << endl;
saydigit(n, arr);
}