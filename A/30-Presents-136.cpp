// https://codeforces.com/contest/136/problem/A

#include <bits/stdc++.h>

using namespace	std;

int	main(void)
{
	int num, n;
	cin >> n;
	unordered_map<int, int> mp;

	for (int i = 1; i <= n; i++)
		(cin >> num, mp[num] = i);
	for (int i = 1; i <= n; i++)
		cout << mp[i] << " ";
	cout << endl;
	return (0);
}
