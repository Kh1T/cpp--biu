#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


/* number 1 : input 
	2 : output
	3 : End
	else Wrong option
	*/

int id, age , ops;
char gender;
string name , contact ;
float score;
    void input(){
        cout << "\t>>>>>Input Student Information<<<<<\n";
        cout << "\tStudent ID : ";
        cin >> id;
        cout << "\tName : ";
        cin >> name;
        cout << "\tGender : ";
        cin >> gender;
        cout << "\tAge : ";
        cin >> age;
        cout << "\tScore : ";
        cin >> score;
        cout << "\tContact : \n";
        cin >> contact;
    }
    void output(){
        cout << "\t>>>>>Output Student Information<<<<<\n";
        cout <<"Id"<<setw(15)<<"Name"<<setw(15)<<"Gender"<<setw(15)<<"Age"<<setw(15)<<"Score"<<setw(15)<<"Contact\n";
        cout <<id<<setw(15)<<name<<setw(15)<<gender<<setw(15)<<age<<setw(15)<<score<<setw(15)<<contact<<setw(15)<<endl;
    }

    bool login() {
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        return username == "admin" && password == "admin";
    }

int main() {
    if (!login()) {
        cout << "\nInvalid username or password" << endl;
        cout << "try again\n" << endl;
        login();
    }
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
            case 3:
                break;
            default :
                cout << "Wrong Option !!"<<endl;
        }
    } while (ops != 3);
    return 0;
}
