#include <iostream>
using namespace std;

int main()
{
    int i, j, n, count;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        count = i;
        while (j <= i)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1; 
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}