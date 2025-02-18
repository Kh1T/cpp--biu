/* Abstraction involves hiding complex implementation details and 
exposing only the necessary features of an object.
This is achieved using abstract classes and interfaces.*/

#include <iostream>
using namespace std;

// Abstract class
class Shape {
    public:
    // Pure virtual function (must be overridden)
        virtual void draw() = 0; 
    };
    
    class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing a circle." << endl;
        }
    };
    
    class Square : public Shape {
    public:
        void draw() override {
            cout << "Drawing a square." << endl;
        }
    };
    
    int main() {
        Shape* shape1 = new Circle();
        Shape* shape2 = new Square();
    
        shape1->draw(); // Output: Drawing a circle.
        shape2->draw(); // Output: Drawing a square.
    
        delete shape1;
        delete shape2;
    
        return 0;
    }
