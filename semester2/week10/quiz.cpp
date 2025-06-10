// ==================== Part 1 ====================
// This part includes the necessary header and defines the base class 'Restaurant'
// and the derived class 'Drink'. These classes provide the structure for menu items
// and their basic input and price calculation methods.
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

// ==================== Part 2 ====================
// This part defines the 'Breakfast' and 'Dinner' classes, which inherit from 'Restaurant'.
// 'Breakfast' adds fields for item, price, quantity, and drink inclusion.
// 'Dinner' inherits from 'Breakfast' and adds a beer inclusion option.
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

class Dinner : public Breakfast {
public:
    bool include_beer{};

    void get() {
        cout << "Enter Dinner Item: ";
        cin >> item;
        cout << "Enter Dinner Price: ";
        cin >> price;
        cout << "Enter Item Quantity: ";
        cin >> qty;
        char choice;
        cout << "Include beer with dinner? (y/n): ";
        cin >> choice;
        include_beer = (choice == 'y' || choice == 'Y');
        include_drink = false;
    }

    double getPrice() const {
        return Breakfast::getPrice();
    }
};

// ==================== Part 3 ====================
// This part contains the function to display the main menu to the user.
// It prints the available options for the restaurant system.
void displayMenu() {
    cout << "\n" << string(50, '=') << endl;
    cout << "|" << string(48, ' ') << "|" << endl;
    cout << "|" << string(15, ' ') << "RESTAURANT SYSTEM" << string(15, ' ') << "|" << endl;
    cout << "|" << string(48, ' ') << "|" << endl;
    cout << string(50, '=') << endl;
    cout << "| [1] Breakfast                              |" << endl;
    cout << "| [2] Drink                                  |" << endl;
    cout << "| [3] Dinner                                 |" << endl;
    cout << "| [4] Calculate Total & Show Invoice         |" << endl;
    cout << "| [5] Exit                                   |" << endl;
    cout << string(50, '=') << endl;
    cout << "Enter your choice: ";
}

// ==================== Part 4 ====================
// This part starts the main function, declares variables and arrays to store menu items,
// and displays the welcome message and initial menu.
int main() {
    int opt;
    int breakfast_count = 0, drink_count = 0, dinner_count = 0;

    Dinner dinners[100];
    Drink drinks[100];
    Breakfast breakfasts[100];

    cout << "\n" << string(60, '*') << endl;
    cout << "*" << string(58, ' ') << "*" << endl;
    cout << "*" << string(18, ' ') << "WELCOME TO IceTea RESTAURANT" << string(9, ' ') << "*" << endl;
    cout << "*" << string(58, ' ') << "*" << endl;
    cout << string(60, '*') << endl;

    displayMenu();
    cin >> opt;

// ==================== Part 5 ====================
// This part contains the main menu loop, handling user input for adding items,
// displaying the invoice, and managing the flow of the program.
    do {
        switch (opt) {
            case 1: {
                cout << "\n" << string(40, '-') << endl;
                cout << "BREAKFAST SECTION" << endl;
                cout << string(40, '-') << endl;
                if (breakfast_count < 100) {
                    breakfasts[breakfast_count].get();
                    breakfast_count++;
                    cout << "\nBreakfast item added successfully!" << endl;
                    cout << "Total breakfast items: " << breakfast_count << endl;
                } else {
                    cout << "Breakfast array full!" << endl;
                }
                break;
            }
            case 2: {
                cout << "\n" << string(40, '-') << endl;
                cout << "DRINK SECTION" << endl;
                cout << string(40, '-') << endl;
                if (drink_count < 100) {
                    drinks[drink_count].get();
                    drink_count++;
                    cout << "\nDrink item added successfully!" << endl;
                    cout << "Total drink items: " << drink_count << endl;
                } else {
                    cout << "Drink array full!" << endl;
                }
                break;
            }
            case 3: {
                cout << "\n" << string(40, '-') << endl;
                cout << "DINNER SECTION" << endl;
                cout << string(40, '-') << endl;
                if (dinner_count < 100) {
                    dinners[dinner_count].get();
                    dinner_count++;
                    cout << "\nDinner item added successfully!" << endl;
                    cout << "Total dinner items: " << dinner_count << endl;
                } else {
                    cout << "Dinner array full!" << endl;
                }
                break;
            }
            case 4: {
                double total_breakfast = 0.0, total_drink = 0.0, total_dinner = 0.0;

                cout << "\n" << string(65, '=') << endl;
                cout << "=" << string(63, ' ') << "=" << endl;
                cout << "=" << string(25, ' ') << "INVOICE" << string(25, ' ') << "=" << endl;
                cout << "=" << string(63, ' ') << "=" << endl;
                cout << string(65, '=') << endl;

                // Breakfast section
                cout << "\nBREAKFAST ITEMS:" << endl;
                cout << string(45, '-') << endl;
                if (breakfast_count > 0) {
                    for (int i = 0; i < breakfast_count; ++i) {
                        double itemTotal = breakfasts[i].getPrice();
                        cout << "| " << (i+1) << ". " << breakfasts[i].item
                             << " (x" << breakfasts[i].qty << ")" << endl;
                        cout << "|    Price: $" << breakfasts[i].price
                             << " | Subtotal: $" << itemTotal << endl;
                        cout << "|    Drink included: " << (breakfasts[i].include_drink ? "Yes" : "No") << endl;
                        cout << "|" << string(43, '-') << "|" << endl;
                        total_breakfast += itemTotal;
                    }
                    cout << "| BREAKFAST TOTAL: $" << total_breakfast << string(25 - to_string(total_breakfast).length(), ' ') << "|" << endl;
                } else {
                    cout << "| No breakfast items ordered" << string(18, ' ') << "|" << endl;
                    cout << "| BREAKFAST TOTAL: $0.00" << string(20, ' ') << "|" << endl;
                }
                cout << string(45, '-') << endl;

                // Drinks section
                cout << "\nDRINK ITEMS:" << endl;
                cout << string(45, '-') << endl;
                if (drink_count > 0) {
                    for (int i = 0; i < drink_count; ++i) {
                        double itemTotal = drinks[i].getPrice();
                        cout << "| " << (i+1) << ". " << drinks[i].item
                             << " (x" << drinks[i].qty << ")" << endl;
                        cout << "|    Price: $" << drinks[i].price
                             << " | Subtotal: $" << itemTotal << endl;
                        cout << "|" << string(43, '-') << "|" << endl;
                        total_drink += itemTotal;
                    }
                    cout << "| DRINKS TOTAL: $" << total_drink << string(28 - to_string(total_drink).length(), ' ') << "|" << endl;
                } else {
                    cout << "| No drink items ordered" << string(22, ' ') << "|" << endl;
                    cout << "| DRINKS TOTAL: $0.00" << string(24, ' ') << "|" << endl;
                }
                cout << string(45, '-') << endl;

                // Dinner section
                cout << "\nDINNER ITEMS:" << endl;
                cout << string(45, '-') << endl;
                if (dinner_count > 0) {
                    for (int i = 0; i < dinner_count; ++i) {
                        double itemTotal = dinners[i].getPrice();
                        cout << "| " << (i+1) << ". " << dinners[i].item
                             << " (x" << dinners[i].qty << ")" << endl;
                        cout << "|    Price: $" << dinners[i].price
                             << " | Subtotal: $" << itemTotal << endl;
                        cout << "|    Beer included: " << (dinners[i].include_beer ? "Yes" : "No") << endl;
                        cout << "|" << string(43, '-') << "|" << endl;
                        total_dinner += itemTotal;
                    }
                    cout << "| DINNER TOTAL: $" << total_dinner << string(28 - to_string(total_dinner).length(), ' ') << "|" << endl;
                } else {
                    cout << "| No dinner items ordered" << string(21, ' ') << "|" << endl;
                    cout << "| DINNER TOTAL: $0.00" << string(24, ' ') << "|" << endl;
                }
                cout << string(45, '-') << endl;

                double grand_total = total_breakfast + total_drink + total_dinner;
                cout << "\n" << string(45, '=') << endl;
                cout << "|" << string(43, ' ') << "|" << endl;
                cout << "| GRAND TOTAL: $" << grand_total << string(25 - to_string(grand_total).length(), ' ') << "|" << endl;
                cout << "|" << string(43, ' ') << "|" << endl;
                cout << string(45, '=') << endl;
                cout << "\nThank you for your order!" << endl;
                break;
            }
            case 5:
                // ==================== Part 6 ====================
                // This part handles the exit option, displaying a thank you message and ending the program.
                cout << "\n" << string(50, '*') << endl;
                cout << "*" << string(48, ' ') << "*" << endl;
                cout << "*" << string(12, ' ') << "Thank you for visiting!" << string(11, ' ') << "*" << endl;
                cout << "*" << string(15, ' ') << "Come back soon!" << string(18, ' ') << "*" << endl;
                cout << "*" << string(48, ' ') << "*" << endl;
                cout << string(50, '*') << endl;
                break;
            default:
                cout << "\nInvalid option. Please try again." << endl;
        }

        if (opt != 5) {
            cout << "\n";
            displayMenu();
            cin >> opt;
        }

    } while (opt != 5);

    return 0;
}