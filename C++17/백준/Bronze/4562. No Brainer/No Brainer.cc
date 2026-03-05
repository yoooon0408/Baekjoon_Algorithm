#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        scanf("%d %d", &b, &c);
        if(c<=b){
            printf("MMM BRAINS\n");
        }
        else{
            printf("NO BRAINS\n");
        }
    }

    return 0;
}