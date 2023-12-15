#include <iostream>
#include <cstdlib>
using namespace std;
bool withinRange(int x, int y) {
    return x >= 1 && x <= 8 && y >= 1 && y <= 8;
}

bool canBishopMove(int x1, int y1, int x2, int y2) {
    int deltaX = abs(x2 - x1);
    int deltaY = abs(y2 - y1);

    return deltaX == deltaY;
}

int main() {
    int x1, y1, x2, y2;
    setlocale(LC_ALL, "ukr");
    // «читуЇмо та перев≥р€Їмо координати першого пол€
    do {
        cout << "¬вед≥ть координати першого пол€ (x1 y1): ";
        cin >> x1 >> y1;
    } while (!withinRange(x1, y1));

    // «читуЇмо та перев≥р€Їмо координати другого пол€
    do {
        cout << "¬вед≥ть координати другого пол€ (x2 y2): ";
        cin >> x2 >> y2;
    } while (!withinRange(x2, y2));

    // ѕерев≥р€Їмо умову дл€ слона
    if (canBishopMove(x1, y1, x2, y2)) {
        cout << "—лон може перейти з одного пол€ на ≥нше за один х≥д." << endl;
    } else {
        cout << "—лон не може перейти з одного пол€ на ≥нше за один х≥д." << endl;
    }

    return 0;
}