#include<iostream>
using namespace std;

int main(){

    int n = 0, q= 0,c = 0,a[10000];

    while (scanf("%d%d",&n,&q) != EOF)
    {
        if(n==q&&q==0) break;
        printf("CASE# %d:\n",++c);
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        

        for(int i = n - 2;i >= 0;i--)
            for(int j = 0;j<=i;j++)
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }

        while (q--)
        {
            int x = 0,f=0;
            scanf("%d",&x);
            for (int i = 0; i < n; i++)
            {
                if (a[i]==x&&f==0)
                {
                    printf("%d found at %d\n",x,++i);
                    f++;
                }
            }
            if(f==0) printf("%d not found\n",x);
        }
        

    }
    return 0;
}