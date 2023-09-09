#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxx = 1, counter = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            counter++;
                }
        else
        {
            maxx = max(maxx, counter);
            counter = 1;
        }
    }
    maxx = max(maxx, counter);
    cout << maxx << endl;
}