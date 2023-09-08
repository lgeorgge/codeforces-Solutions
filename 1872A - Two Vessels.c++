#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double l, s, d;
        cin >> l >> s >> d;
        cout << ceil(abs(l - s) / (2 * d)) << endl;
    }
    return 0;
}