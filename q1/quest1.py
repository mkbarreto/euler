sum_val=0
max_val=1000

for i in range(1,max_val+1):
	if (i % 3 == 0) or (i % 5 == 0):
		sum_val = sum_val + i

print("the sum of all integer multiples of 3 or 5 less than " + str(max_val) + " is " + str(sum_val))
