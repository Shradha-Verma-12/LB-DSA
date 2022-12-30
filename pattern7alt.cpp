#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 0;
        while (j < i)
        {
            cout << j + i << " ";
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
    return 0;
}