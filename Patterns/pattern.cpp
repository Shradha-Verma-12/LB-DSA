#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    i = 1;
    char ch = 'A';
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        ch = ch + 1;
        i = i + 1;
    }
    return 0;
}