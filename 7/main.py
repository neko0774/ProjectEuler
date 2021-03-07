def is_prime(number):
    i = 2
    while i*i <= number:
        if number%i==0:
            return 0
        i+=1
    return 1

cnt = 2
ans = 0
while ans<10001:
    ans += is_prime(cnt)
    cnt += 2
print(ans)