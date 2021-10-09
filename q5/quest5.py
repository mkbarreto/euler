#This is re-finding each prime with the factorization
#TODO: rewrite with a single prime solve at the beginning
#       IDEA: Make a factorizor class and solve primes on init?
def primefacs(n):
    print(n)
    primfac = []
    d = 2
    while d*d <= n:
        dcnt=0
        while (n % d) == 0:
            dcnt += 1
            n //= d
        if dcnt > 0:
            primfac.append((d,dcnt))
        d += 1

    if n > 1:
        primfac.append((n,1))
    return primfac

# This is SO gross. Make better with indexing (& helper class)
def smallestcomp(N):
    core_facts = []
    for n in range(1,N+1):
        n_facts = primefacs(n)
        for fac, n_fac in n_facts:
            if fac not in [a for a,b in core_facts]:
                core_facts.append((fac,n_fac))
            for i in range(len(core_facts)):
                cfac, n_cfac = core_facts[i]
                if cfac == fac and n_fac > n_cfac:
                    core_facts[i] = (fac,n_fac)

    print(core_facts)
    smallestcomp_ = 1
    for fact, n_fact in core_facts:
        for tmp in range(n_fact):
            smallestcomp_ *= fact

    return smallestcomp_

N = 11
print("The natural number evenly divisible byy all numbers between 1 and " + str(N) + " is " + str(smallestcomp(N)))