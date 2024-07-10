#include<iostream>
using namespace std;
void reverse(char name[], int n) {
    int start = 0;
    int end = n-1;
    while(start<end) {
        swap(name[start] , name[end]);
            start++;
            end--;
        
    }
}
int getlength( char name[]) {
    int count = 0;
    for( int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main(){
    char name[20];
     cout<<"enter  your name"<<endl;
    cin>>name;
    cout<<"your name is"<<" ";
    cout<<name<<endl;
    int length = getlength(name);
    cout<<" length :"<<" ";
    cout<<length<<endl;
    reverse( name, length);
    cout<<"reverse name is "<<" ";
    cout<<name<<endl;
    return 0;
}