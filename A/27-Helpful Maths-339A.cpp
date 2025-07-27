// https://codeforces.com/contest/339/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s; cin >> s;
    vector<int> arr;
    for (char &c : s) if (isdigit(c)) arr.push_back(c - '0');
    sort(arr.begin(), arr.end());
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (i != 0) cout << "+";
        cout << arr[i];
    } 
    cout << endl;
    return (0);
}
