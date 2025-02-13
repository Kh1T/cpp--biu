#include <iostream>
#include <string>

using namespace std;

class Person {

    public :
        string name;
        int age;

        void greet() {
            cout<<"My name is "<< name<< endl;
            cout<<"I'm "<< age;
        }
};

int main () {

    Person person1;

    cout << "Input Person name :";
    cin >> person1.name;
    cout << "Input Person age :";
    cin >> person1.age;

    person1.greet();

    return 0;
};