#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    cout<< "Nama: Ramadhani Maulidia Hilma"<< endl;
    cout<< "NIM : 22343028"<< endl;
    int A[3][3];

    for (int a=0;a<3;a++){
        for (int b=0;b<3;b++){
            cout <<"A["<<a<<"]["<<b<<"] = ";
            cin >> A[a][b];
        }
        cout<<endl;
    }
    for (int a=0;a<3;a++){
        for (int b=0;b<3;b++){
            cout << A[a][b]<< " ";
        }
        cout <<endl;
    }
    getch();
}
