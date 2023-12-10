#include <iostream>
#include <string>
using namespace std;

int main(){
    int jml_item;
    cout << "Isikan jumlah item = ";
    cin >> jml_item;
    int harga[jml_item];
    int jml_arr = sizeof(harga)/sizeof(*harga);
    int total;

    for(int i = 0; i < jml_item; i++){
        cout << "Harga item ke-" << i << " = ";
        cin >> harga[i];
    }

    cout << "===========================================" << endl;
    cout << "Jumlah item = " << jml_item << endl;

    for(int i = 0; i < jml_arr; i++){
        cout << "Item ke-" << i << " = Rp. " << harga[i] << endl;
        total += harga[i];
    }

    cout << "===========================================" << endl;
    cout << "Total harga Rp " << total << endl;

    return 0;
}