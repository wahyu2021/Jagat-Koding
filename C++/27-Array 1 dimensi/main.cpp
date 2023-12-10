#include <iostream>
#include <string>
using namespace std;

int main(){
    int jml_arr;
    int angka[] = {87,90,56,89,66, 99, 77};
    jml_arr = sizeof(angka)/sizeof(*angka);
    cout << jml_arr << endl;

    // menampilkan array dengan looping
    for(int i = 0; i < jml_arr; i++){
        cout << angka[i] << endl;
    }

    return 0;
}