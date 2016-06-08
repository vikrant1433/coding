f = [1,2]
f1 = 1
f2 = 2
while True:
	f3 = f2 + f1
	if f3 > 10**9:
		break;
	f.append(f3)
	f1 = f2
	f2 = f3

def F(x,k,n):
	if x < 0:	# if number is -ve return 0
		return 0
	if k == 0:
		if x == 0:	# if x == 0  and k == 0 ret 1
			return 1
		else:
			return 0 # else ret 0
	if x == 0 or n == 0:
		return 0
	total = F(x,k,n-1)
	if x >= f(n-1) and x <= k*f(n-1):
		total += F(x-f(n-1),k-1,n)
	return total


Q = int(input())
for q in range(Q):
	X, K = list(map(int, input().split()))
	print (F(X,K,len(f)))