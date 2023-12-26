#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int max = 5;
    int top = -1;
    string keranjang[max];
    string temp;
    int pilihan;
    int no_index;

    do{
        cout << "Pilihan \n1. Tambah\n2. Ubah\n3. Selesai\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        system("cls");
        switch(pilihan){
            case 1:
                if(top == max - 1){
                    cout << "Keranjang penuh" << endl;
                } else{
                    top++;
                    cout << "Masukkan isi : ";
                    cin >> keranjang[top];
                    cout << "data " << keranjang[top] << " berhasil ditambahkan" << endl;
                }
                break;
            case 2:
                cout << "nomor data yang di ubah : ";
                cin >> no_index;
                cout << "index awal : " << keranjang[no_index-1] << endl;
                cout << "index baru : ";
                cin >> temp;
                keranjang[no_index-1] = temp;
                break;
            case 3:
                pilihan = 3;
                break;
            default:
                cout << "Pilihan salah" << endl;
                break;
        }
        cout << "========================================================" << endl;
        cout << "isi keranjang saat ini : " << endl;
        for(int i = 0; i <= top; i++){
            cout << i+1 << ". " << keranjang[i] << endl;
        }
        cout << "========================================================" << endl;
    } while(pilihan != 3);
    
    cout << "Program Selesai" << endl;

    return 0;
}