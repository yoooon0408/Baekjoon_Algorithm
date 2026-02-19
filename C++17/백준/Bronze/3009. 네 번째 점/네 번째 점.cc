#include<stdio.h>
int main(){
    int a, b, c, d, e, f;
    scanf("%d %d\n%d %d\n%d %d", &a, &b, &c, &d, &e, &f);
    if(a==c){
        if(b==d){
            printf("%d %d", e, f);
        }
        else if(d==f){
            printf("%d %d", e, b);
        }
        else{
            printf("%d %d", e, d);
        }
    }
    else if(c==e){
        if(b==d){
            printf("%d %d", a, f);
        }
        else if(d==f){
            printf("%d %d", a, b);
        }
        else{
            printf("%d %d", a, d);
        }
    }
    else{
        if(b==d){
            printf("%d %d", c, f);
        }
        else if(d==f){
            printf("%d %d", c, b);
        }
        else{
            printf("%d %d", c, d);
        }
    }

    return 0;
}
