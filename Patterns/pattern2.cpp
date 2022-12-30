#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = n;
        while (j >= 1)
        {
            cout << j << " ";
            j = j - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}