#include<stdio.h>
int main(){
    int a, b, array[100], max=0;
    for(int i=1;i<=9;i++){
        scanf("%d", &array[i]);
        if(array[i]>max){
            max=array[i];
            b=i;
        }
    }
    printf("%d\n%d", max, b);
    
    return 0;
}