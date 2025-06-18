
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "=== Pyramid Pattern Generate ===\n\n";

    int row;
    while (true) {
        cout << "Enter the number of rows (1 to 50): ";
        cin >> row;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid input! Please enter a number.\n";
            continue;
        }

        if (row < 1 || row > 50) {
            cout << "Please enter a number between 1 and 50.\n";
            continue;
        }

        break;
    }

    for (int i = 1; i <= row; i++) {
        for (int space = 1; space <= row - i; space++) {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
