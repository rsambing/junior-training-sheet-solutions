// http://codeforces.com/contest/236/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    unordered_map<char, int> mp;
    std::string str; cin >> str;
    for(char c : str)
        mp[c]++;
    if (mp.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return (0);
}
