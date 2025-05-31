#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX = 100;


void degerOlustur(int dizi[MAX][MAX], int satir, int sutun, int alt, int ust) {
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            dizi[i][j] = rand() % (ust - alt + 1) + alt;
        }
    }
}


void diziYazdir(int dizi[MAX][MAX], int satir, int sutun) {
    cout << "\nOlusturulan Dizi:\n";
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            cout << dizi[i][j] << "\t";
        }
        cout << endl;
    }
}


void grafikCiz(int dizi[MAX][MAX], int satir, int sutun) {
    int tekSayac = 0, ciftSayac = 0;

    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            if (dizi[i][j] % 2 == 0)
                ciftSayac++;
            else
                tekSayac++;
        }
    }

    cout << "\nGrafik:\n";
    cout << "Cift Sayilar (+): ";
    for (int i = 0; i < ciftSayac; ++i) {
        cout << "+";
    }

    cout << "\nTek Sayilar  (*): ";
    for (int i = 0; i < tekSayac; ++i) {
        cout << "*";
    }
    cout << endl;
}


int main() {
    srand(time(0));

    int satir, sutun, alt, ust;
    int dizi[MAX][MAX];

    cout << "Satir sayisini girin: ";
    cin >> satir;
    cout << "Sutun sayisini girin: ";
    cin >> sutun;
    cout << "Alt degeri girin: ";
    cin >> alt;
    cout << "Ust degeri girin: ";
    cin >> ust;

    degerOlustur(dizi, satir, sutun, alt, ust);
    diziYazdir(dizi, satir, sutun);
    grafikCiz(dizi, satir, sutun);

    return 0;
}
