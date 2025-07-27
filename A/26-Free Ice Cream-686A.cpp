// https://codeforces.com/contest/686/problem/A

#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(void)
{
    int n, kids = 0; cin >> n;
    ll x; cin >> x;

    while(n--)
    {
        char op; cin >> op;
        ll d; cin >> d;
        if (op == '+') x += d;
        else 
        {
            if (x >= d) x -= d;
            else kids++;
        }
    }
    cout << x << " " << kids << endl;
    return (0);
}
