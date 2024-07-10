#include <iostream>
using namespace std;
/*void reverse(string& str , int i , int j) {
    if(i > j)
    return;
swap (str[i] , str[j]);
reverse(str , i+1, j-1);
}

int main() {
    string name = "ykcul";
    reverse(name , 0 , name.length()-1);
    cout << endl;
    cout << name << endl;
    cout << endl;
    return 0;
}
*/
bool chekpalindrome(string str , int i , int j) {
    if(i > j)
    return true;
if(str[i] != str[j]) {
    return false;
}
else {
    return chekpalindrome(str , i+1, j-1);
}
}
int main() {
    string name = "lucky";
    cout << endl;
    bool ispalindrome = chekpalindrome(name , 0 , name.length()-1);
    if(ispalindrome) {
        cout << "it's a palindrome: " << endl;
    }
    else {
        cout << "it's not a palindrome: " << endl;
    }
    cout << endl;
    return 0;
}