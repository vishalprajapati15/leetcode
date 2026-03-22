#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter hours count: ";
    cin >> n;

    int fee = 0;

    if (cin.fail() || n < 0)
    {
        cout << "Error" << endl;
    }
    else
    {

        if (n <= 2)
        {
            fee = n * 100;
        }
        else if (n <= 5)
        {
            fee = 2 * 100 + (n - 2) * 50;
        }
        else if (n > 5)
        {
            fee = 2 * 100 + 3 * 50 + (n - 5) * 20;
        }
        cout << "Parking fee for " << n << " is : " << fee << endl;
    }

    cout << "Done";
    return 0;
}