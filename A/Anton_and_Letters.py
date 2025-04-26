

# http://codeforces.com/contest/443/problem/A



print(len(set("".join([c for c in input() if c.isalpha() or c == ' ']).split() )))