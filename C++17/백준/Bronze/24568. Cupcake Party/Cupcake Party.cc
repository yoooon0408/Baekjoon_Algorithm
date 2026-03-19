#include<stdio.h>
int main(){
    int a, b;
    scanf("%d\n%d", &a, &b);
    if(a*8+b*3<=28){
        printf("0");
    }
    else{
        printf("%d", a*8+b*3-28);
    }

    return 0;
}