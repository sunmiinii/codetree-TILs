#include <stdio.h>
#include <string.h>

int main() {

    int i,len,sw;
    char n;

    char st[10][21];
    sw=0;
    for (i=0;i<10;i++){
        scanf("%s",st[i]);
    }
    // fflush(stdin);
    // scanf("%c",&n);
     scanf("%*c%c",&n);
    for(i=0;i<10;i++){
        len=strlen(st[i]);
        if (n==st[i][len-1]){
            printf("%s\n",st[i]);
            sw=1;
        }
    }
    if (sw==0)
    printf("None");
    // 여기에 코드를 작성해주세요.
    return 0;
}