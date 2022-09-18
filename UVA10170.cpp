#include <stdio.h>
int main(){
long long people,D;//people,day
while(scanf("%lld%lld",&people,&D)!= EOF){//input S,D
	while(D > people){
	D = D - people;//check-in to leaves day
	people++;//plus one people
	}
		printf("%lld\n",people);
//END
}
return 0;
}