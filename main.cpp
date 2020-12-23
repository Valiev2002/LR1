#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    cout << "Hello!" << endl;
    cout << "Exercise 1 ";
    cout << "Enter x: ";
    int x;
    cin >> x;
    cout << showpos << pow(x, 5) - 2 * pow(x, 4) + 1 << "\n" << endl;
    cout.precision(3);
    cout << "Exercise 3 ";
    bool m, n, l, k;
    cout << "enter k " << endl;
    cout << "enter l " << endl;
    cout << "enter m " << endl;
    cout << "enter n " << endl;
    cin >> k >> l >> m >> n;
    bool rez_3 = n && l || (m xor k);
    cout << boolalpha << rez_3 << endl;
    cout << "Exercise 4" << endl;
    short b;
    b = pow(2, b);
    cin >> b;
    cout << "The end of the task 4.\n";
    cout << "Exercise 5 ";
    unsigned short int c, d, e, f;
    cout << "enter c value" << endl;
    cout << "enter d value" << endl;
    cout << "enter e value" << endl;
    cout << "enter f value" << endl;
    cin >> c >> d >> e >> f;
    unsigned short int rez_5 =d xor (c&&e)||f;
    cout << hex << setw(2) << showbase << rez_5 << endl;
    cout << "The end of the task 5.\n"  << endl;
    return 0;
}

