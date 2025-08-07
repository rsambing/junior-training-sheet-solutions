# https://codeforces.com/contest/807/problem/A

def is_sorted(arr):
    for i in range(len(arr) - 1):
        if arr[i] < arr[i + 1]:
            return False
    return True

n = int(input())

arr1 = []
arr2 = []

for _ in range(n):
    a, b = map(int, input().split())
    arr1.append(a)
    arr2.append(b)

if arr1 != arr2:
    print("rated")
elif not is_sorted(arr2):
    print("unrated")
else:
    print("maybe")
