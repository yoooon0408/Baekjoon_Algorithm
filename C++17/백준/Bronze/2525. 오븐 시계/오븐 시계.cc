#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d\n", &a, &b);
    scanf("%d", &c);

    if((b+c)%60==0){
        if(a+(b+c)/60<24){
            printf("%d 0",a+(b+c)/60);
        }
        else{
            printf("%d 0",a+(b+c)/60-24);
        }
        }
    else{
        if(a+(b+c)/60<24){
            printf("%d %d", a+(b+c)/60, (b+c)%60);
        }
        else{
            printf("%d %d", a+(b+c)/60-24, (b+c)%60);
        }
    }
     
    return 0;
}
