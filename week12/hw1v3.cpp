#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;


/* number 1 : input 
	2 : output
	3 : End
	else Wrong option
	*/

int ops;

struct Student
{
    int id, age;
    char gender;
    string name , contact ;
    float score;
};


vector<Student> students;
    void input(){
        Student student;
        cout << "\t>>>>>Input Student Information<<<<<\n";
        cout << "\tStudent ID : ";
        cin >> student.id;
        cout << "\tName : ";
        cin >> student.name;
        cout << "\tGender : ";
        cin >> student.gender;
        cout << "\tAge : ";
        cin >> student.age;
        cout << "\tScore : ";
        cin >> student.score;
        cout << "\tContact : ";
        cin >> student.contact;

        students.push_back(student);
    }
    void output(){
        cout << "\t>>>>>Output Student Information<<<<<\n";
        cout << setw(5) << "ID" << setw(15) << "Name" << setw(10) << "Gender" << setw(5) << "Age" << setw(10) << "Score" << setw(20) << "Contact" << endl;
        cout << "---------------------------------------------------------------" << endl;
        for (const auto& student : students) {
            cout << setw(5) << student.id << setw(15) << student.name << setw(10) << student.gender << setw(5) << student.age << setw(10) << student.score << setw(20) << student.contact << endl;
        }
        cout << "---------------------------------------------------------------" << endl;
    }
    bool login() {
        string username, password;
        bool satified;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        satified = username == "admin" && password == "admin";
        return satified;
    }

int main() {
    if (!login()) {
        cout << "\nInvalid username or password" << endl;
        cout << "try again\n" << endl;
        login();
    }
    cout << "Login Successful\n" << endl;
    do {
        cout << "\nPlease Choose a number : \n1 for input. \n2 for output \n3 for end.\n"<< endl;
        cin >> ops;
        switch (ops) {
            case 1:
                input();
                break;
            case 2:
                output();
                break;
            default :
                cout << "Wrong Option !!"<<endl;
        }
    } while (ops != 3);
    return 0;
}
