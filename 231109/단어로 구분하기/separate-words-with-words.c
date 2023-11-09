#include <stdio.h>
#include <string.h>
int main() {
    char str[201];
    char *p;
    fgets(str,201,stdin);
    p=strtok(str," ");
    while(p!=NULL){
        printf("%s\n",p);
        p=strtok(NULL," ");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}