s = set()
S = input()
for i in range(0,len(S)):
    for j in range(i+1, len(S)):
        s.add(S[:i] + S[i+1:j] + S[j+1:])
print(len(s))