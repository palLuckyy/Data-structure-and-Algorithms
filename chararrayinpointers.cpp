#include<iostream>
using namespace std;
int main() {
    int arr[5] = {1,8,3,4,5};
    cout<< arr <<endl;
    int *ptr = &arr[0];
    cout<< ptr <<endl;


    char ch[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
    cout << ch << endl;
    char *c = &ch[0];
    cout<< c <<endl;

}