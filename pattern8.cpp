#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    i = 1;
    cin >> n;
    while (i <= n)
    {
        j = i;
        while (j > 0)
        {
            cout << j << " ";
            j = j - 1;
        }
        i = i + 1;
        cout << endl;
    }
    return 0;
}