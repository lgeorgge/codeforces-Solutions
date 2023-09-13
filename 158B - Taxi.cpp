#include <bits/stdc++.h>
using namespace std;

void IO()
{
    std::freopen("input.txt", "r", stdin);
    std::freopen("output.txt", "w", stdout);
}
int main()
{
    // IO();
    int n;
    cin >> n;
    int taxi = 0;
    map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
        int j;
        cin >> j;
        if (j == 4)
            taxi++;
        else
            m[j]++;
    }
    while (m[3] > 0)
    {
        m[3]--;
        m[1]--;
        taxi++;
    }
    if (m[1] <= 0)
    {
        taxi += ceil((double)m[2] / 2);
    }
    else
    {
        m[1] += m[2] * 2;
        taxi += ceil((double)m[1] / 4);
    }
    cout << taxi << endl;
}