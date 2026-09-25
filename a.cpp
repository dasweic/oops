#include <iostream>
#include <string>
using namespace std;

class Teacher {
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
};

int main() {
    Teacher t1;
    t1.name = "ram kishor";
    t1.age = 40;
    t1.subject = "OOPS";
    cout << "Teacher Name: " << t1.name << endl;
    cout << "Teacher Age: " << t1.age << endl;
    cout << "Teacher Subject: " << t1.subject << endl;
    return 0;
}