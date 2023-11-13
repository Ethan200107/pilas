// pilas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stack>
using namespace std;

// Torres de Hanoi

void hanoi(int num, char o, char d, char a) {
    if (num == 1) {
        cout << "Se mueve el Disco " << num << " desde " << o << " hasta " << d << endl;
    }
    else {
        hanoi(num - 1, o, a, d);
        cout << "Se mueve el Disco " << num << " desde " << o << " hasta " << d << endl;
        hanoi(num - 1, a, d, o);
    }
}

int main() {
    int n;
    char A, B, C;

    cout << "Las clavijas son A, B y C" << endl;
    cout << "Número de discos: ";
    cin >> n;

    hanoi(n, 'A', 'C', 'B');

    cout << "En total se resuelve con " << n << " discos." << endl;
    cout << "Con la cantidad de movimientos: " << pow(2, n) - 1 << endl;

    return 0;
}