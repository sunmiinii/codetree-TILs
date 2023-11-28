#include <stdio.h>
void a(int n){
    int i;
    for(i=1;i<n+1;i++){
        printf("%d ",i);
    }
    printf("\n");
return;
}

void b(int n){
    int i;
    for(i=n;i>0;i--){
        printf("%d ",i);
    }
return;
}
int main() {
    int n;
    scanf("%d",&n);
    a(n);
    b(n);
    return 0;
}