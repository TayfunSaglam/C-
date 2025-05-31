#include <iostream>
#include <conio.h>
using namespace std;

// 3x3 matrisin determinantını hesaplayan fonksiyon
int determinant3x3(int mat[3][3]) {
    int det = 0;
    det = mat[0][0]*mat[1][1]*mat[2][2] + mat[1][0]*mat[2][1]*mat[0][2]+ 
	mat[2][0]*mat[0][1]*mat[1][2] - mat[0][2]*mat[1][1]*mat[2][0]-
	mat[1][2]*mat[2][1]*mat[0][0]-mat[2][2]*mat[0][1]*mat[1][0];
    return det;
}

int main() {
    int mat[3][3];

    cout << "3x3 matrisin elemanlarını giriniz:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "mat[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    int det = determinant3x3(mat);
    cout << "\nMatrisin determinanti: " << det << endl;

    getch();
	return 0;
}

