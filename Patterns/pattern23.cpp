// important question

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int k = n - i;
        while (k)
        {
            cout << " ";
            k = k - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }
        int s = 1;
        int t = i - 1;
        while (s <= t)
        {
            cout << t;
            t = t - 1;
        }

        cout << endl;
        i = i + 1;
    }
    return 0;
}