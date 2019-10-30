##Author : Suman Pramanik
##Github URL : https://github.com/Pramanik-S

#define mod = 10^9 + 7 as global variable
mod = 1000000007

#Definition of Power function
def power(n, p): 
    result = 1 
    while p > 0:
        if ((p&1) == 1) : 
            result = (result * n) % mod
        p = p >> 1
        n = (n * n) % mod
    return result

#Taking number of test case
t = int(input())

#For every test case we calculate difference of distance
while t:
    a, b, n=[int(x) for x in input().split()]   #Taking A,B,N
    if a > b:				
        print((power(a, n) - power(b, n)) % mod)
    else:
        print((power(b, n) - power(a, n)) % mod)
    t -= 1
    
    ##TEAM SCA
