s = input()
L = []
cnt = 1;
i = 0
while(i < len(s)):
    cnt = 1
    while(i+1 < len(s) and s[i] == s[i+1]):
        cnt += 1
        i += 1
    L.append(cnt)
    i += 1
#print (L)
S = [0]*len(L)
i = len(L) - 1
S[i] = L[i]
i -= 1
S.append(0)
while (i > 0):
    S[i] = L[i] + S[i+1]
    i -= 1
#print (S)
i = 0
dup = 0
cur_index = 0
# print(L)
while(i <  len(L)):
    # print(cur_index)
    if L[i] == 1 and i >=1 and (i + 1) < len(L) and s[cur_index-1] == s[cur_index+1]:
        # print (L[i]*S[i+1] + (L[i] * (L[i]-1)/2) -(len(L)-i) + (L[i+1] - 1))
        dup += L[i]*S[i+1] - (len(L)-i) + 1 + 1
    elif L[i] == 1 and not (i >=1 and (i + 1) < len(L) and s[cur_index-1] == s[cur_index+1]):
        # print (L[i]*S[i+1] + (L[i] * (L[i]-1)/2) - (len(L)-i))
        dup += L[i]*S[i+1] - (len(L)-i) + 1
    else:
        # print( L[i]*S[i+1] + (L[i] * (L[i]-1)/2) - (len(L)-i))
        dup += L[i]*S[i+1] + (L[i] * (L[i]-1)/2) - (len(L)-i)
    cur_index += L[i]
    i += 1

N = len(s)
print (int(N*(N-1)/2 - dup))
