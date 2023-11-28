#include <stdio.h>
void hw(int n){
    int i;
    for(i=0;i<n;i++){
        printf("HelloWorld\n");}
    return;
}
int main() {
    int n;
    scanf("%d",&n);
    hw(n);
    return 0;
}