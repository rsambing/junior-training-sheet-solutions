# http://codeforces.com/contest/474/problem/A

arr = list(map(int, input().split()))
n = arr[0]
k = arr[1]

dist = "".join(chr(c) for c in range(ord('a'), ord('a') + k))

j = 0
password = ""

for i in range(n):
    password += dist[j]
    j = (j + 1) % k

print(password)
