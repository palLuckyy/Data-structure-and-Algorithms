// Refrence Vaeiablre is known ass sam memory but differnet names:
//Syntax: int &j  = i;
#include<iostream>
using namespace std;
int main() {
    int i = 5;
    //create refrence variable
    int &j = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    j--;
    cout << i << endl;
    cout << j << endl;
    j = j*2;
    cout << j << endl;
    cout << i << endl;
   

}