# https://codeforces.com/contest/427/problem/A

n = int(input()) 
L = list(map(int , input().split()))

mini , acc = 0 , 0 
for el in L : 
    acc += el
    mini = min(mini, acc)
print(-mini , end="")
