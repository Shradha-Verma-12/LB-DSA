// DABBANG PATTERN
// done and dusted

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << j;
            j = j + 1;
        }
        int k = 1;
        while (k <= (i - 1))
        {
            cout << "*";
            k = k + 1;
        }
        k = 1;
        while (k <= (i - 1))
        {
            cout << "*";
            k = k + 1;
        }

        j = 1;
        int l = n - i + 1;
        while (j <= (n - i + 1))
        {
            cout << l;
            l = l - 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}