#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int k = n - i + 1;
        j = i - 1;
        while (j)
        {
            cout << " ";
            j = j - 1;
        }
        while (k)
        {
            cout << i;
            k = k - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}