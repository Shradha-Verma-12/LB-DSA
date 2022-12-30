#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    i = 1;

    cin >> n;
    while (i <= n)
    {
        j = 1;
        char ch = 'A';
        while (j <= n)
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