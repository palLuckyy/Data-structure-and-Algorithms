//vector : vector is a dynamic array (if vector size is full it creates another vector whose size is double of its previous size);


#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    cout<<" capacity->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<" capacity->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<" capacity->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<" capacity->"<<v.capacity()<<endl;
    cout<<"size->"<<v.size()<<endl;
    cout<<" Element at 2nd index "<< v.at(2)<<endl;
    cout<<" Element at 1st index "<< v.at(1)<<endl;
     cout<<" first element "<<v. front()<<endl;
     cout<<" last element "<<v. back()<<endl;
     cout<<" empty or not "<<v.empty()<<endl;
    
    vector<int> a(5,1);
    cout<<" print "<<endl;
    for (int i: a) {
        cout<<i<<"  ";
        cout<<endl;
    }
}