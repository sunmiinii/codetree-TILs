#include <stdio.h>
#include <string.h>

int main() {
	char str[20][21];
	char a;
	int i,lens= 0;
	int len, cnt = 0;

	int n;
	scanf("%d", &n);

	for(i = 0; i < n; i++)
		scanf("%s", str[i]);

	scanf(" %c", &a);	
	

	for(i = 0; i < n; i++) {
		if(str[i][0] == a) {
			len = strlen(str[i]);
			lens= len;
			cnt++;
		}
    }

	printf("%d %.2f", cnt, (double)lens / cnt);
	
    return 0;
}