# returns primes with value less than n in ascending order
def nth_prime(n):
    primes = []
    d = 2
    while len(primes) < n:
        if not sum([d%p == 0 for p in primes]):
            primes.append(d)
        d += 1
    return primes[-1]

N = 10001
print("The " + str(N) + "th prime is " + str(nth_prime(N)))
