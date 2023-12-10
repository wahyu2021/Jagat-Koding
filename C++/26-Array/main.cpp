#include <iostream>
#include <string>
using namespace std;

int main(){
    // cara 1
    // int nilai[3] = {75,98,90};
    int nilai[3];
    string nama[3] = {"Dhea", "Fasya", "Nadhira"};

    // cara 2
    nilai[0] = 90;
    nilai[1] = 86;
    nilai[2] = 75;

    cout << nilai[0] << endl;
    cout << nilai[1] << endl;
    cout << nilai[2] << endl;

    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    
    return 0;
}