#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d\n%d %d", &a, &b, &c, &d);
    if(b<=a){
        printf("%d", c*b);
    }
    else{
        printf("%d", c*a+(b-a)*d);
    }
    
    return 0;
}
