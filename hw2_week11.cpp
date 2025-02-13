#include <iostream>
using namespace std;

/*លំហាត់មេគុណ*/
int main() {
    
    int mult_num;
    start:
    cout<<"\nInput a number for multiplier: ";
    cin >> mult_num;

    for (int i = 1 ; i <= 10 ; i++) {
        cout << mult_num << " x " << i << " = " << mult_num * i << endl;
    }
    goto start;

}