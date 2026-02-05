#include<stdio.h>
int main(){
    int a, b, c, sum;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        scanf("%d %d",&b, &c);
        sum=b+c;
        printf("%d\n", sum);
    }
    
    return 0;
}
