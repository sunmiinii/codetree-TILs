#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n,i,a;
    int *p;
    int sum=0;
    char result[12];
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
        sum+=p[i];
    }
    sprintf(result,"%d",sum);
    printf("%s%c",result+1,result[0]);
    free(p);
    // 여기에 코드를 작성해주세요.
    return 0;
}