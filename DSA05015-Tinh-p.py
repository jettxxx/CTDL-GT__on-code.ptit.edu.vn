t = int(input())
for a in range (t):
    user_list=input().split()
    res = 1
    n=int(user_list[0])
    k=int(user_list[1])
    if(k>n):res=0
    for i in range(n-k+1,n+1):
        res=(res*i%(10**9+7))
    print (res)