// https://codeforces.com/contest/799/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, t, k, d; cin >> n >> t >> k >> d;

    // time that a single oven takes to bake n cakes
    int t_only_one = ceil(static_cast<double>(n) / k) * t;

    int oven1 = 0, oven2 = 0;
    
    for(int time = t; time < t_only_one; time += t)
    {
        oven1 += k;
        if (time > d) oven2 += k;

        if (oven1 + oven2 >= n)
        {
            cout << "YES" << endl;
            return (0);
        }
    }

    cout << "NO" << endl;
    return (0);
}
