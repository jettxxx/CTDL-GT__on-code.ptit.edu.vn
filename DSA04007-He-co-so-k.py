def solve():
	k,a,b = input().split()
	k,a,b = int(k),int(a),int(b)
	aa = todec(a,b,k)
	print (dddddddddddddd(aa,k))
def dddddddddddddd (n,k):
    if n == 0:
        return '0'
    nums = []
    while n:
        n, r = divmod(n, k)
        nums.append(str(r))
    return ''.join(reversed(nums))
def todec(a,b,k):
	aa,bb = 0,0
	o=1
	a,b,k=int(a),int(b),int(k)
	while(a):
		last=a%10
		a=int(a/10)
		aa+=last*o
		o=o*k
	o=1
	while(b):
		last=b%10
		b=int(b/10)
		bb+=last*o
		o=o*k
	return aa+bb
a=int(input())
while a:
	solve()
	a-=1