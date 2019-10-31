# Author Name : Monika Sinha
# Github link  : https://github.com/ms706

# To form cycle we must need 3 numbers.So n should be greater than 2. 
# Now OR operation of 2 numbers are zero only when both numbers are zero.So basically we need to get 
# total count of non zero number. If that count is more than 1    

t=int(input()) 
for _ in range(t): 			#loop for t numbers of testcases
    n=int(input()) 
    count=0				#it will store count of non zero numbers
    a=list(map(int,input().split())) 	#getting list of of n numbers 
    for i in range(n): 			# loop to check count of nonzero numbers
        if a[i]!=0:
            count+=1	
    if count>=2 and n>=3: 		# Here we check condition for n and count as specified earlier
        print('3')
    else:
        print('-1')
