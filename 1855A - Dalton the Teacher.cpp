#include <bits/stdc++.h>
using namespace std;

void IO()
{
    std::freopen("input.txt", "r", stdin);
    std::freopen("output.txt", "w", stdout);
}
int main()
{
    IO();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int counter = 1, ans = 0;
        while (n--)
        {
            int e;
            cin >> e;
            if (e == counter)
            {
                ans++;
            }
            counter++;
        }
        if (ans == 0 || ans == 1)
        {
            cout << ans << endl;
        }
        else if (ans % 2 == 0)
        {
            cout << ans / 2 << endl;
        }
        else
        {
            cout << ans / 2 + 1 << endl;
        }
    }
    return 0;
}