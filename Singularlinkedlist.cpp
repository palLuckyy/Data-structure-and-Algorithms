#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
    //insertion at start:
    Node (int value) 
    {
        data = value;
        next = nullptr;
    }

};
/*int main() {
    Node * Head;
    Head = nullptr;
    int arr[] = {2,4,6,8,10};
    for(int i = 0; i<5; i++) {
        if ( Head == nullptr) {
            Head = new Node(arr[i]);
        }
        else {
            Node* temp;
            temp = new Node(arr[i]);
            temp-> next = Head;
            Head = temp;
        }
    }
    //print
    Node*temp = Head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
  
}*/
//Insertion for end:
int main() {
    Node* Head , *Tail;
    Tail = Head = nullptr;
    int arr[] = {2,4,6,8,10};
    for(int i = 0; i<5; i++) {
        if(Head == nullptr) {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;

        }
    }
    //print
    Node*temp = Head;
    while(temp) {
        cout << temp->data << "  ";
        temp = temp-> next;
    }
}
