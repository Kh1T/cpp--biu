#include <iostream>
using namespace std;

struct student {
    int id;
    string name;
    int age;
    float score1, score2, score3 , average;
};

struct grade {
    char letter;
    float minScore;
};
    grade grades[6] = {
        {'A', 90.0},
        {'B', 80.0},
        {'C', 70.0},
        {'D', 60.0},
        {'E', 50.0},
        {'F', 0.0}
    };

int main() {
// Grade A-> F using Struct
    student newStudent;
    cout << "-----------------------------------------\n";
    cout << "\t>>>>>Input Student Information<<<<<\n";
    cout << "-----------------------------------------\n";
    cout << "Enter Student ID: ";
    cin >> newStudent.id;
    cout << "Enter Student Name: ";
    cin >> newStudent.name;
    cout << "Enter Student Age: ";
    cin >> newStudent.age;
    cout << "Enter Student Score 1: ";
    cin >> newStudent.score1;
    if (newStudent.score1 < 0 || newStudent.score1 > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        system("clear");
        main();
    }
    cout << "Enter Student Score 2: ";
    cin >> newStudent.score2;
    if (newStudent.score2 < 0 || newStudent.score2 > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        system("clear");
        main();
    }
    cout << "Enter Student Score 3: ";
    cin >> newStudent.score3;
    if (newStudent.score3 < 0 || newStudent.score3 > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        system("clear");
        main();
    }
    cout << "-----------------------------------------\n";
    newStudent.average = (newStudent.score1 + newStudent.score2 + newStudent.score3) / 3;

    cout << "\t>>>>>Output Student Information<<<<<\n";
    cout << "-----------------------------------------\n";
    cout << "Student ID: " << newStudent.id << endl;
    cout << "Student Name: " << newStudent.name << endl;
    cout << "Student Age: " << newStudent.age << endl;
    cout << "Student Score 1: " << newStudent.score1 << endl;
    cout << "Student Score 2: " << newStudent.score2 << endl;   
    cout << "Student Score 3: " << newStudent.score3 << endl;
    cout << "Average Score: " << newStudent.average << endl;
    cout << "Student Grade: ";
    for (int i = 0; i < 6; i++) {
        if ( newStudent.average >= grades[i].minScore) {
            cout << grades[i].letter << endl;
            break;
        }
    }
    cout << "-----------------------------------------\n";


    return 0;
}