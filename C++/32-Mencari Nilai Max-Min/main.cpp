#include <iostream>

using namespace std;

int main(){
   int jml_index, maks, minim, nilai;
   
   cout << "Banyak data = ";
   cin >> jml_index;

    for (int i = 1; i <= jml_index; i++){
        cout << "Masukkan Data ke-" << i << " = ";
        cin >> nilai;
        if(i == 1){
            maks = nilai;
            minim = nilai;
        } else {
            if(nilai > maks){
                maks = nilai;
            } else if(nilai < minim){
                minim = nilai;
            }
        }
    }

    cout << "Nilai maksimal = " << maks << endl;
    cout << "Nilai minimum  = " << minim << endl;

    return 0;
}