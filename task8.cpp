#include<iostream>
using namespace std;
main() {
    int h;
    int x, y;
    cout << "Enter the integer: ";
    cin >> h;
    cout << "Enter the x coordinate: ";
    cin >> x;
    cout << "Enter the y coordinate: ";
    cin >> y;

    if (x >= 0 && x <= 3 * h && (y >= 0 && y <= h) || (x >= h && x <= 2 * h) && (y >= h && y <= 4 * h)) {
        if (x % h == 0 || y % h == 0) {
            cout << "border";
        }
        else {
            cout << "inside";
        }
    }
    else {
        cout << "outside";
    }
}