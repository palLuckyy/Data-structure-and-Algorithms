#include<iostream>
using namespace std;
class Teacher {
    //propertis public:
    private:
    double salery;

    public:
    string name;
    string dept;
    string subject;
    //method 
    void changedept(string newdept) {
       dept = newdept;
    }
    void changesubject(string newsubject) {
        subject = newsubject;
    }
    //setter:
    void setsalery(double s) {
        salery = s;
    }
    //getter
    double getsalery() {
        return salery;
    }
    class Account {
        private:
        double balance;
        string password;     //Datahiding
        public:
        string AccountID;
        string Username;

    };
};
int main() {
    Teacher t1; //constructor call:
    t1.name = "Lucky";
    t1.dept = "mechanical";
    t1.subject = "C++";
    t1.changedept("Computer science");
    t1.changesubject("OOPS");
    t1.setsalery(25000);
    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    cout << t1.getsalery() << endl;
    
}