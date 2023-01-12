// COUNTING THE NUMBER OF SET BITS IN A NUMBER

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int bits = 0;
    while (n)
    {
        if (n & 1)
            bits++;
        n = n >> 1;
    }
    cout << bits;
    return 0;
}