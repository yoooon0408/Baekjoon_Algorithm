#include<stdio.h>
int main(){
    int a, b, c, d=0, e=0, array[101];
    scanf("%d", &array[a]);
    for(int i=0;i<array[a];i++){
        scanf("%d %d", &b, &c);
        if(b>c){
            d=d+1;
        }
        else if(b<c){
            e=e+1;
        }
    }
    printf("%d %d", d, e);
    
    return 0;
}