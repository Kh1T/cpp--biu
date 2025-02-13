/* Inheritance allows a class (derived class) to inherit 
properties and methods from another class (base class). 
This promotes code reuse and hierarchical classification.*/

#include <iostream>
using namespace std;

class Animal {
    public :
        void eat() {
            cout << "The animal is eating."<<endl;
        }
};

class Dog : public Animal { // Dog inherit from the Animal.
    public :
        void bark() {
            cout << "Woof! Woof!";
        }
};

int main() {
    
    Dog dog1;
    dog1.eat();
    dog1.bark();

    return 0;
}