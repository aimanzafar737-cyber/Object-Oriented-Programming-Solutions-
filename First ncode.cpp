#include <iostream>
using namespace std;

// Create a class
class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Method to display student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create an object of Student class
    Student s1("Alice", 20);

    // Call the method
    s1.display();

    return 0;
}