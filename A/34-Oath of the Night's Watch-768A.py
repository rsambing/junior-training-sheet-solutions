# https://codeforces.com/contest/768/problem/A

n = int(input())
stewards = list(map(int, input().split()))

weak = min(stewards)
strong = max(stewards)

ans = 0
ans = sum([1 for x in stewards if x != weak and x != strong])
print(ans)
