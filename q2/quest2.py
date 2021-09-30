act_ind = 0
fibs = [0,1,2]

evens_sum = 0

max_val = int(4*10E6)
while fibs[act_ind] < max_val:
	ind_A = (act_ind + 1) % 3
	ind_B = (act_ind + 2) % 3

	fibs[act_ind] = fibs[ind_A] + fibs[ind_B]

	#taking advantage of every 3rd index being even (odd+odd=even)

	act_ind = (act_ind + 1) % 3

	print(fibs[act_ind],end='')
	if act_ind % 3 == 2:
		evens_sum = evens_sum + fibs[act_ind]
		print('*')
	else:
		print('')

print('The sum of even fibonacci terms less than ' + str(max_val) + ' is ' + str(evens_sum))
