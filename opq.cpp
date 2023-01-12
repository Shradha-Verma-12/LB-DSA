#include <iostream>
using namespace std;

int main()
{
    /* for (int i = 0; i <= 5; i++)
    {
        cout << i << " ";
        i++;
    }

    for (int j = 0; j <= 5; j--)
    {
        cout << j << " ";
        j++;
    } */

    for (int k = 0; k <= 15; k += 2)
    {
        cout << k << " ";
        if (k & 1)
        {
            continue;
        }
        k++;
    }

    for (int l = 0; l < 5; l++)
    {
        for (int k = l; k <= 5; k++)
        {
            cout << l << " " << k << endl;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
    }
    return 0;
}