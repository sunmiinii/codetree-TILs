#include <stdio.h>

int main() {
 float a,b;
    scanf("%f %f",&a,&b);
    
    float c;
    c=(a+b)/(a-b);

    printf("%.2f",c);
    return 0;
}