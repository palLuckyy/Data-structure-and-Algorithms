#include <iostream>
using namespace std;

class person {
public:
    string name;
    int age;

    person() {
        cout << "parent constructor.." << endl;
    }
};

class student : public person {
public:
    int rollno;

    student() {
        cout << "child class..." << endl;
    }

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno << endl;
    }
};

int main() {
    student s1;
    s1.name = "lucky";
    s1.age = 20;
    s1.rollno = 1234;
    s1.getInfo();
    return 0;
}
