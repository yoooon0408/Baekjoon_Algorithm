#include<stdio.h>
int main(){
    int a, b, array[1000001], min=1000000, max=-1000000;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        scanf("%d ", &array[i]);
        if(max<array[i]){
            max=array[i];
        }
        if(min>array[i]){
            min=array[i];
        }
    }
    printf("%d %d", min, max);
    
    return 0;
}