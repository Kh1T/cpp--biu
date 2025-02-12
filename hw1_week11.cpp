#include <iostream>
using namespace std;

int main() {
    // system("cls");
    while (true) {
        long result , num ;
        cout << "Enter a number : " ;
        cin >> num ;
        if (num < 0) {
            cout << "The Sum is :\t"<< result << endl;
            break;
        }
        result += num ;
    }
}