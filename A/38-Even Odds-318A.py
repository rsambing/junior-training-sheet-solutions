# https://codeforces.com/contest/318/problem/A

n, k = map(int, input().split())

odds = (n + 1) // 2

if k <= odds:
    print(2 * k - 1)
else:
    print(2 * (k - odds))
