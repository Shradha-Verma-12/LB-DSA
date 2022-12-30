#include <iostream>
using namespace std;

int main()
{
    int n, i, j, num = 1;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << num << " ";
            num = num + 1;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }

    return 0;
}