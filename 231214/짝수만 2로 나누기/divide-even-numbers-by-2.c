#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i;
    int *p;
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
        if(p[i]%2==0){
            printf("%d ",p[i]/2);
        }
        else
            printf("%d ",p[i]);
    }
    
    // 여기에 코드를 작성해주세요.
    free(p);
    return 0;
}