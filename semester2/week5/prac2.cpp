#include <iostream>
using namespace std;

struct phone {
    int code;
    string brand, model;
    float exchange_rate = 4100.0;
    float price, total_usd, total_khr , qty;

    void display() {
        cout << code << "\t" << brand << "\t" << model << "\t" 
             << total_usd << "\t" << total_khr << endl;
    }

    void inputInfo() {
        cout << "Code: ";
        cin >> code;
        cout << "Brand: ";
        cin >> brand;
        cout << "Model: ";
        cin >> model;
        cout << "Price in dollar: ";
        cin >> price;
        total_usd = price;
        total_khr = price * exchange_rate;
    }
};

int main() {

    phone phones[1000];
    int phoneCount = 0;
    int opt;

    while (true) {
        cout << "\t1. Input information of phone\n\t2. Display information of phone\n\t3. Exit\n";
        cout << "-----------------------------------------\n";
        cout << "Enter your option: ";
        cin >> opt;

        if (opt == 1) {
            int n;
            cout << "How many phones do you want to input? ";
            cin >> n;

            cout << "-----------------------------------------\n";
            for (int i = 0; i < n; i++) {
                cout << "Input phone: " << phoneCount + 1 << endl;
                phones[phoneCount].inputInfo();
                phoneCount++;
                cout << "-----------------------------------------\n";
            }
        } else if (opt == 2) {
            if (phoneCount == 0) {
                cout << "No phone information available. Please input data first." << endl;
            } else {
                cout << "\t>>>>>Output Phone Information<<<<<\n";
                cout << "-----------------------------------------\n";
                cout << "Code\tBrand\tModel\ttotal_usd\ttotal_khr\n";
                cout << "-----------------------------------------\n";
                for (int i = 0; i < phoneCount; i++) {
                    phones[i].display();
                }
                cout << "-----------------------------------------\n";
            }
        } else if (opt == 3) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}