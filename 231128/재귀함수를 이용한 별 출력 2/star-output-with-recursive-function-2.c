#include <stdio.h>

void a(int n){
    int i,j;

    for(i=0;i<n;i++){
            for(j=n;j>i;j--){
                printf("* ");
            }
            printf("\n");
        }

    for(i=1;i<n+1;i++){
        for(j=1;j<i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
   
    return;
}

int main() {
    int n;
    scanf("%d",&n);
    a(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}