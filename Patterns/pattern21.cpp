#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        j = i;
        while (j <= n)
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}