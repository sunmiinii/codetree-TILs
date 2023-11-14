#include <stdio.h>
#include <string.h>

void sort(char a[], int len);
void swap(char *, char *);


int main() {
    int i,n;
    char arr[100];
    int a=1, b=2;
    scanf("%s",arr);
    n=strlen(arr);
    sort(arr,n);


    for(i=0;i<n;i++){
        printf("%c",arr[i]);
    }
    printf("\n");

    return 0;
}
void swap(char *x, char *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void sort(char a[],int len){
    int i,j;
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++)
        {
            if (a[i]>a[j]){
                swap(&a[i], &a[j]);
            }
        }
    }
}
//*시험출제