# https://codeforces.com/contest/520/problem/A

n = int(input())
word_input = input()

word = word_input.lower()

for i in range(ord('a'), ord('z') + 1):
    if chr(i) not in word:
        print("NO")
        exit()
        
print("YES")
