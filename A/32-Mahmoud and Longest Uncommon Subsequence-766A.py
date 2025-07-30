# https://codeforces.com/contest/766/problem/A

a = input()
b = input()

ans = -1 if a == b else max(len(a), len(b))
print(ans)
