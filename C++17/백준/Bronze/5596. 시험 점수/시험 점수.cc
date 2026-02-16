#include<stdio.h>
int main(){
    int a, b, c, d, e, f, g, h;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%d %d %d %d", &e, &f, &g, &h);
    if(a+b+c+d>=e+f+g+h){
        printf("%d", a+b+c+d);
    }
    else if(a+b+c+d<e+f+g+h){
        printf("%d", e+f+g+h);
    }
    
    return 0;
}
