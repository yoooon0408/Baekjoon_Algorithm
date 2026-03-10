#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<=16&&a>=12){
        if(b==0){
            printf("320");
        }
        else{
            printf("280");
        }
    }
    else{
        printf("280");
    }

    return 0;
}