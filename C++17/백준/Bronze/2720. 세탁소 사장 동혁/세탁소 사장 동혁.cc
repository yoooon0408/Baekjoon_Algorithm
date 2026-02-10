#include<stdio.h>
int main(){
    int a, b;
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        scanf("%d", &b);
        printf("%d %d %d %d\n", b/25, b%25/10, b%25%10/5, b%25%10%5/1);
    }
    
    return 0;
}

