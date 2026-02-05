#include<stdio.h>
int main(){
    int a, b, c, sum;
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        scanf("%d %d", &b, &c);
        sum=b+c;
        printf("Case #%d: %d\n", i, sum);
    }
    
    return 0;
}
