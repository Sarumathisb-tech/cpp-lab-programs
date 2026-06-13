// ================================================
// Program 2: Classes and Objects
// Write a C++ program to demonstrate
// Constructor and Destructor using a Student class
// ================================================

#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:
    // Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        marks = 0;
        cout << "Default Constructor called\n";
    }

    // Parameterized Constructor
    Student(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
        cout << "Parameterized Constructor called for " << name << "\n";
    }

    // Copy Constructor
    Student(const Student& s) {
        name = s.name;
        age = s.age;
        marks = s.marks;
        cout << "Copy Constructor called for " << name << "\n";
    }

    void display() {
        cout << "\nName  : " << name << endl;
        cout << "Age   : " << age << endl;
        cout << "Marks : " << marks << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << "\n";
    }
};

int main() {
    Student s1;                          // Default constructor
    Student s2("Zhuvi", 18, 92.5);      // Parameterized constructor
    Student s3(s2);                      // Copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
