#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        int l = num.length();
        string compare = "";
        for (int i = 0; i < l; i++)
        {
            compare += num[0];
        }
        int number = stoi(num), c = stoi(compare);
        l--;
        c <= number ? cout << (int)(number / pow(10, l) + l * 9) << endl : cout << (int)(number / pow(10, l) - 1 + l * 9) << endl;
    }
}