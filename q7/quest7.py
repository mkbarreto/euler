# returns primes with value less than n in ascending order
def nth_prime(n):
    primes = [2]
    d = 3
    while len(primes) < n:
        d_is_prime = True
        i = 0
        while d_is_prime and primes[i]*primes[i] <= d:
            d_is_prime = d_is_prime and (d%primes[i] != 0)
            i += 1
        if d_is_prime:
            primes.append(d)

        d += 1
    return primes[-1]

N = 10001

# English is stupid
ext = "th"
if not (N%100 > 10 and N%100 < 14):
    if N%10 == 1:
        ext = "st"
    elif N%10 == 2:
        ext = "nd"
    elif N%10 == 3:
        ext = "rd"
print("The " + str(N) + ext + " prime is " + str(nth_prime(N)))
