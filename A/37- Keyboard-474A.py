# http://codeforces.com/contest/474/problem/A

def crazy(c, kb, dir):
    i = kb.index(c) 
    if dir == "R":
        return kb[i - 1]
    else:
        return kb[i + 1]

kb1 = "qwertyuiop"
kb2 = "asdfghjkl;"
kb3 = "zxcvbnm,./"

dir = input()
seq = input()
n = len(seq)
ans = ""

for c in seq:
    if c in kb1:
        ans += crazy(c, kb1, dir)
    elif c in kb2:
        ans += crazy(c, kb2, dir)
    else:
        ans += crazy(c, kb3, dir)

print(ans)
