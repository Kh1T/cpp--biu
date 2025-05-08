#include <iostream>
using namespace std;

int n,i; // number of students
int id[20], age[20];
char gender[20];
string name[20] , contact[20];
int option_search;
void inputStu() {
    cout << "\t>>>>>Input Student Information<<<<<\n";
    cout << "Student ID\tStudent Name\tStudent Age\tStudent Gender\tStudent Contact\n";
    cout << "-----------------------------------------\n";
    int n;
    cout << "How many students do you want to input? ";
    cin >> n;
    cout << "-----------------------------------------\n";
    for (int i=0; i<n; i++){
        cout << "Input student " << i + 1 << endl;
        cout << "ID: ";
        cin >> id[i];
        cout << "Name: ";
        cin >> name[i];
        cout << "Age: ";
        cin >> age[i];
        cout << "Gender: ";
        cin >> gender[i];
        cout << "Contact: ";
        cin >> contact[i];
    }
    cout << "-----------------------------------------\n";
}

void display(){
    cout << "\t>>>>>Output Student Information<<<<<\n";
    cout << "Student ID\tStudent Name\tStudent Age\tStudent Gender\tStudent Contact\n";
    cout << "-----------------------------------------\n";
    for (int i=0; i<3; i++){
        cout << id[i] << "\t\t" << name[i] << "\t\t" << age[i] << "\t\t" << gender[i] << "\t\t" << contact[i] << endl;
    }
}


void search() {
    cout << "\t>>>>>Search Student Information<<<<<\n";
    cout << "1. Search by ID\n";
    cout << "2. Search by Name\n";
    
    switch (option_search)
    {
    case 1: {
        cout << "Enter ID to search: ";
        int search_id;
        cin >> search_id;
        for (int i=0; i<3; i++){
            if (id[i] == search_id){
                cout << "Student ID: " << id[i] << endl;
                cout << "Student Name: " << name[i] << endl;
                cout << "Student Age: " << age[i] << endl;
            }
        }
        break;
    }
    case 2: {
        cout << "Enter Name to search: ";
        string search_name;
        cin >> search_name;
        for (int i=0; i<3; i++){
            if (name[i] == search_name){
                cout << "Student ID: " << id[i] << endl;
                cout << "Student Name: " << name[i] << endl;
                cout << "Student Age: " << age[i] << endl;
            }
        }
        break;
    }
    default:
        cout << "Invalid option. Please try again." << endl;
        break;
    }
}

void update() {
    cout << "\t>>>>>Update Student Information<<<<<\n";
    cout << "Enter ID to update: ";
    int update_id;
    cin >> update_id;

    for (int i = 0; i < 3; i++) {
        if (id[i] == update_id) {
            cout << "Student found. Choose an option to update:\n";
            cout << "1. Update ID only\n";
            cout << "2. Update Name only\n";
            cout << "3. Update Age only\n";
            cout << "4. Update Gender only\n";
            cout << "5. Update Contact only\n";
            cout << "6. Update all fields\n";
            cout << "Enter your option: ";
            int option;
            cin >> option;

            switch (option) {
                case 1:
                    cout << "Enter new ID: ";
                    cin >> id[i];
                    break;
                case 2:
                    cout << "Enter new Name: ";
                    cin >> name[i];
                    break;
                case 3:
                    cout << "Enter new Age: ";
                    cin >> age[i];
                    break;
                case 4:
                    cout << "Enter new Gender: ";
                    cin >> gender[i];
                    break;
                case 5:
                    cout << "Enter new Contact: ";
                    cin >> contact[i];
                    break;
                case 6:
                    cout << "Enter new ID: ";
                    cin >> id[i];
                    cout << "Enter new Name: ";
                    cin >> name[i];
                    cout << "Enter new Age: ";
                    cin >> age[i];
                    cout << "Enter new Gender: ";
                    cin >> gender[i];
                    cout << "Enter new Contact: ";
                    cin >> contact[i];
                    break;
                default:
                    cout << "Invalid option. No changes made." << endl;
            }
            return; 
        }
    }
    cout << "Student not found. No changes made." << endl;
}

void deleteStudent() {
    cout << "\t>>>>>Delete Student Information<<<<<\n";
    cout << "Enter ID to delete: ";
    int delete_id;
    cin >> delete_id;

    for (int i = 0; i < 3; i++) {
        if (id[i] == delete_id) {
            id[i] = -1; // Mark as deleted
            cout << "Student with ID " << delete_id << " deleted." << endl;
            return;
        }
    }
    cout << "Student not found. No changes made." << endl;
}

int main() {
    cout << "\t>>>>>Student Information System<<<<<\n";
    cout << "1. Input Student Information\n";
    cout << "2. Display Student Information\n";
    cout << "3. Search Student Information\n";
    cout << "4. Update Student Information\n";
    cout << "5. Exit\n";
    cout << "Enter your option: ";
    int option;
    cin >> option;

    switch (option) {
        case 1:
            inputStu();
            break;
        case 2:
            display();
            break;
        case 3:
            cout << "Enter search option (1 for ID, 2 for Name): ";
            cin >> option_search;
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            cout << "Exiting the program." << endl;
            return 0;
        case 6:
            deleteStudent();
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
    }
    cout << "Do you want to continue? (1 for Yes, 0 for No): ";
    int continue_option;
    cin >> continue_option;
    if (continue_option == 1) {
        main();
    } else {
        cout << "Exiting the program." << endl;
        cout << "Thank you for using the Student Information System!" << endl;
        cout << "Goodbye!" << endl;
        cout << "-----------------------------------------\n";
    }
    return 0;
}