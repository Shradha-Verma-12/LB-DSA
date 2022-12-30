#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;

    i = 1;
    while (i <= n)

    {
        char ch = 'A' + n - i;
        j = 1;
        while (j <= i)
        {

            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}