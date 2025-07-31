# https://codeforces.com/problemset/problem/767/A

n = int(input())
snacks = list(map(int, input().split()))

next_expected = n
fallen = set()

for snack in snacks:
    fallen.add(snack)
    if snack == next_expected:
        while next_expected in fallen:
            print(next_expected, end=" ")
            next_expected -= 1
        print()
    else:
        print()
