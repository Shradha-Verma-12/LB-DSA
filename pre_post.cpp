#include <iostream>
using namespace std;

int main()
{
    int a, b = 1;
    a = 10;
    if (++a)
        cout << b;
    else
        cout << ++b;

    int c = 1, d = 2;
    if (c-- > 0 && ++d > 2)
        cout << "Inside if" << endl;
    else
        cout << "Inside else" << endl;
    cout << c << " " << d << endl;

    int e = 3;
    cout << (25 * (++e)) << endl;

    int f = 1;
    int g = f++;
    int h = ++f;
    cout << g << endl;
    cout << h << endl;
    return 0;
}