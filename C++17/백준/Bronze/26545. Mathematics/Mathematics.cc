#include<stdio.h>
int main(){
    int a, array[10001], sum=0;
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        scanf("%d", &array[i]);
        sum=sum+array[i];
    }
     printf("%d", sum);
    
    return 0;
}
