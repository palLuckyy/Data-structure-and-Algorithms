#include<iostream>
using namespace std;
class student {
    public:
    string name;
    double* cgpaptr;
    student(string name , double cgpa) {
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    student(student &obj) {
        this->name = obj.name;
        this->cgpaptr = obj.cgpaptr;
    }
    //destructor
    ~student() {
        cout << "hiii i'm delete everything..." << endl;
        delete cgpaptr;
    }
    void getInfo() {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }
};
int main () {
    student s1("Lucky" , 8.9);
    student s2(s1);
    s1.getInfo();
    *(s2.cgpaptr) = 9.2;
    s1.getInfo();
    s2.name = "neha";
    s2.getInfo();
    return 0;

}