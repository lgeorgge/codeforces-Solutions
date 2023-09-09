#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;
        max(a, b) == max(c, d) && min(a, b) + min(c, d) == max(a, b) ? cout << "YES" << endl : cout << "NO" << endl;
    }
}