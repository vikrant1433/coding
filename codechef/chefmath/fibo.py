f1 = 1
f2 = 2
f3 = 1
count =  1
while f3 <= 10**9: 
    count += 1
    f3 = f1 + f2
    print (f3)
    f1 = f2
    f2 = f3
    	

f3 = f1 + f2
print (f3)
f1 = f2
f2 = f3
print ("count = " + str(count))
