#include <iostream>
#include <string>

using namespace std;

int main(){
    string buah[] = {"mangga", "jeruk", "anggur", "apel"};
    int length = sizeof(buah)/sizeof(*buah);
    string data_Cari;
    int hasil_cari = 0;
    cout << "Data Tersedia : " << endl;

    for(int i = 0; i < length; i++){
        cout << "Index ke-" << i << " = " << buah[i] << endl;
    }

    cout << "Data yang dicari : ";
    cin >> data_Cari;

    for(int i = 0; i < length; i++){
        if(data_Cari == buah[i]){
            hasil_cari++;
        }
    }

    if(hasil_cari == 0){
        cout << "Data tidak ditemukan" << endl;
    } else {
        cout << "Data " << data_Cari << " Ditemukan di : " << endl;
        for(int i = 0; i < length; i++){
            if(data_Cari == buah[i]){
                cout << "Index ke-" << i << endl;
            }
        }
    }

    return 0;
}