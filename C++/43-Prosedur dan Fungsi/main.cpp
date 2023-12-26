#include <iostream>
using namespace std;

void siswa();
string siswi();

int main(){
    siswa();
    cout << siswi() << endl;

    return 0;
}

// ==========================================================================================================
void siswa(){
    string nama ="alex";
    string jenis_kelamin = "Laki-laki";
    cout << nama << " adalah " << jenis_kelamin << endl;
}

string siswi(){
    string nama = "alexa";
    string jenis_kelamin = "Perempuan";
    return (nama + " adalah seorang " + jenis_kelamin);
}