#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    char ch = 'A';
    i = 1;
    cin >> n;
    while (i <= n)
    {
        j = 0;
        while (j <= n)
        {
            cout << char(ch + j) << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
        ch = ch + 1;
    }
    return 0;
}