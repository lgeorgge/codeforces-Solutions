#include <bits/stdc++.h>
using namespace std;
int maximum(vector<int> v)
{
    int maxx = 0, compare = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > compare)
        {
            maxx = i;
            compare = v[i];
        }
    }
    return maxx;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n), result;
        for (auto &x : v)
        {
            cin >> x;
        }
        for (int i = 0; i < n; i++)
        {
            int minus = v[i] / k;
            v[i] -= k * minus;
        }
        multimap<int, int> m;
        int counter = 1;
        for (int i = 0; i < n; i++)
        {
            m.emplace(v[i], counter++);
        }
        for (auto i : m)
        {
            cout << i.second << " ";
        }
        cout << endl;
    }
}
