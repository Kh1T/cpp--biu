// Array 
#include <iostream>
using namespace std;

int main () {
    int sum = 0;
    int list[5]= {100,10,30,60,500};

    for (int i=0; i<5; i++){
        cout << list[i] << endl;
        sum += list[i];
    }

    cout << "Sum: " << sum << endl; 

    return 0;
}