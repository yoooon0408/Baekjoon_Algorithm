#include<stdio.h>
int main(){
    int sum=0, array[101];
    for(int i=0;i<5;i++){
        scanf("%d", &array[i]);
        sum=sum+array[i];
    }
    printf("%d", sum);
    
    return 0;
}