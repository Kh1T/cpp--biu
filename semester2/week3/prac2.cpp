// Array 
#include <iostream>
using namespace std;

int main () {
    int sum = 0;
    int list[5]= {100,10,30,60,500};
    int max = list[0];
    int min = list[0];
    for (int i=0; i<5; i++){
        if (list[i] > max){
            max = list[i];
        }
        if (list[i] < min){
            min = list[i];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}