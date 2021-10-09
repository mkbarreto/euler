def sqr_diff(N):
	return (sum(range(N+1))**2) - sum([n**2 for n in range(N+1)])

N = 10000
print("the difference between the squared sum of and summed squares of the first " + str(N) + " natural numbers is " + str(sqr_diff(N)))