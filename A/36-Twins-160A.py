# https://codeforces.com/contest/160/problem/A

n = int(input())
coins = list(map(int, input().split()))

coins.sort()
total = sum(coins)
ans = 0
got = 0
for x in range(len(coins) - 1, -1, -1):
    ans += 1
    got += coins[x]
    if total - got < got:
        break
    
print(ans)
