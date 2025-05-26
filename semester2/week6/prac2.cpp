#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const float exchange_rate = 4100;
int i = 0 , option , type;
class Car {
    private: 
        int car_code , car_year , car_qty;
        string car_name , car_color, car_madein;
        float car_price , paymentUsd , paymentKhr;
    public:
        void setcar() {
            cout << "====>>Input Car Information<<====" << endl;
            cout << "Enter Car Code: ";
            cin >> car_code;
            cout << "Enter Car Name: ";
            cin >> car_name;
            cout << "Enter Car Color: ";
            cin >> car_color;
            cout << "Enter Car Year: ";
            cin >> car_year;
            cout << "Enter Car Made In: ";
            cin >> car_madein;
            cout << "Enter Car Price: ";
            cin >> car_price;
            cout << "Enter Car Quantity: ";
            cin >> car_qty;
            cout << "-----------------------------------\n";

            paymentUsd = car_qty * car_price;
            paymentKhr = paymentUsd * exchange_rate;

        };
        void getcar() {
            cout << endl << endl;
            time_t timestamp;
            time(&timestamp);
            cout << ctime(&timestamp) << endl;
            cout << "====>> Invoice <<====" << endl;
            cout << "-----------------------------------\n";
            cout << "No\tCode\tName\tColor\tYear\tMade_In\tPrice\tQty\tTotal_Price(USD)\tTotal_Price(KHR)" << endl;
            cout << i+1 << "\t" << car_code << "\t" << car_name << "\t" << car_color << "\t" << car_year << "\t" << car_madein << "\t" 
                << car_price << "\t" << car_qty << "\t" 
                << paymentUsd << "\t" << paymentKhr  << endl;
            cout << "-----------------------------------\n";
        };

        void setMenu() {
            cout << "________Car Shop________" << endl;
            cout << "1. Input Car Info" << "\n";
            cout << "2. Show Car Info" << "\n";
            cout << "3. Search Car Info" << "\n";
            cout << "4. Update Car Info" << "\n";
            cout << "5. Delete Car Info" << "\n";
            cout << "6. Exit" << "\n";
            cout << "________________________" << endl;
            cout << "Enter your choice: ";
        }

};

int main() {
    system("cls");
    Car obj[20];
    obj[i].setMenu();
    cout << "Choose option: ";
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "--------Car Info--------" << endl;
        cout << "How many cars do you want to input: ";
        cin >> type;
        break;
    case 2:
    
    
    default:
        break;
    }
    obj[i].getcar();
    
    return 0;
}