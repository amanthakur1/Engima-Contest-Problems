# https://codeforces.com/contest/186/problem/A

a=input()
b=input()

if(len(a)!=len(b)):
    print("NO")
    exit(0)
s=0    
for i in range(len(a)):
    if(a[i]!=b[i]):
        s+=1
a="".join(sorted(a))
b="".join(sorted(b))
if s==2 and a==b:
    print("YES")
else:
    print("NO")
    