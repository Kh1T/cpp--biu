#include <iostream>
using namespace std;

/*sum the input number as long as it is positive.*/
int main() {
    start:
    while (true) {
        long result , num ;
        cout << "\nEnter a number : " ;
        cin >> num ;
        if (num < 0) {
            cout << "\nThe Sum is :\t"<< result << endl;
            cout << "=====================================\n";
            result = 0;
            break;
        }
        result += num ;
    }
    goto start;
}