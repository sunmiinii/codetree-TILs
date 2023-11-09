#include <stdio.h>
#include <string.h>

int main() {
    // 문자열 배열을 구현합니다.
	char str[20][21];
	char a;
	int len_sum = 0;
	int cnt = 0;

	// 입력
	int n;
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%s", str[i]);

	scanf(" %c", &a);	
	
	// 조건에 맞는 문자열의 총 길이와 개수를 계산해줍니다.
	for(int i = 0; i < n; i++) {
		if(str[i][0] == a) {
			int len = strlen(str[i]);
			len_sum += len;
			cnt++;
		}
    }
  
	// 구하고자 하는 값을 출력합니다.
	printf("%d %.2f", cnt, (double)len_sum / cnt);
	
    return 0;
}