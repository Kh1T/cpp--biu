#include <iostream>
using namespace std;
int n,i; // number of students
int id[20], age[20];
char gender[20];
string name[20] , contact[20];
void inputStu() {
    cout << "Input Student Information" << endl;
    cout << "How many students do you want to input? ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Input student " << i + 1 << endl;
        cout << "ID: ";
        cin >> id[i];
        cout << "Input ID: " << id[i];
        cout << "Name: ";
        cin >> name[i];
        cout << "Input Name: " << name[i];
        cout << "Age: ";
        cin >> age[i];
        cout << "Input Age: " << age[i];
        cout << "Gender: ";
        cin >> gender[i];
        cout << "Input Gender: " << gender[i];
        cout << "Contact: ";
        cin >> contact[i];
        cout << "Input Contact: " << contact[i];
        cout << endl;
    }
}
int main() {

    inputStu();
    return 0;
}