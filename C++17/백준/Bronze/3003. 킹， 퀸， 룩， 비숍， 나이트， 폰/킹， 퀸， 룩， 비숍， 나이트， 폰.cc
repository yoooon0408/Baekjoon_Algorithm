#include<stdio.h>
int main(){
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if(a==1){
        printf("0 ");
        }
    else if(a!=1){
        printf("%d ", 1-a);
    }
    if(b==1){
        printf("0 ");
    }
    else if(b!=1){
        printf("%d ", 1-b);
    }
    if(c==2){
        printf("0 ");
    }
    else if(c!=2){
        printf("%d ", 2-c);
    }
    if(d==2){
        printf("0 ");
    }
    else if(d!=2){
        printf("%d ", 2-d);
    }
    if(e==2){
        printf("0 ");
    }
    else if(e!=2){
        printf("%d ", 2-e);
    }
    if(f==8){
        printf("0 ");
    }
    else if(f!=8){
        printf("%d ", 8-f);
    }
    
    return 0;
}
