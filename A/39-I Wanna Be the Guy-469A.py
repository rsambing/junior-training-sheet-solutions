# https://codeforces.com/contest/469/problem/A

n = int(input())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

p = arr1.pop(0)
q = arr2.pop(0)

arr = set(arr1) | set(arr2)

ans = "Oh, my keyboard!"
if sum(arr) == (n * (n + 1))/2:
    ans = "I become the guy."

print(ans)
