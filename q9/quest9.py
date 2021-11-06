N = 1000

for a in range(1, N):
	for b in range(1, N-a):
		c = N - a - b

		if a**2+b**2 == c**2:
			print(str(a)+','+str(b)+','+str(c))
			print("abc is " + str(a*b*c))
