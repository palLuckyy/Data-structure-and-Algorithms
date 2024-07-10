#include<iostream>
#include<Queue>
using namespace std;
int main() {
    queue<int> q;
    q.push(8);
    cout << "Front of queue: " << q.front() << endl;
    q.push(9);
    cout << "Front of queue: " << q.front() << endl;
    q.push(10);
    q.push(11);
    cout << "Size of queue: " << q.size() << endl;
    q.pop();
    cout << "Size of queue: " << q.size() << endl;
    q.pop();
    cout << "Size of queue: " << q.size() << endl;
    q.pop();
    if(q.empty()) {
        cout << "Queue is empty: " << endl;
    }
    else {
        cout << "Queue is not empty: " << endl;
    }
}