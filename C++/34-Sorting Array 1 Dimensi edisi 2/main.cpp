#include <iostream>

using namespace std;

int main(){
    int length;
    cout << "Masukkan jumlah index = ";
    cin >> length;

    int nilai[length];
    int temp;

    for(int i = 0; i < length; i++){
        cout << "Masukkan nilai index ke-" << i << " = ";
        cin >> nilai[i];
    }

    // menyortir nilai dan diurutkan dari yang terkecil ke yang terbesar
    for(int i = 1; i < length; i++){
        for(int j = 0; j < length-i; j++){
            if(nilai[j] > nilai[j+1]){
                temp = nilai[j];
                nilai[j] = nilai[j+1];
                nilai[j+1] = temp;
            }
        }
    }

    cout << "==========================================" << endl;
    cout << "\nHasil Sorting : " << endl;

    // menampilkan nilai yang sudah di sorting
    for(int i = 0; i < length; i++){
        cout <<" " << nilai[i] << " ";
    }

    return 0;
}