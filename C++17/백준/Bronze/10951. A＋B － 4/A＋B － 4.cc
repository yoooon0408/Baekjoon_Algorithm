#include<stdio.h>
int main(){
    int a, b, res;
    while(1){
        res=scanf("%d %d", &a, &b);
            if(res==-1){
                break;
            }
        printf("%d\n",a+b);
        }
    
    return 0;
}