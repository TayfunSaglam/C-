#include <iostream>
#include <vector>
#include <string>
#include<locale>

using namespace std;
// Tahta 3x3 bo� olarak ba�lat�l�yor
char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

// Ekran� temizle (platforma g�re)
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Tahtay� yazd�r
void printBoard() {
    clearScreen();
    cout << "\n    1   2   3\n";
    for (int i = 0; i < 3; ++i) {
        cout << " " << i + 1 << "  ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        if (i < 2) cout << "\n   ---+---+---\n";
    }
    cout << "\n\n";
}

// Kazanan kontrol�
bool checkWinner(char symbol) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
            return true;
        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)
            return true;
    }
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
        return true;
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
        return true;
    return false;
}

// Beraberlik kontrol�
bool isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return false;
    return true;
}

// Oyuncu hamlesi
void playerMove(string name, char symbol) {
    int row, col;
    while (true) {
        cout << name << " (" << symbol << ") hamleni yap (sat�r s�tun): ";
        cin >> row >> col;

        if (cin.fail() || row < 1 || row > 3 || col < 1 || col > 3) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Ge�ersiz giri�. L�tfen 1 ile 3 aras�nda iki say� girin.\n";
            continue;
        }

        if (board[row - 1][col - 1] == ' ') {
            board[row - 1][col - 1] = symbol;
            break;
        } else {
            cout << "Bu h�cre dolu! Ba�ka bir yer se�.\n";
        }
    }
}

// Oyun ba�lat
void startGame(string p1, string p2) {
    // Tahtay� s�f�rla
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = ' ';

    char currentSymbol = 'X';
    string currentPlayer = p1;

    while (true) {
        printBoard();
        playerMove(currentPlayer, currentSymbol);

        if (checkWinner(currentSymbol)) {
            printBoard();
            cout << "?? Tebrikler " << currentPlayer << ", oyunu kazand�n!\n\n";
            break;
        }

        if (isDraw()) {
            printBoard();
            cout << "?? Oyun berabere!\n\n";
            break;
        }

        // S�ra de�i�tir
        if (currentSymbol == 'X') {
            currentSymbol = 'O';
            currentPlayer = p2;
        } else {
            currentSymbol = 'X';
            currentPlayer = p1;
        }
    }
}

// Men�
void showMenu() {
    while (true) {
        int choice;
        string p1, p2;

        cout << "===== XOX (Tic-Tac-Toe) OYUNU =====\n";
        cout << "1. Oyuna Ba�la\n";
        cout << "2. Hakk�nda\n";
        cout << "3. ��k��\n";
        cout << "Se�iminiz: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Ge�ersiz se�im!\n\n";
            continue;
        }

        cin.ignore();

        if (choice == 1) {
            cout << "1. Oyuncu ad� (X): ";
            getline(cin, p1);
            cout << "2. Oyuncu ad� (O): ";
            getline(cin, p2);
            startGame(p1, p2);
        } else if (choice == 2) {
            cout << "\nBu oyun C++ ile yap�lm��t�r. 2 ki�ilik klasik XOX oyunudur.\n\n";
        } else if (choice == 3) {
            cout << "��k�l�yor...\n";
            break;
        } else {
            cout << "Ge�ersiz se�enek!\n";
        }
    }
}

int main() {
	setlocale(LC_ALL,"Turkish");

    showMenu();
    return 0;
}

