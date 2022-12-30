#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    i = 1;
    int count = 1;
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
    return 0;
}