#include <iostream>

using namespace std;

int main(){
    int jml_index;
    cout << "Masukkan jumlah data = ";
    cin >> jml_index;

    float nilai[jml_index], total, average;

    for(int i = 0; i < jml_index; i++){
        cout << "Data ke-" << i << " = ";
        cin >> nilai[i];
        total += nilai[i];
    }

    cout << "Total nilai = " << total << endl;
    average = total/jml_index;
    cout << "Rata-rata   = " << average << endl;

    return 0;
}