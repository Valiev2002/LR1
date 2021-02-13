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
    cout << showpos << pow(x, 4) - 2 * pow(x, 3) + 1 << "\n" << endl;
    cout.precision(3);
    cout<<"Exersise 2 "<<endl;
    int a;
    cin>>a;
    cout<<showpos<<abs(a)+sqrt(a)<<endl;
    cout.precision(1);
    cout << "Exercise 3 ";
    bool m, n, l, k;
    cout << "enter k " << endl;
    cout << "enter l " << endl;
    cout << "enter m " << endl;
    cout << "enter n " << endl;
    cin >> k >> l >> m >> n;
    bool rez_3 = n && l || (!m xor k);
    cout << boolalpha << rez_3 << endl;
    cout << "Exercise 4 ";
    short int b;
    std::cout << "enter 0<b<7" << std::endl;
    std::cin >> b;
    int b_rez = pow(2, b);
    std::cout << dec << std::noshowpos << b_rez << std::endl;
    std::cout << oct << b_rez << std::endl;
    cout << "Exercise 5 ";
    unsigned short int c, d, e, f;
    cout << "enter c value" << endl;
    cout << "enter d value" << endl;
    cout << "enter e value" << endl;
    cout << "enter f value" << endl;
    cin >> c >> d >> e >> f;
    unsigned short int rez_5 =d ^((~c)&e)|f;
    std::cout  << std::setw(6) << std::setfill('0') << std::internal << std::hex << std::showbase << rez_5 << std::endl;
    return 0;
}