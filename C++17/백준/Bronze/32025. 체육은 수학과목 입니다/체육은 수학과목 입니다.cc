#include<stdio.h>
int main(){
    int a, b;
    scanf("%d\n%d", &a, &b);
    if(a<=b){
        printf("%d", a*100/2);
    }
    else{
        printf("%d", b*100/2);
    }
    
    return 0;
}
