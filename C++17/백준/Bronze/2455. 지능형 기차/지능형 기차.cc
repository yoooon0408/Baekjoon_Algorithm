#include<stdio.h>
int main(){
    int a, sum=0, array[10001], max=0;
    for(int i=0;i<4;i++){
        scanf("%d %d", &a, &array[i]);
        sum=sum+array[i]-a;
        if(sum>max){
            max=sum;
            }
        }
        printf("%d", max);
    
    return 0;
}