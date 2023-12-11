#include <iostream>

using namespace std;

int main(){
    int nilai[] = {7,3,5,10,12,1,2};
    int lenght = sizeof(nilai)/sizeof(*nilai);
    int temp;

    for(int i = 1; i < lenght; i++){
        for(int j = 0; j < lenght-i; j++){
            if(nilai[j] > nilai[j+1]){
                temp = nilai[j];
                nilai[j] = nilai[j+1];
                nilai[j+1] = temp;
            }
        }
        for(int k = 0; k < lenght; k++){
            cout << nilai[k] << " | ";
        }
        cout << endl;
    }

    cout << "Hasil Sorting : " << endl;

    for(int i = 0; i < lenght; i++){
        cout <<" " << nilai[i] << endl;
    }

    return 0;
}