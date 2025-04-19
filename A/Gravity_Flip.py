# http://codeforces.com/contest/405/problem/A

# you can just sort it instead

n = int(input())
L = list(map(int , input().split()))

nr = max(L)
rows = []
for i in range(1, nr + 1):
    s = 0
    for el in L : 
        if(el >= i):
            s += 1
    rows.append(s)


for i in range(n) : 
    s = 0 
    for row in rows : 
        if(row >= n - i) : 
            s+=1
    print(s ,  end=" ")