//a palindrome is when a reveerse a string and we get the same output after reverse the string is called palindrome
#include<iostream>
using namespace std;
bool chekpalindrome(char a[], int n){
    int start= 0;
    int end = n-1;
    while(start <=end) {
        if( a[start] != a[end]) {
            return false;
        }
        else {
            start++;
            end--;
        }
    }
    return true;
}
int getlength( char name[]) {
    int count = 0;
    for( int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"your name is"<<endl;
    cout<<name<<endl;
    int length = getlength(name);
    cout<<"length :"<<" ";
    cout<<length<<endl;
    if(chekpalindrome(name,length)) {
        cout<<" the name is palindrome. "<<endl;
    }
    else{
        cout<<" the name is not a palindrome. "<<endl;
    }
    return 0;
}