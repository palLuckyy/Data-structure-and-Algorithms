#include<iostream>
using namespace std;
int main() {
    int num = 5;
    cout<<num<<endl;
    //addres of operator
    cout<<"address of num is: "<< &num <<endl;
    // implement of pointer
    int *ptr = &num;
    cout<<"Address of ptr is: "<<ptr<<endl;
    cout<<"value of ptr is: "<<*ptr<<endl;
    double d = 4.2;
    double *p2 = &d;
    cout<<"Address of p2 is: "<<p2<<endl;
    cout<<"value of ptr is: "<<*p2<<endl;
    cout<<"Size of integer is "<<sizeof(int)<<endl;
    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer is "<<sizeof(*p2)<<endl;
    int a = num;
    a++;
    cout<<"value of a: "<<num<<endl;
    int *p = &num;
    cout<<" before: "<<num<<endl;
    (*p)++;
    cout<<"After: "<<num<<endl;
    // How to copy one pointer to another!
    int *q = p;
    cout<<"addres of q: "<<p<<"_"<<q<<endl;
    cout<<"value of q: "<<*p<<"_"<<*q<<endl;
    //important concept
    int i = 3;
    int *t = &i;
    (*t)++;
     cout<<i<<endl;
    (*t)--;
    cout<<i<<endl;
    *t = *t+1;
    cout<<*t<<endl;





}