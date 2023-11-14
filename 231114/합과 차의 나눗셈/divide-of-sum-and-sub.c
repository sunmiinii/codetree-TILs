#include <stdio.h>

int main() {
    int a,b;
    scanf("%f %f",&a,&b);
    
    double c;
    c=(a+b)%(a-b);
    
    printf("%.2f",c);
    // 여기에 코드를 작성해주세요.
    return 0;
}