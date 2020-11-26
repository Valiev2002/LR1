#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    std::cout << "Hello" << endl;
    //zad 1
    double x;
    cout << "enter x value" << endl;
    cin >> x;
    double x_rez = x*x*x*x-2*x*x*x+1;
    cout.precision(3);

    //zad 2
    int a;
    cout << "enter a value" << endl;
    cin >> a;
    int a_rez =abs(a)+sqrt(a);
    cout << a_rez <<endl;
    cout.precision(1);
//zad 3
    bool m, n, l, k;
    cout << "enter k l m n value" << endl;
    cin >> k >> l >> m >> n;
    bool rez_3 = n&&l||(m xor k);
    cout << boolalpha << rez_3 << endl;
    //zad 4
    short int b;
    cout << "enter b value" << endl;
    cin >> b;
    int b_rez = pow(2, b);
    cout << dec << noshowpos << b_rez << endl;
    cout <<oct << b_rez << std::endl;
    //zad 5
    unsigned short int c, d, e, f;
    cout << "enter c d e f value" << endl;
    cin >> c >> d >> e >> f;
    unsigned short int rez_5 =d xor (c&&e)||f;
    cout << std::hex << setw(2) << showbase << rez_5 << endl;
    return 0;
}