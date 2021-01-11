for t in range(int(input())):
	n=int(input())
	a=list(map(int,input().split()))
	a.sort()
	if(a[0]==a[n-1]):
	    print(n)
	else:
	    print(1)