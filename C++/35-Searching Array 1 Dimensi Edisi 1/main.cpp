#include <iostream>

using namespace std;

int main(){
    int angka[] = {10,3,6,2,1,7,8};
    int length = sizeof(angka)/sizeof(*angka);
    int data_Cari, hasil_cari = 0;
    cout << "Data Tersedia : " << endl;

    for(int i = 0; i < length; i++){
        cout << "Index ke-" << i << " = " << angka[i] << endl;
    }

    cout << "Data yang dicari : ";
    cin >> data_Cari;

    for(int i = 0; i < length; i++){
        if(data_Cari == angka[i]){
            hasil_cari++;
        }
    }

    if(hasil_cari == 0){
        cout << "Data tidak ditemukan" << endl;
    } else {
        cout << "Data " << data_Cari << " Ditemukan di : " << endl;
        for(int i = 0; i < length; i++){
            if(data_Cari == angka[i]){
                cout << "Index ke-" << i << endl;
            }
        }
    }

    return 0;
}