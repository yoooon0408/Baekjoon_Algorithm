#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d", &a);
    for(b=0;b<a-1;b++){
        for(c=a;c>b+1;c--){
            printf(" ");
        }
        for(c=0;c<2*b+1;c++){
            printf("*");
        }
        printf("\n");
    }
    for(b=0;b<a;b++){
        for(c=0;c<b;c++){
            printf(" ");
        }
        for(c=2*a-1;c>=2*b+1;c--){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}