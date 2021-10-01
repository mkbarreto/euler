# returns primes with value less than n in ascending order
def primes_under(n):
    primes = [2]
    for d in range(3,n):
        if not sum([d%p == 0 for p in primes]):
            primes.append(d)
    return primes

def is_palindromic(n):
    n_list = [int(dig) for dig in str(n)]
    for i in range(len(n_list)>>1):
        if not n_list[i] == n_list[-(i+1)]:
            return False
    return True

#putting in function bc break don work
def largest_3dig_prime_pali():
    primes_3dig=primes_under(999)
    N = len(primes_3dig)
    p1 = p2 = 0
    for i in reversed(range(N-1)):
        p1 = primes_3dig[i]
        for j in reversed(range(i+1,N)):
            p2 = primes_3dig[j]
            if is_palindromic(p1*p2):
                return (p1,p2)

p1,p2=largest_3dig_prime_pali()
print("The largest palindromic product of two 5-digit primes is " + str(p1*p2) + ', the product of ' + str(p1) + ' and ' + str(p2))