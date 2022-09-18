#include<stdio.h>

int GCD(int a, int b){
    return b == 0 ? a : GCD(b, a % b);//recursive GCD
}

int main(){

    int G,N,i,j;

    while(scanf("%d", &N)!=EOF && N!= 0){ // n == 0,is a program terminl.
            G = 0;//under lines is following code.
            for(i = 1; i < N; i++){
                for(j = i + 1; j <= N; j++){
                    G = G + GCD(i, j);
                }
            }

            printf("%d\n", G);
        }

    return 0;
}