#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int *p;
    int i;
    int cnt=0;
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
        if(p[i]==2){
            cnt++;
            if(cnt==3){
                printf("%d",i+1);
                break;
            }
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}