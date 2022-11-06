#include <stdio.h>


long long int sumfunc(long long int a)
{
    long long int sum = 0, temp = 0, i = a, j;
    if(a <= 0)      return 0;
    
    while(i)
    {
        temp = (i / 10) * 45;
        sum += temp;
        j = i % 10;
        sum += (1 + j) * j / 2;
        i = i / 10;
    }
    return sum;
}


int main()
{
    long long int sump, q,p, i;
    while(scanf("%lld%lld" ,&p,&q) != EOF && p >=0 && q>=0)
    {
        printf("%lld\n", sumfunc(q) - sumfunc(p - 1));
    }
    return 0;
}