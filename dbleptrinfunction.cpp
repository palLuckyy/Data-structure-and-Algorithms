#include<iostream>
using namespace std;
void update(int **p2) {
    **p2  = **p2+1;
}
int main() {
    int i =5;
    int *p = &i;
    int **p2 = &p;

    cout<< endl << endl;

     cout<< " before update:"<< i <<endl;
     cout<< " before update:"<< *p <<endl;
     cout<< " before update:"<< **p2 <<endl;

     update(p2);

cout<< endl <<endl;

     cout<< " After update:"<< i <<endl;
     cout<< " After update:"<< *p <<endl;
     cout<< " Afte update:"<< **p2 <<endl;





}