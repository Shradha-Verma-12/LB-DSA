#include <iostream>
using namespace std;

int main()
{
    int i, n;
    int a = 0, b = 1;
    cout << "Fibonacci Series" << endl;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << a << " , " << b;
    for (i = 0; i < n; i++)
    {
        int sum = a + b;
        cout << " , " << sum;
        a = b;
        b = sum;
    }
    return 0;
}