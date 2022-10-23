#include <stdio.h>
using namespace std;
int main(){
long long int n=0,s=0;
while(scanf("%lld",&n)!=EOF&&n!=0){
	s = n;
	while(s/10!=0){
		s = 0;
		while(n/10!=0){
		s += n%10;
		n /= 10;
		} 
		s+=n;
		n = s;
	}
	printf("%lld\n",s);
}
return 0;
}
