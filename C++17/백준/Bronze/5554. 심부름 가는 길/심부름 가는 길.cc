#include<stdio.h>
int main(){
    int a, b, c, d, sum=0;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    sum=a+b+c+d;
    printf("%d\n%d", sum/60, sum%60);
    
    return 0;
}
