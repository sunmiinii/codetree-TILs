#include <stdio.h>
#include <string.h>

int main() {

	char str[20][21];
	char a;
	int len_sum = 0;
	int cnt = 0;
    int i,len;

	int n;
	scanf("%d", &n);

	for(i = 0; i < n; i++)
		scanf("%s", str[i]);

	scanf(" %c", &a);	

	for(i = 0; i < n; i++) {
		if(str[i][0] == a) {
			len = strlen(str[i]);
			len_sum += len;
			cnt++;
		}
    }

	printf("%d %.2f", cnt, (double)len_sum / cnt);
	
    return 0;
}