// https://codeforces.com/contest/9/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int y, w, total = 6; cin >> y >> w;
    int max_n = max(y, w);
    int cases = total - max_n + 1;
    int a = cases, b = total, temp;

    while(b != 0) (temp = a % b, a = b, b = temp); // MDC
    
    cout << cases / a << "/" << total / a << endl;
    return (0);
}
