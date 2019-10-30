#Author : Suman Pramanik
#Github : https://github.com/Pramanik-S

#Taking all from user
b, g = [int(x) for x in input().split()]
boy = [int(x) for x in input().split()]
girl = [int(x) for x in input().split()]
q = int(input())
q_list = [int(x) for x in input().split()]

#Hash table for all possible sum
s_hash = [0]*(1000000)

#Storing all possible sum in hash table

for i in range(b):
    for j in range(g):
        x = boy[i] + girl[j]
        if x>=0:
            s_hash[x]+=1
#Now for each query we print possible pair

for i in range(q):
    print(s_hash[q_list[i]])
