/*Polymorphism allows objects of different classes to be treated 
as objects of a common base class. It enables methods to behave 
differently based on the object that invokes them. 
This is achieved through function overriding and virtual functions.*/

#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void speak() { // virtual function
            cout << "Animal Speak" << endl;
        }

};

class Dog : public Animal {
    public:
        void speak() override {
            cout << "Woof! woof!"<< endl;
        }
};

class Cat : public Animal {
    public:
        void speak() override {
            cout << "Meow! Meow!"<< endl;
        }
};

int main () {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->speak();
    animal2->speak();

    return 0;

};