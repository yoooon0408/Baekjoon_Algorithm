#include<stdio.h>
int main(){
    int array[43]={0}, a, sum=0;
    for(int i=1;i<=10;i++){
        scanf("%d", &a);
        array[a%42]=1;
    }
    for(int i=0;i<=41;i++){
        sum=sum+array[i];
    }
    printf("%d", sum);
    
    return 0;
}
