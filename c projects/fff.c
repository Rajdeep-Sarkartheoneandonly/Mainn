#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    long long digit, sum = 0;
    long long count = 0;
    long long output = 0;
    long long multiplier = 1;
    while (n>=1)
    {
        digit = n%10;
        if (digit!=0)
        {
            count++;
            output += digit * multiplier;
            sum += digit;
            multiplier *= 10;
        }
        n /= 10;
    }
    printf("%lld\n", output*sum);
    return 0;
}
