#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i, convBin = 0, k = 0;
    cout << "Binary to Decimal" << endl;
    cout << "Enter a number: ";
    cin >> i;

    while (i)
    {
        int rem = i % 10;
        if (rem == 1)
            convBin = convBin + pow(2, k);
        i = i / 10;
        k++;
    }
    cout << "Converted number: " << convBin;
    return 0;
}