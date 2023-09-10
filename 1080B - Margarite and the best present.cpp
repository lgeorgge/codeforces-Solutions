#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r, sum{};
        cin >> l >> r;
        bool b1 = (l % 2 == 0), b2 = (r % 2 == 0);
        if (b1 && b2)
        {
            cout << fixed << l + (r - l) / 2 << endl;
        }
        else if (b1 && !b2)
        {
            double x = ceil(double(r - l) / 2) * -1;
            cout.precision(0);
            cout << fixed << x << endl;
        }
        else if (!b1 && !b2)
        {
            cout << fixed << -l - ((r - l) / 2) << endl;
        }
        else
        {
            double x = ceil(double(r - l) / 2);
            cout.precision(0);
            cout << fixed << x << endl;
        }
    }
}