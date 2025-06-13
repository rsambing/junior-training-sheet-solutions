// http://codeforces.com/contest/344/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 1; cin >> n;
    string row = "", aux;
    for(int i = 0; i < n; i++) (cin >> aux, row += aux);
    for(int i = 0; i < (n * 2) - 2; i++) if(row[i] == row[i + 1]) ans++;
    cout << ans << endl; 
    return (0);
}
