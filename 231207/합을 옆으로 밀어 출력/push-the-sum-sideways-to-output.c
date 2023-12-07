#include <stdio.h>

int main() {
    int n,i,a;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);

        sum=sum+a;
    }
    char sum_str[100];
    
    sprintf(sum_str,"%d",sum);
    printf(sum+str[1]);
    printf("%s",sum_str);
    // 여기에 코드를 작성해주세요.
    return 0;
}