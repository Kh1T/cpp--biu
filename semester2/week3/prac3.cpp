#include <iostream>
using namespace std;

int main () {
    int table[3][2] = { 
                        {10, 20}, 
                        {30, 40}, 
                        {50, 60} };
    int sum = 0;

    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            cout <<"index[" << i << "][" << j << "]"<< table[i][j] << " ";
            sum += table[i][j];
        }
        cout << endl;
        
    }
    cout << "Sum: " << sum << endl;


    return 0;
}