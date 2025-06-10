#include <iostream>
using namespace std;

class Restaurant {
public:
    string code, name, seat_no;
    void get() {}
    double getPrice() {return 0.0;};
};

class Drink : public Restaurant {
public:
    string item;
    double price, qty;
    void get() {
        cout << "Enter Drink Item: ";
        cin >> item;
        cout << "Enter Drink Quantity: ";
        cin >> qty;
        cout << "Enter Price: ";
        cin >> price;
    }
    double getPrice()  {
        return price * qty;
    }
};

class Breakfast : public Restaurant {
public:
    string item;
    double price{}, qty{};
    bool include_drink{};
    void get() {
        cout << "Enter Breakfast Item: ";
        cin >> item;
        cout << "Enter Breakfast Price: ";
        cin >> price;
        cout << "Enter Item Quantity: ";
        cin >> qty;
        char choice;
        cout << "Include drink with breakfast? (y/n): ";
        cin >> choice;
        include_drink = (choice == 'y' || choice == 'Y');
    }
    double getPrice() const {
        return price * qty;
    }
};

class Dinner : public Restaurant {
public:
    bool include_beer{};
    double price{};
    void get() {
        char choice;
        cout << "Include beer with dinner? (y/n): ";
        cin >> choice;
        include_beer = (choice == 'y' || choice == 'Y');
        cout << "Enter Dinner Price: ";
        cin >> price;
    }
    double getPrice() const {
        return price;
    }
};

int main() {
    int opt;
    int breakfast_count = 0, drink_count = 0, dinner_count = 0;

    cout << "Enter 1 for Breakfast, 2 for Drink, 3 for Dinner, 4 Calculate Total, 5 Exit: ";
    cout << "Enter your option: ";
    cin >> opt;

    do {
        Dinner dinners[100];
        Drink drinks[100];
        Breakfast breakfasts[100];
        switch (opt) {
            case 1: {
                if (breakfast_count < 100) {
                    breakfasts[breakfast_count].get();
                    breakfast_count++;
                } else {
                    cout << "Breakfast array full!" << endl;
                }
                break;
            }
            case 2: {
                if (drink_count < 100) {
                    drinks[drink_count].get();
                    drink_count++;
                } else {
                    cout << "Drink array full!" << endl;
                }
                break;
            }
            case 3: {
                if (dinner_count < 100) {
                    dinners[dinner_count].get();
                    dinner_count++;
                } else {
                    cout << "Dinner array full!" << endl;
                }
                break;
            }
            case 4: {
                double total_breakfast = 0.0, total_drink = 0.0, total_dinner = 0.0;
                cout << "----- Invoice -----" << endl;

                cout << "Breakfasts:" << endl;
                for (int i = 0; i < breakfast_count; ++i) {
                    cout << "  " << breakfasts[i].item << " x" << breakfasts[i].qty
                        << " = " << breakfasts[i].getPrice()
                        << " (Include drink: " << (breakfasts[i].include_drink ? "Yes" : "No") << ")"
                        << endl;
                    total_breakfast += breakfasts[i].getPrice();
                }

                cout << "Drinks:" << endl;
                for (int i = 0; i < drink_count; ++i) {
                    cout << "  " << drinks[i].item << " x" << drinks[i].qty
                        << " = " << drinks[i].getPrice() << endl;
                    total_drink += drinks[i].getPrice();
                }

                cout << "Dinners:" << endl;
                for (int i = 0; i < dinner_count; ++i) {
                    cout << "  Dinner " << (i+1) << " = " << dinners[i].getPrice()
                        << " (Include beer: " << (dinners[i].include_beer ? "Yes" : "No") << ")"
                        << endl;
                    total_dinner += dinners[i].getPrice();
                }

                double grand_total = total_breakfast + total_drink + total_dinner;
                cout << "-------------------" << endl;
                cout << "Breakfast Total: " << total_breakfast << endl;
                cout << "Drink Total: " << total_drink << endl;
                cout << "Dinner Total: " << total_dinner << endl;
                cout << "Grand Total: " << grand_total << endl;
                break;
            }
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }

        cout << "Enter your option: ";
        cin >> opt;

    } while (opt != 5);
    cout << "Thank you for using the restaurant system!" << endl;

    return 0;
}