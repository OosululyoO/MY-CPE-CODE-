#include<stdio.h>
#include<assert.h>

#define arraysize 100

int main()
{
	int m;
	printf("輸入要排列的總數 :");
	scanf("%d", &m);
	assert(m >= 1 && m < arraysize);

	int n[arraysize];

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &(n[i]));
	}
	for (int i = m - 2; i >= 0; i--)
	{
		for (int j = 0; j <= i ; j++)
		{
			if (n[j] > n[j + 1])
			{
				int temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		printf("%d ", n[i]);
	}
	return 0;
}