#include <stdio.h>
#include <string.h>

int main() {
	int flag = 0;
	char a[1000];
	while (gets(a) != NULL) {
		int num = strlen(a);

		for (int i = 0; i < num; i++) {
			if (a[i] == '"') {
				if (flag == 0) {
					a[i] = '`';
					for (int j = num + 1; j > i; j--) {
						a[j] = a[j - 1];
					}
					a[i + 1] = '`';
					num++;
					flag = 1;
				}
				else {
					a[i] = '\'';
					for (int j = num + 1; j > i; j--) {
						a[j] = a[j - 1];
					}
					a[i + 1] = '\'';
					num++;
					flag = 0;
				}
			}
			a[num + 1] = '\0';

			//END FOR1
		}
		printf("%s\n", a);
		//END
	}
	return 0;


}