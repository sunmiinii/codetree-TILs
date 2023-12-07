#include <stdio.h>


//p1=(int *)malloc(sizeof(int)*n)

int main() {
    int n;
    int i;
    int cnt=0;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==2)
            cnt++;
        if(cnt==3){
            printf("%d",i+1);
            break;
        
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}