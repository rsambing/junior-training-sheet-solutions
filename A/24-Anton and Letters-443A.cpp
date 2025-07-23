// https://codeforces.com/contest/443/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    unordered_set<char> letters;
    string input; getline(cin, input);
    for (char c : input)
        if (isalpha(c))
            letters.insert(c);
    cout << letters.size() << endl;
    return (0);
}
