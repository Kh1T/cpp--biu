#include <iostream>
#include <iomanip>
using namespace std;

class Car {
    public: 
        int car_code , car_year , car_qty;
        string car_name , car_color, car_madein;
        float car_price , payment;

};

int main() {

    Car obj1;
    obj1.car_code = 10;
    obj1.car_color = "Green";
    obj1.car_year = 2022;
    obj1.car_qty = 5;
    obj1.car_name = "Toyota";
    obj1.car_madein = "Japan";
    obj1.car_price = 1000.00;

    cout << fixed << showpoint<< setprecision(2);
    cout << "Car Code: " << obj1.car_code << endl;
    cout << "Car Name: " << obj1.car_name << endl;
    cout << "Car Color: " << obj1.car_color << endl;
    cout << "Car Year: " << obj1.car_year << endl;
    cout << "Car Made In: " << obj1.car_madein << endl;
    cout << "Car Price: " << obj1.car_price << endl;
    cout << "Car Quantity: " << obj1.car_qty << endl;
    obj1.payment = obj1.car_price * obj1.car_qty;
    cout << "Total Payment: " << obj1.payment << endl;

    return 0;
}