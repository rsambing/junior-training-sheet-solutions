// https://codeforces.com/contest/490/problem/A

#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int n; cin >> n;
    vector<int> prog, math, pe;
    for(size_t i = 1; i <= n; i++)
    {
        int x; cin >> x;
        if (x == 1) prog.push_back(i);
        else if (x == 2) math.push_back(i);
        else pe.push_back(i);
    }
    int teams = min({prog.size(), math.size(), pe.size()});
    cout << teams << endl;
    for (size_t i = 0; i < teams; i++) 
        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    return (0);
}
