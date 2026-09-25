#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    //private properties or attributes
    int salary;

public:
    //properties or attributes
    string name;
    int age;
    string subject;

    //methods or member functions
    void setDetails(string n, int a, string s) {
        name = n;
        age = a;
        subject = s;
    };

    //setter
    void setSalary(int s) {
        salary = s;
    };

    //getter
    int getSalary() {
        return salary;
    };





};

int main() {
    Teacher t1;
    t1.name = "ram kishor";
    t1.age = 40;
    t1.subject = "OOPS";
    t1.setSalary(50000); // This is the correct way to set the salary
    t1.getSalary(); // This is the correct way to get the salary
    cout << t1.getSalary() << endl; // This will print the salary of the teacher
    return 0;
}