#include <stdio.h>
#include <string.h>

int main() {

    int i,n,cnt=0;
    int len=0;
    char str[101];

    scanf("%d",&n);

    for (i=0;i<n;i++){
        scanf("%s",str);
        len+=strlen(str);
        if ('a'==str[0]){
            cnt++;
            
        }
    }
    printf("%d %d",len, cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}