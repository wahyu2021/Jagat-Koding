#include <iostream>
#include <string>
using namespace std;

int main(){
    int angka[8];

    // menghitung jumlah nilai yang ada di array
    int jml_arr = sizeof(angka)/sizeof(*angka);
    
    for(int i = 0; i < jml_arr; i++){
        cout << "Masukkan Index ke-" << i << " : ";
        cin >> angka[i];
    }

    cout << "====================================================================" << endl;
    cout << "Nilai yang tersimpan" << endl;
    cout << "====================================================================" << endl;

    for(int i = 0; i < jml_arr; i++){
        cout << "Nilai dari index ke-" << i << " Adalah " << angka[i] << endl;
    }

    return 0;
}