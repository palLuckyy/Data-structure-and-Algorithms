// deque 
#include<iostream> 
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for( int i :d) {
    cout<<i<<"  ";
    cout<<endl;
    }
    deque<int> a = {1,2,3,4,5,6};
    int size = a.size();
    cout<<"print "<<endl;
    for(int i = 0; i<size; i++) {
        cout<<a[i]<<" ";
        cout<<endl;
    }
    cout<<" print first index element "<<d.at(1);
    cout<<endl;
    cout<<" front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;
   
    

}
