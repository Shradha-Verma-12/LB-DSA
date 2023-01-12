// DIFFERENCE OF SUM AND PRODUCT OF DIGITS OF A NUMBER

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, prod = 1, r;
    while (n)
    {
        r = n % 10;
        sum += r;
        prod *= r;
        n = n / 10;
    }
    cout << prod - sum;
    return 0;
}