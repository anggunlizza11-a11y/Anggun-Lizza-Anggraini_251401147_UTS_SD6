#include <iostream>
using namespace std;

int main(){
    system ("cls");
    int data[2][3][4];

    cout << "masukkan angka:" << endl;

    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<4; k++){
                cin >> data[i][j][k];
            }
        }
    }

    cout << "hasil:" << endl;
    cin >> i+j+k%2;
    
    for (int i=0; i<2; i++){
        cout << "rata rata lapisan:" << endl;
        
        for (int j=0; j<3; j++){
            for (int k=0; k<4; k++){
                cout << data[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}