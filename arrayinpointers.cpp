<<<<<<< HEAD
//int *ptr = arr[0];
#include<iostream>
using namespace std;
int main() {
    int arr[10] = {2,5,6,8,9,55,33};

    cout<<"address of first memory block: "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"address of first memory blockis: "<<&arr[0]<<endl;
    cout<<"4th: "<<*arr<<endl;
    cout<<"5th: "<<*arr+1<<endl;
    cout<<"6th: "<<*(arr+1)<<endl;
    cout<<"7th: "<<*(arr)+1<<endl;
    cout<<"8th: "<<arr[5]<<endl;
    cout<<"9th: "<<*(arr+5)<<endl;
    int i = 6;
    cout<<"10th: "<<arr[i]<<endl;
{
    int temp[10];

    cout<<sizeof(temp)<<endl;
    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;
}

    int a[20] = {1,2,3,5};
    cout<<"->"<<&a<<endl;
    cout<<"->"<<&a[0]<<endl;
    cout<<"->"<<a<<endl;

    int *ptr = &a[0];
    cout<<"->"<<&ptr<<endl;
{

    int arr[10];
    int *ptr = &arr[0];
    //ptr = ptr+1;
    //*(ptr+1);
    ptr++;
    cout<<ptr<<endl;


}

=======
//int *ptr = arr[0];
#include<iostream>
using namespace std;
int main() {
    int arr[10] = {2,5,6,8,9,55,33};

    cout<<"address of first memory block: "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"address of first memory blockis: "<<&arr[0]<<endl;
    cout<<"4th: "<<*arr<<endl;
    cout<<"5th: "<<*arr+1<<endl;
    cout<<"6th: "<<*(arr+1)<<endl;
    cout<<"7th: "<<*(arr)+1<<endl;
    cout<<"8th: "<<arr[5]<<endl;
    cout<<"9th: "<<*(arr+5)<<endl;
    int i = 6;
    cout<<"10th: "<<arr[i]<<endl;
{
    int temp[10];

    cout<<sizeof(temp)<<endl;
    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;
}

    int a[20] = {1,2,3,5};
    cout<<"->"<<&a<<endl;
    cout<<"->"<<&a[0]<<endl;
    cout<<"->"<<a<<endl;

    int *ptr = &a[0];
    cout<<"->"<<&ptr<<endl;
{

    int arr[10];
    int *ptr = &arr[0];
    //ptr = ptr+1;
    //*(ptr+1);
    ptr++;
    cout<<ptr<<endl;


}

>>>>>>> 4fd8956 (files)
}