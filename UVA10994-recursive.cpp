#include<stdio.h>
#include<stdlib.h>

long long int f(long long int n){
if(n%10>0) return n%10;
else if(n==0) return 0;
else return f(n/10);
}

int main(){

    long long int p=0,q=0,s=0;
    while (scanf("%lld%lld" ,&p,&q) != EOF && p >=0 && q>=0)
    {	
    s=0;
        for (size_t i = p; i <= q; i++)
        {
            s+=f(i);
        }
        printf("%lld\n",s);
    }

    return 0;
}