# stack overflow be praised
def primes(n):
    primfac = [1]
    d = 2
    while d*d <= n:
        while (n % d) == 0:
            primfac.append(d)  # supposing you want multiple factors repeated
            n //= d
        d += 1
    if n > 1:
       primfac.append(n)
    return primfac

check_val = 600851475143
print('The largest prime factor of ' + str(check_val) + ' is ' + str(primes(check_val)[-1]))
