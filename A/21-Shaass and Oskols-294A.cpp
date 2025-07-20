// https://codeforces.com/contest/294/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n; cin >> n;
    vector<int> a(n); for(int &aux : a) cin >> aux;

    int m; cin >> m;
    while(m--)
    {
        int x, y; cin >> x >> y; x--;
        if (a[x] >= y)
        {
            if (x > 0) 
                a[x - 1] += y - 1;
            if (x < n - 1)
                a[x + 1] += a[x] - y;
            a[x] = 0;
        }
    }
    for(int &aux : a) cout << aux << endl;
    return (0);
}
