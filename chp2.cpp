#include <iostream>
using namespace std;

class A {
private:
    int a;
public:
    void setA(int x) {
        a = x;
    };

};

int main () {
    A obj;
    obj.setA(10);
    cout << "Value of a is set using setter method." << endl;
    cout << A.a; // This will cause an error because 'a' is private and cannot be accessed directly
    return 0;
}